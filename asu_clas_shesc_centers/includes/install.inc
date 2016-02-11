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
  $files = array(
    'hero-center-cbr-01.jpg',
    'hero-center-cbr-02.jpg',
  );

  foreach ($files as $file) {
    $image = file_get_contents(drupal_get_path('module', 'asu_clas_shesc_centers') . '/images/' . $file);
    $object = file_save_data($image, 'public://' . $file, FILE_EXISTS_REPLACE);

    $object->status = FILE_STATUS_PERMANENT;

    file_save($object);
  }
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

/**
 * Helper function to create Fieldable Panels Panes on module installation.
 */
function _asu_clas_shesc_centers_create_fieldable_panels_panes() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1455225040,
    'title' => 'Center for Bioarchaeological Research',
    'log' => '',
    'bundle' => 'hero',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
    'admin_title' => 'hero-center-cbr-01',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1455225040,
    'uuid' => 'e59da0bf-1aa6-4d55-90f5-974de1a2486e',
    'language' => 'und',
    'field_webspark_hero_bgimg' => array(
      'und' => array(
        0 => array(
          'fid' => 151,
          'uid' => 17,
          'filename' => 'hero-center-cbr-01.jpg',
          'uri' => 'public://hero-center-cbr-01.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 154919,
          'status' => 1,
          'timestamp' => 1455225040,
          'type' => 'image',
          'uuid' => 'd8436ea2-1a7c-4b2e-ba0e-c2ec8c19a170',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'metadata' => array(
            'height' => 380,
            'width' => 1600,
          ),
          'alt' => '',
          'title' => '',
        ),
      ),
    ),
    'field_webspark_hero_blurb' => array(),
    'field_webspark_hero_gradbtn' => array(),
    'field_webspark_hero_primarybtn' => array(),
    'field_webspark_hero_ugradbtn' => array(),
  );

  $fpps[] = array(
    'timestamp' => 1455224809,
    'title' => 'Center for Bioarchaeological Research',
    'log' => '',
    'bundle' => 'banner',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
    'admin_title' => 'hero-center-cbr-02',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1455224809,
    'uuid' => '0acc4f0d-1961-470b-8949-8d158363f2b9',
    'language' => 'und',
    'field_banner_image' => array(
      'und' => array(
        0 => array(
          'fid' => 152,
          'uid' => 17,
          'filename' => 'hero-center-cbr-02.jpg',
          'uri' => 'public://hero-center-cbr-02.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 86778,
          'status' => 1,
          'timestamp' => 1455224809,
          'type' => 'image',
          'uuid' => 'cb1cc303-3d97-4ec4-b299-191f3a21251b',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'metadata' => array(
            'height' => 200,
            'width' => 1600,
          ),
          'alt' => '',
          'title' => '',
        ),
      ),
    ),
  );

  foreach ($fpps as $fpp) {
    $entity = fieldable_panels_panes_create($fpp);
    $pane = fieldable_panels_panes_save($entity);

    if (function_exists('drush_log')) {
      drush_log(sprintf('-- Fieldable Panels Pane %s created', $pane->fpid), 'ok');
    }
  }
}
