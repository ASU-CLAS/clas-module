<?php
/**
 * @file
 * clasdegree.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function clasdegree_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-clas-degree-left-side-menu-.
  $menus['menu-clas-degree-left-side-menu-'] = array(
    'menu_name' => 'menu-clas-degree-left-side-menu-',
    'title' => 'CLAS Degree Left Side Menu Block',
    'description' => 'Left side menu for links of CLAS Degree content type.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CLAS Degree Left Side Menu Block');
  t('Left side menu for links of CLAS Degree content type.');

  return $menus;
}
