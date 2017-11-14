<?php
/**
 * @file
 * clas_degree_feature.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function clasdegree_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: management:admin/structure/menu/manage/menu-clas-degree-left-side-menu-
  $menu_links['management:admin/structure/menu/manage/menu-clas-degree-left-side-menu-'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-clas-degree-left-side-menu-',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'CLAS Degree Left Side Menu Block',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-clas-degree-left-side-menu-:node/add
  $menu_links['menu-clas-degree-left-side-menu-:node/add'] = array(
    'menu_name' => 'menu-clas-degree-left-side-menu-',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Title Goes Here',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-clas-degree-left-side-menu-_another-link:http
  $menu_links['menu-clas-degree-left-side-menu-_another-link:http'] = array(
    'menu_name' => 'menu-clas-degree-left-side-menu-',
    'link_path' => 'http://example.com',
    'router_path' => '',
    'link_title' => 'Another Link',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-clas-degree-left-side-menu-_linky:http
  $menu_links['menu-clas-degree-left-side-menu-_linky:http'] = array(
    'menu_name' => 'menu-clas-degree-left-side-menu-',
    'link_path' => 'http://example.com',
    'router_path' => '',
    'link_title' => 'Linky',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Another Link');
  t('CLAS Degree Left Side Menu Block');
  t('Linky');
  t('Title Goes Here');


  return $menu_links;
}
