<?php
/**
 * @file
 */

define('ASU_CLAS_TAXONOMY_NAME', 'research_area');

/**
 * Create Taxonomy
 */
function _asu_clas_research_areas_create_taxonomy() {
  $research_area = (object) array(
    'description' => '',
    'hierarchy' => 1,
    'machine_name' => ASU_CLAS_TAXONOMY_NAME,
    'module' => 'taxonomy',
    'name' => 'Research Area',
    'weight' => 0,
  );

  taxonomy_vocabulary_save($research_area);
}

/**
 * Create Taxonomy Fields
 */
function _asu_clas_research_areas_create_taxonomy_fields() {
  // "Research Area Icon" field.
  $field = array(
    'field_name' => 'research_area_icon',
    'type' => 'image',
    'label' => 'Research Area Icon',
  );

  field_create_field($field);

  $instance = array(
    'field_name' => 'research_area_icon',
    'entity_type' => 'taxonomy_term',
    'bundle' => ASU_CLAS_TAXONOMY_NAME,
    'label' => 'Research Area Icon',
    'description' => '',
    'required' => FALSE,
    'widget' => array(
      'type' => 'media_generic',
      'weight' => 2
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'image',
        'settings' => array(
          'image_style' => 'clas_research_area_icon',
          'image_link' => NULL,
        ),
      ),
    ),
  );

  field_create_instance($instance);

  // "Research Area Image" field.
  $field = array(
    'field_name' => 'research_area_image',
    'type' => 'image',
    'label' => 'Research Area Image',
  );

  field_create_field($field);

  $image = file_get_contents(drupal_get_path('module', 'asu_clas_research_areas') . '/images/placeholder-200x200.png');
  $image_object = file_save_data($image, 'public://placeholder-200x200.png', FILE_EXISTS_RENAME);

  $instance = array(
    'bundle' => ASU_CLAS_TAXONOMY_NAME,
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => NULL,
          'image_style' => 'asu_clas_research_area_image',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'research_area_image',
    'label' => 'Research Area Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => $image_object->fid,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  field_create_instance($instance);

  // "Research Area iSearch Reference" field.
  $field = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'research_area_isearch_relation',
    'foreign keys' => array(
      'taxonomy_term_data' => array(
        'columns' => array(
          'target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'isearch_expertise' => 'isearch_expertise',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  field_create_field($field);

  $instance = array(
    'bundle' => ASU_CLAS_TAXONOMY_NAME,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'research_area_isearch_relation',
    'label' => 'Research Area iSearch Relationship',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  field_create_instance($instance);
}

/**
 * Add Taxonomy Terms
 */
function _asu_clas_research_areas_add_taxonomy_terms() {
  if (!isset($_SERVER['PANTHEON_ENVIRONMENT'])) {
    $units = array(
      0 =>  'American Indian Studies Program',
      1 =>  'Department of Chemistry and Biochemistry',
      2 =>  'Department of English',
      3 =>  'Department of Military Science',
      4 =>  'Department of Physics',
      5 =>  'Department of Psychology',
      6 =>  'Historical, Philosophical & Religious Studies, Sch',
      7 =>  'Hugh Downs School of Human Communication',
      8 =>  'Sanford School of Social and Family Dynamics',
      9 =>  'School of Earth and Space Exploration',
      10 => 'School of Geographical Sciences and Urban Planning',
      11 => 'School of Human Evolution & Social Change',
      12 => 'School of International Letters and Cultures',
      13 => 'School of Life Sciences',
      14 => 'School of Mathematical and Statistical Sciences',
      15 => 'School of Politics and Global Studies',
      16 => 'School of Social Transformation',
      17 => 'School of Transborder Studies',
      18 => 'School of Molecular Sciences'
    );

    $clas_unit = variable_get('clas_unit');

    if (empty($clas_unit)) {
      variable_set('clas_unit', $units[2]);
    }
  }

  $clas_unit = variable_get('clas_unit');

  if ($clas_unit === NULL) {
    if (function_exists('drush_log')) {
      drush_log('-- System variable `clas_unit` not defined.', 'ok');
    }

    watchdog('asu_clas_research_areas', 'System variable `clas_unit` not defined.');

    return;
  }
  else {
    if (function_exists('drush_log')) {
      drush_log(sprintf('-- System variable `clas_unit` defined as "%s".', $clas_unit), 'ok');
    }

    watchdog('asu_clas_research_areas', 'System variable `clas_unit` defined as "%unit".', array('%unit' => $clas_unit), WATCHDOG_DEBUG);
  }

  // School of Molecular Sciences
  $chemistry = array(
    0 => array(
      'name' => 'Energy & Sustainability',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-09.png',
    ),
    1 => array(
      'name' => 'Biosphere and Geologic Systems',
      'description' => NULL,
      'weight' => 2,
      'icon' => 'icon-11.png',
    ),
    2 => array(
      'name' => 'Molecular Basis of Health',
      'description' => NULL,
      'weight' => 4,
      'icon' => 'icon-05.png',
    ),
    3 => array(
      'name' => 'Fundamental Molecular Science',
      'description' => NULL,
      'weight' => 6,
      'icon' => 'icon-07.png',
    ),
    4 => array(
      'name' => 'Materials and Nanoscience',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-10.png',
    ),
    5 => array(
      'name' => 'Structure and Function of Biosystems',
      'description' => NULL,
      'weight' => 3,
      'icon' => 'icon-12.png',
    ),
    6 => array(
      'name' => 'Chemical Biology',
      'description' => NULL,
      'weight' => 5,
      'icon' => 'icon-06.png',
    ),
    7 => array(
      'name' => 'Molecular Education and Outreach',
      'description' => NULL,
      'weight' => 7,
      'icon' => 'icon-08.png',
    ),
    8 => array(
      'name' => 'Materials and Nanoscience',
      'description' => NULL,
      'weight' => 1,
      'icon' => 'icon-10.png',
    ),
  );

  // Department of English
  $english = array(
    1 => array(
      'name' => 'Textual Studies',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-17.png',
    ),
    2 => array(
      'name' => 'Historical Studies',
      'description' => NULL,
      'weight' => 1,
      'icon' => 'icon-18.png',
    ),
    3 => array(
      'name' => 'Transdisciplinary Studies',
      'description' => NULL,
      'weight' => 2,
      'icon' => 'icon-19.png',
    ),
    4 => array(
      'name' => 'Creative Studies',
      'description' => NULL,
      'weight' => 3,
      'icon' => 'icon-20.png',
    ),
    5 => array(
      'name' => 'Pedagogical Studies',
      'description' => NULL,
      'weight' => 4,
      'icon' => 'icon-21.png',
    ),
  );

  // School of Mathematical and Statistical Sciences
  $math = array(
    1 => array(
      'name' => 'Applied Mathematics',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-01.png',
    ),
    10 => array(
      'name' => 'Mathematical Biology',
      'description' => NULL,
      'parent' => 0,
      'weight' => 10,
      'icon' => 'placeholder-50x50.png',
    ),
    11 => array(
      'name' => 'Computational Mathematics',
      'description' => NULL,
      'parent' => 0,
      'weight' => 10,
      'icon' => 'placeholder-50x50.png',
    ),
    12 => array(
      'name' => 'Systems and Control Theory',
      'description' => NULL,
      'parent' => 0,
      'weight' => 10,
      'icon' => 'placeholder-50x50.png',
    ),
    13 => array(
      'name' => 'Non-linear Dynamical Systems',
      'description' => NULL,
      'parent' => 0,
      'weight' => 10,
      'icon' => 'placeholder-50x50.png',
    ),
    14 => array(
      'name' => 'Probability',
      'description' => NULL,
      'parent' => 0,
      'weight' => 10,
      'icon' => 'placeholder-50x50.png',
    ),
    2 => array(
      'name' => 'Theoretical Mathematics',
      'description' => NULL,
      'weight' => 1,
      'icon' => 'icon-02.png',
    ),
    20 => array(
      'name' => 'Algebra and Combinatorics',
      'description' => NULL,
      'parent' => 0,
      'weight' => 10,
      'icon' => 'placeholder-50x50.png',
    ),
    21 => array(
      'name' => 'Analysis',
      'description' => NULL,
      'parent' => 0,
      'weight' => 10,
      'icon' => 'placeholder-50x50.png',
    ),
    22 => array(
      'name' => 'Geometry',
      'description' => NULL,
      'parent' => 0,
      'weight' => 10,
      'icon' => 'placeholder-50x50.png',
    ),
    3 => array(
      'name' => 'Mathematics Education',
      'description' => NULL,
      'weight' => 2,
      'icon' => 'icon-03.png',
    ),
    4 => array(
      'name' => 'Statistics',
      'description' => NULL,
      'weight' => 3,
      'icon' => 'icon-04.png',
    ),
  );

  // Department of Physics
  $physics = array(
    1 => array(
      'name' => 'Biophysics & Biological Physics',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-13.png',
    ),
    2 => array(
      'name' => 'Cosmology, Particle and Astrophysics',
      'description' => NULL,
      'weight' => 1,
      'icon' => 'icon-15.png',
    ),
    3 => array(
      'name' => 'Nanoscience and Materials Physics',
      'description' => NULL,
      'weight' => 2,
      'icon' => 'icon-14.png',
    ),
    4 => array(
      'name' => 'Physics and Society',
      'description' => NULL,
      'weight' => 3,
      'icon' => 'icon-16.png',
    ),
  );

  // Department of Psychology
  $psychology = array(
    1 => array(
      'name' => 'Behavioral Neuroscience',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    2 => array(
      'name' => 'Clinical Psychology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    3 => array(
      'name' => 'Cognitive Science',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    4 => array(
      'name' => 'Developmental Psychology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    5 => array(
      'name' => 'Quantitative Psychology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    6 => array(
      'name' => 'Social Psychology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
  );

  // School of Geographical Sciences and Urban Planning
  $sgsup = array(
    1 => array(
      'name' => 'Computational Spatial Science',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-34.png',
    ),
    2 => array(
      'name' => 'Place, Identities and Culture',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-35.png',
    ),
    3 => array(
      'name' => 'Earth Systems & Climate Science',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-36.png',
    ),
    4 => array(
      'name' => 'Sustainability Science & Studies',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-37.png',
    ),
    5 => array(
      'name' => 'Community Development for Social Equity',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-38.png',
    ),
    6 => array(
      'name' => 'Spatial and Economic Analysis',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-39.png',
    ),
    7 => array(
      'name' => 'Transportation Planning & Policy',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-40.png',
    ),
    8 => array(
      'name' => 'Urban Design & Sustainable Cities',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-41.png',
    ),
  );

  // School of Human Evolution & Social Change
  $shesc = array(
    0 => array(
      'name' => 'Applied Mathematics for the Life and Social Sciences',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-26.png',
    ),
    1 => array(
      'name' => 'Archaeology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-27.png',
    ),
    2 => array(
      'name' => 'Bioarchaeology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-28.png',
    ),
    3 => array(
      'name' => 'Environmental Social Science',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-29.png',
    ),
    4 => array(
      'name' => 'Evolutionary Anthropology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-30.png',
    ),
    5 => array(
      'name' => 'Global Health & Medical Anthropology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-31.png',
    ),
    6 => array(
      'name' => 'Paleoanthropology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-32.png',
    ),
    7 => array(
      'name' => 'Sociocultural Anthropology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-33.png',
    ),
  );

  // School of International Letters and Cultures
  $silc = array(
    1 => array(
      'name' => 'Foreign Language Immersion',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'icon-22.png',
    ),
    2 => array(
      'name' => 'Stronger Community Relationships',
      'description' => NULL,
      'weight' => 1,
      'icon' => 'icon-25.png',
    ),
    3 => array(
      'name' => 'Transformative Experiences',
      'description' => NULL,
      'weight' => 2,
      'icon' => 'icon-24.png',
    ),
    4 => array(
      'name' => 'Greater Cultural Awareness',
      'description' => NULL,
      'weight' => 3,
      'icon' => 'icon-23.png',
    ),
  );

  switch($clas_unit) {
    case 'School of Molecular Sciences':
      $term_names = $chemistry;
      break;
    case 'Department of English':
      $term_names = $english;
      break;
    case 'School of Mathematical and Statistical Sciences':
      $term_names = $math;
      break;
    case 'Department of Physics':
      $term_names = $physics;
      break;
    case 'Department of Psychology':
      $term_names = $psychology;
      break;
    case 'School of Geographical Sciences and Urban Planning':
      $term_names = $sgsup;
      break;
    case 'School of Human Evolution & Social Change':
      $term_names = $shesc;
      break;
    case 'School of International Letters and Cultures':
      $term_names = $silc;
      break;
    default:
      break;
  }

  _asu_clas_research_areas_add_terms($term_names, 'Research Area', ASU_CLAS_TAXONOMY_NAME);
}

/**
 * Enable the /taxonomy/term/%taxonomy_term Page Manager plugin.
 */
function _asu_clas_research_areas_panelizer_setup() {
  variable_set('page_manager_term_view_disabled', FALSE);

  $panelizer_defaults = array(
    'status' => TRUE,
    'view modes' => array(
      'page_manager' => array(
        'status' => TRUE,
        'default' => TRUE,
        'choice' => FALSE,
      ),
    ),
  );

  variable_set('panelizer_defaults_taxonomy_term_research_area', $panelizer_defaults);
}

/**
 * Set Pathauto Taxonomy Term Path pattern.
 */
function _asu_clas_research_areas_set_pathauto_taxonomy_term_pattern() {
  variable_set('pathauto_taxonomy_term_research_area_pattern', 'research/research-areas/[term:name]');
}

/**
 * Helper function to add terms to taxonomy.
 */
function _asu_clas_research_areas_add_terms($term_names, $vocabulary_name, $vocabulary_machine_name) {
  $vocab = taxonomy_vocabulary_machine_name_load($vocabulary_machine_name);

  if ($vocab === FALSE) {
    $vocab = (object) array(
      'name' => $vocabulary_name,
      'machine_name' => $vocabulary_machine_name,
    );

    $vocab = taxonomy_vocabulary_machine_name_load($vocabulary_machine_name);
  }

  if (is_object($vocab) && property_exists($vocab, 'vid') && $vocab->vid > 0) {
    foreach ($term_names as $term_name) {
      $term = taxonomy_get_term_by_name($term_name['name'], $vocabulary_machine_name);

      if (count($term) == 0) {
        $icon = file_get_contents(drupal_get_path('module', 'asu_clas_research_areas') . '/images/' . $term_name['icon']);
        $icon_object = file_save_data($icon, 'public://' . $term_name['icon'], FILE_EXISTS_RENAME);

        $term = (object) array(
          'vid' => $vocab->vid,
          'name' => $term_name['name'],
          'tid' => '',
          'description' => $term_name['description'],
          'parent' => isset($term_name['parent']) ? $term_name['parent'] : 0,
          'research_area_icon' => array(
            LANGUAGE_NONE => array(
              0 => (array) $icon_object,
            ),
          ),
        );

        $status = taxonomy_term_save($term);
      }
    }
  }
}
