<?php
/**
 * @file
 * clas_module.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function clas_module_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|paragraphs_item|clas_cta_footer|paragraphs_editor_preview';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'clas_cta_footer';
  $field_group->mode = 'paragraphs_editor_preview';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '0',
    'children' => array(
      0 => 'field_title_1',
      1 => 'field_text_1',
      2 => 'field_button_title_1',
      3 => 'field_link_1',
      4 => 'field_icon_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_left|paragraphs_item|clas_cta_footer|paragraphs_editor_preview'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_middle|paragraphs_item|clas_cta_footer|paragraphs_editor_preview';
  $field_group->group_name = 'group_middle';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'clas_cta_footer';
  $field_group->mode = 'paragraphs_editor_preview';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Middle',
    'weight' => '1',
    'children' => array(
      0 => 'field_title_2',
      1 => 'field_text_2',
      2 => 'field_button_title_2',
      3 => 'field_link_2',
      4 => 'field_icon_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_middle|paragraphs_item|clas_cta_footer|paragraphs_editor_preview'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|paragraphs_item|clas_cta_footer|paragraphs_editor_preview';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'clas_cta_footer';
  $field_group->mode = 'paragraphs_editor_preview';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '2',
    'children' => array(
      0 => 'field_title_3',
      1 => 'field_text_3',
      2 => 'field_button_title_3',
      3 => 'field_link_3',
      4 => 'field_icon_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_right|paragraphs_item|clas_cta_footer|paragraphs_editor_preview'] = $field_group;

  return $export;
}
