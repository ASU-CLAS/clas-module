<?php
/**
 * @file
 * clasdegree.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function clasdegree_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__clas_degree';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__clas_degree'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_clas_degree';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-clas-degree-left-side-menu-',
  );
  $export['menu_options_clas_degree'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_clas_degree';
  $strongarm->value = 'menu-clas-degree-left-side-menu-:0';
  $export['menu_parent_clas_degree'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_clas_degree';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_clas_degree'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_clas_degree';
  $strongarm->value = '1';
  $export['node_preview_clas_degree'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_clas_degree';
  $strongarm->value = 0;
  $export['node_submitted_clas_degree'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_clas_degree';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_node_clas_degree'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:clas_degree:page_manager_selection';
  $strongarm->value = 'node:clas_degree:default';
  $export['panelizer_node:clas_degree:page_manager_selection'] = $strongarm;

  return $export;
}
