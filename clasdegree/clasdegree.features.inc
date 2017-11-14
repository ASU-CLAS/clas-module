<?php
/**
 * @file
 * clasdegree.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clasdegree_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function clasdegree_node_info() {
  $items = array(
    'clas_degree' => array(
      'name' => t('CLAS Degree'),
      'base' => 'node_content',
      'description' => t('CLAS Degree Content Type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
