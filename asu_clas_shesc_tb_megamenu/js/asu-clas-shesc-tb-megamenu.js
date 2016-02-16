(function($, Drupal) {
  "use strict";

  // Modify ASU Webspark Main Menu "Home" Link
  Drupal.behaviors.asu_clas_shesc_tb_megamenu = {
    attach: function() {
      var $menu_item = $('.tb-megamenu-main-menu').find('li:first');
      var $menu_link = $menu_item.children('a');

      $menu_link.wrapInner('<i class="fa fa-home icon-white"><span style="display: none;"></span></i>');

      if ($menu_link.attr('href') == Drupal.settings.basePath) {
        $menu_link.addClass('active');
      }
    }
  }
}(jQuery, Drupal));
