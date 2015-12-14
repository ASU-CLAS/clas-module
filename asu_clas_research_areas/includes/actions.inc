<?php
/**
 * @file
 */

define('ASU_CLAS_TAXONOMY_NAME', 'research_area');
define('ASU_CLAS_TAXONOMY_FIELD', 'field_research_area_image');

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
 * Create Taxonomy Field
 */
function _asu_clas_research_areas_create_taxonomy_fields() {
  $field = array(
    'field_name' => ASU_CLAS_TAXONOMY_FIELD,
    'type' => 'image',
    'label' => 'Research Area Image',
  );

  field_create_field($field);

  $instance = array(
    'field_name' => ASU_CLAS_TAXONOMY_FIELD,
    'entity_type' => 'taxonomy_term',
    'bundle' => ASU_CLAS_TAXONOMY_NAME,
    'label' => 'Research Area Image',
    'description' => '',
    'required' => FALSE,
    'widget' => array(
      'type' => 'media_generic',
      'weight' => 2
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

    variable_set('clas_unit', $units[2]);
  }

  $clas_unit = variable_get('clas_unit');

  if ($clas_unit === NULL) {
    watchdog('asu_clas_research_areas', 'System variable `clas_unit` not defined.');

    return;
  }
  else {
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
    2 => array(
      'name' => 'Theoretical Mathematics',
      'description' => NULL,
      'weight' => 1,
      'icon' => 'icon-02.png',
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
      'icon' => 'placeholder-50x50.png',
    ),
    2 => array(
      'name' => 'Place, Identities and Culture',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    3 => array(
      'name' => 'Earth Systems & Climate Science',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    4 => array(
      'name' => 'Sustainability Science & Studies',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    5 => array(
      'name' => 'Community Development for Social Equity',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    6 => array(
      'name' => 'Spatial and Economic Analysis',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    7 => array(
      'name' => 'Transportation Planning & Policy',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    8 => array(
      'name' => 'Urban Design & Sustainable Cities',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
  );

  // School of Human Evolution & Social Change
  $shesc = array(
    0 => array(
      'name' => 'Applied Mathematics for the Life and Social Sciences',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    1 => array(
      'name' => 'Archaeology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    2 => array(
      'name' => 'Bioarchaeology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    3 => array(
      'name' => 'Environmental Social Science',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    4 => array(
      'name' => 'Evolutionary Anthropology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    5 => array(
      'name' => 'Global Health & Medical Anthropology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    6 => array(
      'name' => 'Paleoanthropology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
    ),
    7 => array(
      'name' => 'Sociocultural Anthropology',
      'description' => NULL,
      'weight' => 0,
      'icon' => 'placeholder-50x50.png',
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
          'description' => $term_name['description'],
          'field_research_area_image' => array(
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
