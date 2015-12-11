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
    'Energy & Sustainability',
    'Biosphere and Geologic Systems',
    'Molecular Basis of Health',
    'Fundamental Molecular Science',
    'Materials and Nanoscience',
    'Structure and Function of Biosystems',
    'Chemical Biology',
    'Molecular Education and Outreach',
    'Materials and Nanoscience',
  );

  // Department of English
  $english = array(
    'Textual Studies',
    'Historical Studies',
    'Transdisciplinary Studies',
    'Creative Studies',
    'Pedagogical Studies',
  );

  // School of Mathematical and Statistical Sciences
  $math = array(
    'Applied Mathematics',
    'Theoretical Mathematics',
    'Mathematics Education',
    'Statistics',
  );

  // Department of Physics
  $physics = array(
    'Biophysics & Biological Physics',
    'Cosmology, Particle and Astrophysics',
    'Nanoscience and Materials Physics',
    'Physics and Society',
  );

  // Department of Psychology
  $psychology = array(
    'Behavioral Neuroscience',
    'Clinical Psychology',
    'Cognitive Science',
    'Developmental Psychology',
    'Quantitative Psychology',
    'Social Psychology',
  );

  // School of Geographical Sciences and Urban Planning
  $sgsup = array(
    'Computational Spatial Science',
    'Place, Identities and Culture',
    'Earth Systems & Climate Science',
    'Sustainability Science & Studies',
    'Community Development for Social Equity',
    'Spatial and Economic Analysis',
    'Transportation Planning & Policy',
    'Urban Design & Sustainable Cities',
  );

  // School of Human Evolution & Social Change
  $shesc = array(
    'Applied Mathematics for the Life and Social Sciences',
    'Archaeology',
    'Bioarchaeology',
    'Environmental Social Science',
    'Evolutionary Anthropology',
    'Global Health & Medical Anthropology',
    'Paleoanthropology',
    'Sociocultural Anthropology',
  );

  // School of International Letters and Cultures
  $silc = array();

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

// Enable the /taxonomy/term/%taxonomy_term Page Manager plugin.
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
      $term = taxonomy_get_term_by_name($term_name, $vocabulary_machine_name);

      if (count($term) == 0) {
        $term = (object) array(
          'name' => $term_name,
          'vid' => $vocab->vid,
        );

        taxonomy_term_save($term);
      }
    }
  }
}
