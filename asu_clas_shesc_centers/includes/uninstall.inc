<?php
/**
 * @file
 */

/**
 * Helper function to delete custom menu.
 */
function _asu_clas_shesc_centers_delete_menu() {
  $menu = array(
    'menu_name' => substr('menu-center-cbr', 0, 32),
    'title' => 'Center for Bioarchaeological Research',
    'description' => '',
  );

  menu_delete($menu);
}
