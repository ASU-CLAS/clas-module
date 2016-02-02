<?php
/**
 * @file
 */

/**
 * Helper function to setup Panelizer options.
 */
function _asu_clas_shesc_study_abroad_panelizer_setup() {
  $content_type = 'study_abroad_program';

  $panelizer_defaults = array(
    'status' => TRUE,
    'view modes' => array(
      'page_manager' => array(
        'status' => TRUE,
        'default' => TRUE,
        'choice' => FALSE,
      ),
    ),
  );

  variable_set("panelizer_defaults_node_{$content_type}", $panelizer_defaults);
}

/**
 * Helper function to set Pathauto Node Path pattern.
 */
function _asu_clas_shesc_study_abroad_set_pathauto_node_pattern() {
  $content_type = 'study_abroad_program';

  variable_set("pathauto_node_{$content_type}_pattern", 'undergraduate-experience/study-abroad/[node:title]');
}
