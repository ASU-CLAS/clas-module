<?php
/**
 * @file
 * clas_module.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function _clas_module_installed_instances() {
  $field_instances = array();
  
  
  // Exported field_instance: 'node-asu_degree-field_asu_degree_tabs'
  $field_instances['node-asu_degree-field_asu_degree_tabs'] = array(
    'bundle' => 'asu_degree',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>GRADUATE PROGRAMS ONLY</strong><br>Displays given information in tabs at the top of the page in place of the default degree description. This will not work on undergraduate degree nodes.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'quicktabs_field_collection',
        'settings' => array(
          'classes' => '',
          'content_field' => 'field_qtfc_tab_body',
          'content_field_striptags' => 0,
          'quicktabs' => array(
            'hide_empty_tabs' => 1,
            'options' => array(
              'accordion' => array(
                'history' => 0,
                'jquery_ui' => array(
                  'autoHeight' => 1,
                  'collapsible' => 1,
                ),
              ),
              'ui_tabs' => array(
                'history' => 0,
              ),
            ),
            'renderer' => 'ui_tabs',
            'style' => 'default',
          ),
          'tab_field' => 'field_qtfc_tab_label',
        ),
        'type' => 'field_collection_quicktabs',
        'weight' => 48,
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
    'field_name' => 'field_asu_degree_tabs',
    'label' => 'Tabs',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'field_collection_embed',
      'weight' => 43,
    ),
  );
  
  // Exported field_instance: 'field_collection_item-field_asu_degree_tabs-field_qtfc_tab_body'
  $field_instances['field_collection_item-field_asu_degree_tabs-field_qtfc_tab_body'] = array(
    'bundle' => 'field_asu_degree_tabs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_qtfc_tab_body',
    'label' => 'Tab Body',
    'required' => 0,
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_asu_degree_tabs-field_qtfc_tab_label'
  $field_instances['field_collection_item-field_asu_degree_tabs-field_qtfc_tab_label'] = array(
    'bundle' => 'field_asu_degree_tabs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_qtfc_tab_label',
    'label' => 'Tab Label',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  

  // Translatables
  // Included for use with string extractors like potx.
  t('Tab Body');
  t('Tab Label');
  t('Tabs');

  return $field_instances;
}
