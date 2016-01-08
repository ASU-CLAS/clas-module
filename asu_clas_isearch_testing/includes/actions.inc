<?php
/**
 * @file
 */

define('ASU_CLAS_ISEARCH_TAXONOMY_NAME', 'isearch_expertise');

/**
 * Helper function to dynamically get a Term ID from a Term Name.
 */
function _asu_clas_isearch_testing_get_term_by_name($term_name, $vocabulary_name) {
  $term = taxonomy_get_term_by_name($term_name, $vocabular_name);

  if (!empty($term)) {
    $term_tid = array_pop($term)->tid;

    return $term_tid;
  }

  return FALSE;
}

/**
 * Helper function to create dummy iSearch Profiles for quality assurance testing.
 */
function _asu_clas_isearch_testing_create_profiles() {
  $profiles = array(
    0 => array(
      'name' => 'Jennifer Adams (Applied Mathematics)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Applied Mathematics', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    1 => array(
      'name' => 'Aaron Smith (Mathematical Biology)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Mathematical Biology', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    2 => array(
      'name' => 'Matt Jones (Computational Mathematics)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Computational Mathematics', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    3 => array(
      'name' => 'Brad Cook (Systems and Control Theory)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Systems and Control Theory', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    4 => array(
      'name' => 'Elizabeth Hodges (Non-linear Dynamical Systems)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Non-linear Dynamical Systems', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    5 => array(
      'name' => 'Jessica Butler (Probability)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Probability', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    6 => array(
      'name' => 'Steven James (Theoretical Mathematics)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Theoretical Mathematics', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    7 => array(
      'name' => 'Mary Parker (Algebra and Combinatorics)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Algebra and Combinatorics', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    8 => array(
      'name' => 'Christopher Nelson (Analysis)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Analysis', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    9 => array(
      'name' => 'John Anderson (Geometry)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Geometry', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    10 => array(
      'name' => 'Michael Davis (Mathematics Education)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Mathematics Education', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
    11 => array(
      'name' => 'Linda Harris (Statistics)',
      'expertise_areas' => array(
        _asu_clas_isearch_testing_get_term_by_name('Statistics', ASU_CLAS_ISEARCH_TAXONOMY_NAME),
      ),
    ),
  );

  foreach ($profiles as $profile) {
    $node = new stdClass();

    $node->type = 'asu_isearch_profile';
    $node->language = LANGUAGE_NONE;
    node_object_prepare($node);

    $node->title = 'ASU Local iSearch Directory Profile';
    $node->body[$node->language][0]['value'] = 'Lorem ipsum dolor set amit.';
    $node->body[$node->language][0]['summary'] = text_summary('Lorem ipsum dolor set amit.');
    $node->body[$node->language][0]['format'] = 'full_html';

    $node->status = 1;
    $node->promote = 0;
    $node->sticky = 0;
    $node->comment = 1;
    $node->uid = 1;

    $node->date = REQUEST_TIME;
    $node->created = REQUEST_TIME;

    $node->path = array('alias' => NULL);

    // Custom Fields
    $node->field_isearch_displayname[$node->language][0]['value'] = $profile['name'];
    $node->field_isearch_firstname[$node->language][0]['value'] = NULL;
    $node->field_isearch_lastname[$node->language][0]['value'] = NULL;
    $node->field_isearch_employee_type[$node->language][0]['value'] = 'Faculty';

    // Taxonomy Terms
    $expertise_areas = $profile['expertise_areas'];

    if (isset($expertise_areas) && is_array($expertise_areas)) {
      foreach ($expertise_areas as $expertise_area) {
        $node->field_isearch_expertise_areas[$node->language][]['tid'] = $expertise_area;
      }
    }
    else {
      $node->field_isearch_expertise_areas[$node->language][]['tid'] = $expertise_areas;
    }

    node_save($node);

    // Field Collection Item(s)
    if ($node->nid) {
      $fc_item = entity_create('field_collection_item', array('field_name' => 'field_isearch_affiliations'));

      $fc_item->setHostEntity('node', $node);

      $fc_wrapper = entity_metadata_wrapper('field_collection_item', $fc_item);

      $fc_wrapper->field_isearch_affil_empl_key->set('Faculty');
      $fc_wrapper->field_isearch_affil_empl_type->set('Faculty');

      $fc_wrapper->save(TRUE);

      node_save($node);
    }

    drush_log(sprintf(' - Node %s saved', $node->nid), 'ok');
  }

  drupal_set_message('ASU iSearch Local Directory Profiles created', 'status');
}

/**
 * Helper function to create taxonomy term(s) in a vocabulary.
 */
function _asu_clas_isearch_testing_create_taxonomy_term($name, $vid) {
  $term = new stdClass();

  $term->name = $name;
  $term->vid = $vid;

  taxonomy_term_save($term);

  return $term->tid;
}

/**
 * Helper function to delete terms from iSearch Expertise taxonomy.
 */
function _asu_clas_isearch_testing_delete_terms() {
  $vocab = taxonomy_vocabulary_machine_name_load('isearch_expertise');
  $terms = taxonomy_get_tree($vocab->vid);

  if (!empty($terms)) {
    foreach ($terms as $term) {
      taxonomy_term_delete($term->tid);

      drush_log(sprintf(' - Deleted Term %s', $term->tid), 'ok');
    }
  }
}

/**
 * Helper function to add terms to iSearch Expertise taxonomy.
 */
function _asu_clas_isearch_testing_add_terms() {
  $expertise_areas = array(
    'Applied Mathematics',
    'Mathematical Biology',
    'Computational Mathematics',
    'Systems and Control Theory',
    'Non-linear Dynamical Systems',
    'Probability',
    'Theoretical Mathematics',
    'Algebra and Combinatorics',
    'Analysis',
    'Geometry',
    'Mathematics Education',
    'Statistics',
  );

  $vid = taxonomy_vocabulary_machine_name_load('isearch_expertise')->vid;

  foreach ($expertise_areas as $expertise_area) {
    $term = new stdClass();

    $term->name = $expertise_area;
    $term->vid = $vid;

    taxonomy_term_save($term);

    drush_log(sprintf(' - Term %s created', $term->tid), 'ok');
  }

  drupal_set_message('ASU iSearch Local Directory Expertise terms created', 'status');
}

/**
 * Helper function to delete nodes from ASU iSearch Profile content type.
 */
function _asu_clas_isearch_testing_delete_profiles() {
  $result= db_query("SELECT * FROM node AS n WHERE n.type = 'asu_isearch_profile' AND n.uid = 1");

  foreach ($result as $record) {
    node_delete($record->nid);
  }
}
