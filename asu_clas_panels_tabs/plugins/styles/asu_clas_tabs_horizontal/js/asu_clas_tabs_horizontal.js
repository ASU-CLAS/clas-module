(function ($) {
  /**
   * Initialize Panels Panes as jQuery UI Tabs
   */
  Drupal.behaviors.asuClasPanelsTabs = {
    attach: function (context) {
      if (typeof Drupal.settings.asu_clas_panels_tabs != 'undefined' || Drupal.settings.asu_clas_panels_tabs != null) {
        var tabsID = Drupal.settings.asu_clas_panels_tabs.tabsID;

        for (var key in Drupal.settings.asu_clas_panels_tabs.tabsID) {
          $('#' + tabsID[key] +':not(.tabs-processed)', context).addClass('tabs-processed').tabs();
        }
      }
    }
  };
})(jQuery);
