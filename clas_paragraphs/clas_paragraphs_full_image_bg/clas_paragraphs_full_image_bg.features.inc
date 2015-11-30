<?php
/**
 * @file
 * clas_paragraphs_full_image_bg.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function clas_paragraphs_full_image_bg_paragraphs_info() {
  $items = array(
    'clas_full_bg_image_co' => array(
      'name' => 'CLAS Full Background Image Callout',
      'bundle' => 'clas_full_bg_image_co',
      'locked' => '1',
    ),
  );
  return $items;
}
