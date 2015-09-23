<?php
/**
 * @file
 * classocial.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function classocial_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'News and Events',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'panopoly_page',
  'language' => 'und',
  'created' => 1415810280,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9dd25b93-d935-4bea-b3da-dbe56e8304bd',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>body</p>',
        'summary' => '',
        'format' => 'panopoly_wysiwyg_text',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_featured_categories' => array(),
  'field_featured_image' => array(),
  'field_featured_status' => array(
    'und' => array(
      0 => array(
        'value' => 0,
      ),
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'panelizer' => array(
    'page_manager' => array(
      'entity_type' => 'node',
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => 'page-page',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => '',
      'did_uuid' => '16346c80-6fcf-4cee-bf7a-9c0173fc2916',
    ),
  ),
  'machine_name' => FALSE,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-11-12 09:38:00 -0700',
  'user_uuid' => '60537c15-5fa0-4f04-a20d-07b24b9729e4',
);
  return $nodes;
}
