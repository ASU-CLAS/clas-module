<?php
/**
 * @file
 * show_more_content_pane.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function show_more_content_pane_defaultconfig_features() {
  return array(
    'show_more_content_pane' => array(
      'default_fieldable_panels_pane_type' => 'default_fieldable_panels_pane_type',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_fieldable_panels_pane_type().
 */
function show_more_content_pane_defaultconfig_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'show_more';
  $fieldable_panels_pane_type->title = 'Show More';
  $fieldable_panels_pane_type->description = '';
  $export['show_more'] = $fieldable_panels_pane_type;

  return $export;
}
