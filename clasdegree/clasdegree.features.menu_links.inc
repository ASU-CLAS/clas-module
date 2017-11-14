<?php
/**
 * @file
 * clasdegree.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function clasdegree_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-clas-degree-left-side-menu-_another-link:http://example.com.
  $menu_links['menu-clas-degree-left-side-menu-_another-link:http://example.com'] = array(
    'menu_name' => 'menu-clas-degree-left-side-menu-',
    'link_path' => 'http://example.com',
    'router_path' => '',
    'link_title' => 'Another Link',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-clas-degree-left-side-menu-_another-link:http://example.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Another Link');

  return $menu_links;
}
