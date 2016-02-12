<?php
/**
 * @file
 */

/**
 * Helper function to create Content Type on module installation.
 */
function _asu_clas_shesc_centers_projects_create_content_type() {
  node_types_rebuild();

  $content_type = 'center_project';

  $type = node_type_load($content_type);

  if (!$type) {
    $type = array(
      'type' => $content_type,
      'name' => t('Center Project'),
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
    variable_set("menu_options_{$content_type}", array());
    variable_set("menu_parent_{$content_type}", '');
    variable_set("node_options_{$content_type}", array('status'));
    variable_set("node_preview_{$content_type}", 0);
    variable_set("node_submitted_{$content_type}", 0);
  }
}

/**
 * Helper function to create Content Type Fields on module installation.
 */
function _asu_clas_shesc_centers_projects_create_content_type_fields() {
  $field_bases = array();
  $field_instances = array();

  $body_instance = field_info_instance('node', 'body', 'center_project');

  $body_settings = array(
    'widget' => array(
      'weight' => 5,
    ),
  );

  $body = array_merge($body_instance, $body_settings);

  field_update_instance($body);

  $fields = array(
    1 => array(
      'field_name' => 'center_project_description',
      'label' => 'Center Project Description',
      'type' => 'text_long',
    ),
    2 => array(
      'field_name' => 'center_project_image',
      'label' => 'Center Project Image',
      'type' => 'image',
    ),
  );

  foreach ($fields as $field) {
    field_create_field($field);
  }

  $image = file_get_contents(drupal_get_path('module', 'asu_clas_shesc_centers_projects') . '/images/placeholder-200x200.png');
  $image_object = file_save_data($image, 'public://placeholder-200x200.png', FILE_EXISTS_RENAME);

  $instances = array(
    1 => array(
      'bundle' => 'center_project',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'center_project_description',
      'label' => 'Center Project Description',
      'required' => FALSE,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'maxlength_js' => '',
          'maxlength_js_enforce' => 0,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'maxlength_js_truncate_html' => 0,
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 2,
      ),
    ),
    2 => array(
      'bundle' => 'center_project',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'asu_clas_research_area_image',
          ),
          'type' => 'image',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'center_project_image',
      'label' => 'Center Project Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => $image_object->fid,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'private' => 0,
            'public' => 'public',
            'vimeo' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 0,
            'upload' => 'upload',
            'youtube' => 0,
          ),
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 0,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => FALSE,
          'manualcrop_instant_preview' => 1,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 0,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
        ),
        'type' => 'media_generic',
        'weight' => 1,
      ),
    ),
  );

  foreach ($instances as $instance) {
    field_create_instance($instance);
  }
}

/**
 * Helper function to setup Panelizer options.
 */
function _asu_clas_shesc_centers_projects_panelizer_setup() {
  $content_type = 'center_project';

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
function _asu_clas_shesc_centers_projects_set_pathauto_node_pattern() {
  $content_type = 'center_project';

  variable_set("pathauto_node_{$content_type}_pattern", '/research/center/bioarchaeological-research/research/[node:title]');
}
