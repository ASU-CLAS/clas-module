<?php
/**
 * @file
 */

/**
 * Helper function to create placeholder nodes for quality assurance testing.
 */
function _asu_clas_shesc_centers_create_placeholder_nodes() {
  $path = 'research/center/bioarchaeological-research';

  $placeholder_nodes = array(
    0 => array(
      'title' => 'Center for Bioarchaeological Research',
      'alias' => $path,
    ),
    1 => array(
      'title' => 'Center Research',
      'alias' => $path . '/research',
    ),
    2 => array(
      'title' => 'Collections',
      'alias' => $path . '/research/collections',
    ),
    3 => array(
      'title' => 'Partners',
      'alias' => $path . '/research/partners',
    ),
    4 => array(
      'title' => 'International Journal of Paleopathology',
      'alias' => $path . '/research/international-journal-of-paleopathology',
    ),
    5 => array(
      'title' => 'Facilities',
      'alias' => $path . '/facilities',
    ),
    6 => array(
      'title' => 'Field School',
      'alias' => $path . '/field-school',
    ),
    7 => array(
      'title' => 'The Team',
      'alias' => $path . '/team',
    ),
    8 => array(
      'title' => 'About CBR',
      'alias' => $path . '/about',
    ),
    9 => array(
      'title' => 'History',
      'alias' => $path . '/about/history',
    ),
    10 => array(
      'title' => 'Contact',
      'alias' => $path . '/about/contact',
    ),
  );

  foreach ($placeholder_nodes as $placeholder_node) {
    $node = new stdClass();

    $node->type = 'center_page';
    $node->language = LANGUAGE_NONE;
    node_object_prepare($node);

    $node->title = $placeholder_node['title'];
    $node->body[$node->language][0]['value'] = '<h2>Lorem Ipsum Dolor Set Amit</h2> <p>Consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>';
    $node->body[$node->language][0]['summary'] = text_summary('');
    $node->body[$node->language][0]['format'] = 'panopoly_wysiwyg_text';

    $node->status = 1;
    $node->promote = 0;
    $node->sticky = 0;
    $node->comment = 1;
    $node->uid = 0;

    $node->date = REQUEST_TIME;
    $node->created = REQUEST_TIME;

    $node->path = array('alias' => $placeholder_node['alias']);

    node_save($node);

    // Delete Conflicting Aliases
    $path = path_load(array('source' => 'node/' . $node->nid));

    if ($path !== false) {
      path_delete((int) $path['pid'] + 1);
    }

    // Add Menu Link
    $item = array (
      'link_title' => $placeholder_node['title'],
      'link_path' => drupal_get_normal_path('node/' . $node->nid),
      'menu_name' => 'menu-center-cbr',
      'weight' => 0,
      'plid' => 0,
    );

    $mlid = menu_link_save($item);

    if (function_exists('drush_log')) {
      drush_log(sprintf('-- Node %s saved', $node->nid), 'ok');
    }
  }

  drupal_set_message('ASU CLAS SHESC Center nodes created', 'status');
}
