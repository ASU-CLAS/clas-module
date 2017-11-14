<?php
/**
 * @file
 * clasdegree.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function clasdegree_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'clas_degree_tabs_block';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'CLAS Degree Tabs Block';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_5',
      'hide_title' => 1,
      'title' => 'In The News',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'block_delta_6',
      'hide_title' => 1,
      'title' => 'Student Profiles',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'block_delta_7',
      'hide_title' => 1,
      'title' => 'Campus Culture',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('CLAS Degree Tabs Block');
  t('Campus Culture');
  t('In The News');
  t('Student Profiles');

  $export['clas_degree_tabs_block'] = $quicktabs;

  return $export;
}
