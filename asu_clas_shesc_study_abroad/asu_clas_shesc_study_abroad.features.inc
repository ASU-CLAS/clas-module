<?php
/**
 * @file
 * asu_clas_shesc_study_abroad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asu_clas_shesc_study_abroad_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function asu_clas_shesc_study_abroad_node_info() {
  $items = array(
    'study_abroad_program' => array(
      'name' => t('Study Abroad Program'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
