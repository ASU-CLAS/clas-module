<?php
/**
 * @file
 * tempdirectory.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function tempdirectory_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:asu_directory_person:default'])) {
    $data['node:asu_directory_person:default']->display->content['new-3b1211d8-63be-4e95-9565-4d0a80e31593']->panel = 'toprow4col2'; /* WAS: 'toprow5col3' */
    $data['node:asu_directory_person:default']->display->content['new-3b1211d8-63be-4e95-9565-4d0a80e31593']->position = 6; /* WAS: 0 */
    $data['node:asu_directory_person:default']->display->content['new-437932a2-27c7-4e3e-a4cd-65571a51b7a1']->panel = 'toprow4col2'; /* WAS: 'toprow5col2' */
    $data['node:asu_directory_person:default']->display->content['new-437932a2-27c7-4e3e-a4cd-65571a51b7a1']->position = 4; /* WAS: 5 */
    $data['node:asu_directory_person:default']->display->content['new-5d24335b-ec61-41c0-8633-311b8c3de94c']->panel = 'toprow4col2'; /* WAS: 'toprow5col2' */
    $data['node:asu_directory_person:default']->display->content['new-5d24335b-ec61-41c0-8633-311b8c3de94c']->position = 0; /* WAS: 4 */
    $data['node:asu_directory_person:default']->display->content['new-948c5269-e52b-497d-b2b0-c80cec1bc80d']->panel = 'toprow4col1'; /* WAS: 'toprow5col1' */
    $data['node:asu_directory_person:default']->display->content['new-96aa79cb-765c-49a5-b8f6-b681a344c510']->panel = 'toprow4col2'; /* WAS: 'toprow5col2' */
    $data['node:asu_directory_person:default']->display->content['new-a976ab48-61e2-4adf-8a18-0068bfdeb031']->panel = 'toprow4col2'; /* WAS: 'toprow5col2' */
    $data['node:asu_directory_person:default']->display->content['new-ba545aa0-27f2-4b90-af8f-92e37e08c96e']->panel = 'toprow4col2'; /* WAS: 'toprow5col2' */
    $data['node:asu_directory_person:default']->display->content['new-d141fafa-3a92-4ae7-b559-ef6dd1dfff88']->panel = 'toprow1'; /* WAS: 'toprow5col2' */
    $data['node:asu_directory_person:default']->display->content['new-fe33082a-787f-4f23-8a75-598722e68f71']->panel = 'toprow4col2'; /* WAS: 'toprow5col2' */
    $data['node:asu_directory_person:default']->display->content['new-fe33082a-787f-4f23-8a75-598722e68f71']->position = 5; /* WAS: 6 */
    $data['node:asu_directory_person:default']->display->panels['toprow1'] = array(
      0 => 'new-d141fafa-3a92-4ae7-b559-ef6dd1dfff88',
    ); /* WAS: '' */
    $data['node:asu_directory_person:default']->display->panels['toprow4col1'] = array(
      0 => 'new-948c5269-e52b-497d-b2b0-c80cec1bc80d',
    ); /* WAS: '' */
    $data['node:asu_directory_person:default']->display->panels['toprow4col2'] = array(
      0 => 'new-5d24335b-ec61-41c0-8633-311b8c3de94c',
      1 => 'new-a976ab48-61e2-4adf-8a18-0068bfdeb031',
      2 => 'new-96aa79cb-765c-49a5-b8f6-b681a344c510',
      3 => 'new-ba545aa0-27f2-4b90-af8f-92e37e08c96e',
      4 => 'new-437932a2-27c7-4e3e-a4cd-65571a51b7a1',
      5 => 'new-fe33082a-787f-4f23-8a75-598722e68f71',
      6 => 'new-3b1211d8-63be-4e95-9565-4d0a80e31593',
    ); /* WAS: '' */
    unset($data['node:asu_directory_person:default']->display->panels['toprow5col1']);
    unset($data['node:asu_directory_person:default']->display->panels['toprow5col2']);
    unset($data['node:asu_directory_person:default']->display->panels['toprow5col3']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function tempdirectory_field_default_field_instances_alter(&$data) {
  if (isset($data['node-asu_directory_person-field_asu_directory_image'])) {
    $data['node-asu_directory_person-field_asu_directory_image']['display']['default']['settings']['image_style'] = 'asunews_thumbnail'; /* WAS: 'asu_directory_profile_image' */
  }
}