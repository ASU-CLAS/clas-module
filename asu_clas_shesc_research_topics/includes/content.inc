<?php

define('ASU_CLAS_RESEARCH_AREA_TAXONOMY_NAME', 'research_area');

/**
 * Helper function to dynamically get a Term ID from a Term Name.
 */
function _asu_clas_shesc_research_topics_get_term_by_name($term_name, $vocabulary_name) {
  $term = taxonomy_get_term_by_name($term_name, $vocabular_name);

  if (!empty($term)) {
    $term_tid = array_pop($term)->tid;

    return $term_tid;
  }

  return FALSE;
}

/**
 * Helper function to create placeholder Research Topic nodes for quality assurance testing.
 */
function _asu_clas_shesc_research_topics_create_placeholder_nodes() {
  $placeholder_nodes = array(
    0 => array(
      'title' => 'Alliance for Building Faculty Diversity in the Mathematical Sciences',
      'description' => 'The Alliance Postdoctoral Fellowship at Arizona State University is designed to maximize the fellow’s opportunities for professional development and participation in the broader mathematical community.',
      'research_areas' => array(
        _asu_clas_shesc_research_topics_get_term_by_name('Applied Mathematics for the Life and Social Sciences', ASU_CLAS_RESEARCH_AREA_TAXONOMY_NAME),
      ),
      'image' => 'placeholder-01.jpg',
    ),
    1 => array(
      'title' => 'GAANN Fellowships in Applied Mathematics in the Life and Social Sciences',
      'description' => 'This project seeks to address the underrepresentation of minorities and other groups (females, persons with disabilities) in the field of (applied) mathematics.',
      'research_areas' => array(
        _asu_clas_shesc_research_topics_get_term_by_name('Applied Mathematics for the Life and Social Sciences', ASU_CLAS_RESEARCH_AREA_TAXONOMY_NAME),
        _asu_clas_shesc_research_topics_get_term_by_name('Archaeology', ASU_CLAS_RESEARCH_AREA_TAXONOMY_NAME),
      ),
      'image' => 'placeholder-02.jpg',
    ),
    2 => array(
      'title' => 'Mathematical and Theoretical Biology Institute Research Program for Undergraduates',
      'description' => 'Encourages underrepresented minorities (URMs), primarily Chicano/Latino, Native American and African American undergraduates to pursue advanced degrees in mathematics and the sciences, and to facilitate their access to selective graduate programs in these areas.',
      'research_areas' => array(
        _asu_clas_shesc_research_topics_get_term_by_name('Applied Mathematics for the Life and Social Sciences', ASU_CLAS_RESEARCH_AREA_TAXONOMY_NAME),
        _asu_clas_shesc_research_topics_get_term_by_name('Bioarchaeology', ASU_CLAS_RESEARCH_AREA_TAXONOMY_NAME),
      ),
      'image' => 'placeholder-03.jpg',
    ),
    3 => array(
      'title' => 'Mathematical and Theoretical Biology Institute: Institutional Presidential Award for Excellence in Science, Math + Engineering Mentoring',
      'description' => 'MTBI’s main objective has always been to increase the numbers of underrepresented US minorities (URMs) earning Ph.D.s in the mathematical sciences, from a pool of participants primarily composed of students from non-selective institutions or students who typically do not consider the possibility of graduate school in the mathematical sciences.',
      'research_areas' => array(
        _asu_clas_shesc_research_topics_get_term_by_name('Applied Mathematics for the Life and Social Sciences', ASU_CLAS_RESEARCH_AREA_TAXONOMY_NAME),
        _asu_clas_shesc_research_topics_get_term_by_name('Environmental Social Science', ASU_CLAS_RESEARCH_AREA_TAXONOMY_NAME),
      ),
      'image' => 'placeholder-04.jpg',
    ),
  );

  dd($placeholder_nodes);

  foreach ($placeholder_nodes as $placeholder_node) {
    $node = new stdClass();

    $node->type = 'research_topic';
    $node->language = LANGUAGE_NONE;
    node_object_prepare($node);

    $node->title = $placeholder_node['title'];
    $node->body[$node->language][0]['value'] = '';
    $node->body[$node->language][0]['summary'] = text_summary('');
    $node->body[$node->language][0]['format'] = 'full_html';

    $node->status = 1;
    $node->promote = 0;
    $node->sticky = 0;
    $node->comment = 1;
    $node->uid = 0;

    $node->date = REQUEST_TIME;
    $node->created = REQUEST_TIME;

    $node->path = array('alias' => NULL);

    // Custom Fields
    $node->research_topic_description[$node->language][0]['value'] = $placeholder_node['description'];

    $image = file_get_contents(drupal_get_path('module', 'asu_clas_shesc_research_topics') . '/images/' . $placeholder_node['image']);
    $image_object = file_save_data($image, 'public://' . $placeholder_node['image'], FILE_EXISTS_REPLACE);

    $node->research_topic_image[$node->language][0] = (array) $image_object;

    // Taxonomy Terms
    $research_areas = $placeholder_node['research_areas'];

    if (isset($research_areas) && is_array($research_areas)) {
      foreach ($research_areas as $research_area) {
        $node->research_topic_relation[$node->language][]['target_id'] = $research_area;
      }
    }
    else {
      $node->research_topic_relation[$node->language][]['target_id'] = $research_area;
    }

    node_save($node);

    if (function_exists('drush_log')) {
      drush_log(sprintf('-- Node %s saved', $node->nid), 'ok');
    }
  }

  drupal_set_message('ASU CLAS SHESC Research Topics created', 'status');
}
