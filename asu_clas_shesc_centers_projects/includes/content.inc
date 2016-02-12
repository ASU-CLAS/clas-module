<?php
/**
 * @file
 */

/**
 * Helper function to create placeholder nodes for quality assurance testing.
 */
function _asu_clas_shesc_centers_projects_create_placeholder_nodes() {
  $path = 'research/center/bioarchaeological-research';

  $placeholder_nodes = array(
    0 => array(
      'title' => 'Ancient Andean Paleodiet and Paleomobility',
      'description' => 'The Ancient Andean Paleodiet and Paleomobility project examines lived experiences, particularly migration and dietary choices, in what are now Peru, Bolivia, Chile and Argentina.',
      'image' => 'center-project-01.jpg',
    ),
    1 => array(
      'title' => 'Ancient Tuberculosis in the Americas',
      'description' => 'Tuberculosis has afflicted human populations for millennia and remains a significant cause of morbidity and mortality in many parts of the world today.',
      'image' => 'center-project-02.jpg',
    ),
    2 => array(
      'title' => 'Bioarchaeology of Abydos, Egypt',
      'description' => 'The Abydos bioarchaeological collection, one of the largest and richest recovered from any site in Egypt, has been generated in large part by excavations undertaken since the 1980s.',
      'image' => 'center-project-03.jpg',
    ),
    3 => array(
      'title' => 'Bioarchaeology of Copán, Honduras',
      'description' => 'This project focuses on the life histories and population biology of individuals interred within the Copán Pocket during the first millennium after Christ.',
      'image' => 'center-project-04.jpg',
    ),
  );

  foreach ($placeholder_nodes as $placeholder_node) {
    $node = new stdClass();

    $node->type = 'center_project';
    $node->language = LANGUAGE_NONE;
    node_object_prepare($node);

    $node->title = $placeholder_node['title'];
    $node->body[$node->language][0]['value'] = 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.';
    $node->body[$node->language][0]['summary'] = text_summary('');
    $node->body[$node->language][0]['format'] = 'panopoly_wysiwyg_text';

    $node->status = 1;
    $node->promote = 0;
    $node->sticky = 0;
    $node->comment = 1;
    $node->uid = 0;

    $node->date = REQUEST_TIME;
    $node->created = REQUEST_TIME;

    $node->path = array('alias' => NULL);

    // Custom Fields
    $node->center_project_description[$node->language][0]['value'] = $placeholder_node['description'];

    $image = file_get_contents(drupal_get_path('module', 'asu_clas_shesc_centers_projects') . '/images/' . $placeholder_node['image']);
    $image_object = file_save_data($image, 'public://' . $placeholder_node['image'], FILE_EXISTS_REPLACE);

    $node->center_project_image[$node->language][0] = (array) $image_object;

    node_save($node);

    if (function_exists('drush_log')) {
      drush_log(sprintf('-- Node %s saved', $node->nid), 'ok');
    }
  }

  drupal_set_message('ASU CLAS SHESC Centers Projects nodes created', 'status');
}
