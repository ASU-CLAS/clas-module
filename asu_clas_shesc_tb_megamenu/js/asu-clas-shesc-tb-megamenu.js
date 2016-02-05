(function($, Drupal) {
  Drupal.behaviors.webspark_megamenu = {
    attach: function() {
      $(".tb-megamenu-nav>li:first-child").remove();

      var h = window.location.protocol+"//"+window.location.hostname+window.location.pathname;
      h = h.replace(/\/$/,"");
      var u = window.location.protocol+"//"+window.location.hostname;
      var a = null;
      var url = "'.variable_get('site_frontpage', 'node').'";

      if (h == u || h == u+"/"+url) {
        a = "active";
      }

      var b = \'<li data-id="1092" data-level="1" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-1 mega \'+a+\'"><a href="\'+u+\'?home" alt="Home"><i class="fa fa-home icon-white"><span style="display:none">Home</span></i></a></li>\';

      $(".tb-megamenu-nav").prepend(b);
    }
  }
}(jQuery, Drupal));
