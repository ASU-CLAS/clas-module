<?php

/**
 * Helper function to create placeholder Study Abroad nodes for quality assurance testing.
 *
 * @see https://anders.unix.se/2011/04/13/guide-to-programmatic-node-creation-in-drupal-7/
 */
function _asu_clas_shesc_study_abroad_create_placeholder_nodes() {
  $content_installed = variable_get('asu_clas_study_abroad_content_installed', FALSE);

  if ($content_installed == TRUE) {
    return;
  }

  $placeholder_nodes = array(
    1 => array(
      'title' => 'Australia & Fiji',
      'image' => 'placeholder-study-abroad-01.jpg',
    ),
    2 => array(
      'title' => 'Fiji',
      'image' => 'placeholder-study-abroad-02.jpg',
    ),
    3 => array(
      'title' => 'France',
      'image' => 'placeholder-study-abroad-03.jpg',
    ),
    4 => array(
      'title' => 'London',
      'image' => 'placeholder-study-abroad-04.jpg',
    ),
    5 => array(
      'title' => 'New Zealand',
      'image' => 'placeholder-study-abroad-05.jpg',
    ),
  );

  foreach ($placeholder_nodes as $placeholder_node) {
    $node = new stdClass();

    $node->type = 'study_abroad_program';
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

    $node->date = date('Y-m-d H:i:s');

    $node->path = array('alias' => NULL);

    // Custom Fields
    $node->field_study_abroad_description[$node->language][0]['value'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed id egestas nisl. Praesent rutrum lorem sed lorem porta sodales. Nunc posuere tellus a velit tristique.';
    $node->field_study_abroad_experience[$node->language][0]['value'] = 'Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.';
    $node->field_study_abroad_details[$node->language][0]['value'] = 'Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.';

    $image = file_get_contents(drupal_get_path('module', 'asu_clas_shesc_study_abroad') . '/images/' . $placeholder_node['image']);
    $image_object = file_save_data($image, 'public://' . $placeholder_node['image'], FILE_EXISTS_REPLACE);

    $node->field_study_abroad_image[$node->language][0] = (array) $image_object;

    if ($node = node_submit($node)) {
      node_save($node);
    }

    if (function_exists('drush_log')) {
      drush_log(sprintf('-- Node %s saved', $node->nid), 'ok');
    }
  }

  variable_set('asu_clas_study_abroad_content_installed', TRUE);

  drupal_set_message('ASU CLAS SHESC Study Abroad Programs created', 'status');
  watchdog('asu_clas_shesc_study_abroad', 'ASU CLAS SHESC Study Abroad placeholder content populated.', $variables = array(), $severity = WATCHDOG_NOTICE, $link = NULL);
}
