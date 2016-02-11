<?php
/**
 * @file
 * asu_clas_shesc_centers.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function asu_clas_shesc_centers_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1455132241,
    'title' => 'Center for Bioarchaeological Research',
    'log' => '',
    'bundle' => 'banner',
    'link' => 0,
    'path' => '',
    'reusable' => 1,
    'admin_title' => 'hero-center-cbr',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1455132070,
    'uuid' => '035f2110-32af-443a-91d4-80f178fc0368',
    'language' => 'und',
    'field_banner_image' => array(
      'und' => array(
        0 => array(
          'fid' => 151,
          'uid' => 17,
          'filename' => 'hero-center-cbr.jpg',
          'uri' => 'public://hero-center-cbr.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 86778,
          'status' => 1,
          'timestamp' => 1455132228,
          'type' => 'image',
          'uuid' => '6f4fae5a-a6fc-459b-bd2c-90fbbde47e0a',
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
  return $fpps;
}
