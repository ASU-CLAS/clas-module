<?php
/**
 * @file
 * clas_paragraphs_first_set.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clas_module_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function clas_module_paragraphs_info() {
  $items = array(
    'clas_cta_footer' => array(
      'name' => 'CLAS CTA Footer',
      'bundle' => 'clas_cta_footer',
      'locked' => '1',
    ),
    'clas_number_highlighter' => array(
      'name' => 'CLAS Number Highlighter',
      'bundle' => 'clas_number_highlighter',
      'locked' => '1',
    ),
    'clas_two_column_image_left' => array(
      'name' => 'CLAS Two Column Image Left',
      'bundle' => 'clas_two_column_image_left',
      'locked' => '1',
    ),
    'clas_two_column_image_right' => array(
      'name' => 'CLAS Two Column Image Right',
      'bundle' => 'clas_two_column_image_right',
      'locked' => '1',
    ),
  );
  return $items;
}
