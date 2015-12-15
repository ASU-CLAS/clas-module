<?php
/**
 * @file
 * asu_clas_research_areas.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function asu_clas_research_areas_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1450187076,
    'title' => 'The Team',
    'log' => '',
    'bundle' => 'text',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1450186880,
    'uuid' => '48d62963-a3d7-4e0d-bfad-3dc433ec861d',
    'language' => '',
    'field_basic_text_text' => array(
      'und' => array(
        0 => array(
          'value' => '<p><em>Functionality to be provided by ASU iSearch module view content pane.</em></p>',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p><em>Functionality to be provided by ASU iSearch module view content pane.</em></p>
',
        ),
      ),
    ),
  );
  $fpps[] = array(
    'timestamp' => 1450187070,
    'title' => 'Research',
    'log' => '',
    'bundle' => 'text',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1450186838,
    'uuid' => 'f2c279fd-7c27-4b66-a856-9fe264bfe2da',
    'language' => 'und',
    'field_basic_text_text' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Lorem ipsum dolor set amit.</p>',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Lorem ipsum dolor set amit.</p>
',
        ),
      ),
    ),
  );
  return $fpps;
}
