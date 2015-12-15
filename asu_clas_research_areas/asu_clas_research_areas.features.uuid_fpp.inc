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
    'title' => 'Team',
    'log' => '',
    'bundle' => 'text',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
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
    'reusable' => 1,
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
          'value' => '<p><strong>Lorem ipsum dolor set amit.</strong></p><p>Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p><strong>Lorem ipsum dolor set amit.</strong></p><p>Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
        ),
      ),
    ),
  );
  return $fpps;
}
