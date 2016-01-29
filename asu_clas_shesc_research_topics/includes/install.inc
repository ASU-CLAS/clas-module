<?php
/**
 * @file
 */

/**
 * Helper function to create Content Type on module installation.
 */
function _asu_clas_shesc_research_topics_create_content_type() {
  node_types_rebuild();

  $type = node_type_load('research_topic');

  if (!$type) {
    $type = array(
      'type' => 'research_topic',
      'name' => t('Research Topic'),
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

    variable_set('additional_settings__active_tab_research_topic', 'edit-panelizer');
    variable_set('menu_options_research_topic', array());
    variable_set('node_options_research_topic', array('status'));
    variable_set('node_preview_research_topic', FALSE);
  }
}

/**
 * Helper function to create Content Type Fields on module installation.
 */
function _asu_clas_shesc_research_topics_create_content_type_fields() {
  $field_bases = array();
  $field_instances = array();

  $body_instance = field_info_instance('node', 'body', 'research_topic');

  $body_settings = array(
    'widget' => array(
      'weight' => 5,
    ),
  );

  $body = array_merge($body_instance, $body_settings);

  field_update_instance($body);

  $fields = array(
    1 => array(
      'field_name' => 'research_topic_description',
      'label' => 'Research Topic Description',
      'type' => 'text_long',
    ),
    2 => array(
      'field_name' => 'research_topic_image',
      'label' => 'Research Topic Image',
      'type' => 'image',
    ),
    3 => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'field_name' => 'research_topic_relation',
      'label' => 'Research Topic Relation',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'research_area' => 'research_area',
          ),
        ),
        'target_type' => 'taxonomy_term',
      ),
      'type' => 'entityreference',
    ),
  );

  foreach ($fields as $field) {
    field_create_field($field);
  }

  $image = file_get_contents(drupal_get_path('module', 'asu_clas_shesc_research_topics') . '/images/placeholder-200x200.png');
  $image_object = file_save_data($image, 'public://placeholder-200x200.png', FILE_EXISTS_RENAME);

  $instances = array(
    1 => array(
      'bundle' => 'research_topic',
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
      'field_name' => 'research_topic_description',
      'label' => 'Research Topic Description',
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
        'weight' => 4,
      ),
    ),
    2 => array(
      'bundle' => 'research_topic',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'asu_clas_research_area_image',
          ),
          'type' => 'image',
          'weight' => 1,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'research_topic_image',
      'label' => 'Research Topic Image',
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
        'weight' => 3,
      ),
    ),
    3 => array(
      'bundle' => 'research_topic',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'research_topic_relation',
      'label' => 'Research Topic Relation',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'taxonomy-index' => array(
            'status' => TRUE,
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 2,
      ),
    ),
  );

  foreach ($instances as $instance) {
    field_create_instance($instance);
  }
}

/**
 * Helper function to add Menu Links to Main Menu for each Research Area.
 */
function _asu_clas_shesc_research_topics_create_menu_links() {
  $vocab = taxonomy_vocabulary_machine_name_load('research_area');
  $terms = taxonomy_get_tree($vocab->vid);

  if (!empty($terms)) {
    foreach ($terms as $term) {
      $term_uri = taxonomy_term_uri($term);

      $item = array(
        'link_path' => drupal_get_normal_path($term_uri['path']),
        'link_title' => $term->name,
        'menu_name' => 'main-menu',
        'weight' => '0',
        'plid' => 1522,
      );

      $mlid = menu_link_save($item);

      if (function_exists('drush_log')) {
        drush_log(sprintf('-- Menu Link %s created', $mlid), 'ok');
      }
    }
  }

  menu_cache_clear_all();
}

/**
 * Helper function to set Pathauto Node Path pattern.
 */
function _asu_clas_shesc_research_topics_set_pathauto_node_pattern() {
  variable_set('pathauto_node_research_topic_pattern', 'research/research-topic/[node:title]');
}
