<?php
/**
 * @file
 */

/**
 * Helper function to create Content Type on module installation.
 */
function _asu_clas_shesc_centers_create_content_type() {
  node_types_rebuild();

  $content_type = 'center_page';

  $type = node_type_load($content_type);

  if (!$type) {
    $type = array(
      'type' => $content_type,
      'name' => t('Center Page'),
      'base' => 'node_content',
      'description' => t(''),
      'help' => '',
      'custom' => 1,
      'modified' => 1,
      'locked' => TRUE,
      'disabled' => 0,
      'is_new' => 1,
      'has_title' => 1,
      'title_label' => 'Title',
    );

    $type = node_type_set_defaults($type);
    node_add_body_field($type);

    $status = node_type_save($type);

    variable_set("comment_{$content_type}", 1);
    variable_set("menu_options_{$content_type}", array('menu-center-cbr', 'main-menu'));
    variable_set("menu_parent_{$content_type}", '');
    variable_set("node_options_{$content_type}", array('status'));
    variable_set("node_preview_{$content_type}", 0);
    variable_set("node_submitted_{$content_type}", 0);
  }
}

/**
 * Helper function to create Centers menu.
 */
function _asu_clas_shesc_centers_create_menu() {
  $menu = array(
    'menu_name' => substr('menu-center-cbr', 0, 32),
    'title' => 'Center for Bioarchaeological Research',
    'description' => '',
  );

  menu_save($menu);
}

/**
 * Helper function to upload Hero image for Panelizer layout(s).
 */
function _asu_clas_shesc_centers_upload_hero_image() {
  $image = file_get_contents(drupal_get_path('module', 'asu_clas_shesc_centers') . '/images/hero-center-cbr.jpg');
  $file = file_save_data($image, 'public://hero-center-cbr.jpg', FILE_EXISTS_REPLACE);

  $file->status = FILE_STATUS_PERMANENT;

  file_save($file);
}

/**
 * Helper function to setup Panelizer options.
 */
function _asu_clas_shesc_centers_panelizer_setup() {
  $content_type = 'center_page';

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
function _asu_clas_shesc_centers_set_pathauto_node_pattern() {
  $content_type = 'center_page';

  variable_set("pathauto_node_{$content_type}_pattern", 'research/centers/[node:title]');
}
