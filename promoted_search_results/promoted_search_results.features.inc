<?php
/**
 * @file
 * promoted_search_results.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function promoted_search_results_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function promoted_search_results_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function promoted_search_results_node_info() {
  $items = array(
    'promoted_search_result' => array(
      'name' => t('Promoted Search Result'),
      'base' => 'node_content',
      'description' => t('This content type allows for a promoted search result html to be inserted into the search results based on key words.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
