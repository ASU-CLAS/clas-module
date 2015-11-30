var Drupal = Drupal || {};

(function($, Drupal) {
  "use strict";

  // Modify ASU Brand Logo Link
  Drupal.behaviors.helpTextScreenshots = {
    attach: function(context, settings) {
      $('#field-clas-paragraph-bundle-add-more-wrapper .description a').on('click', function(e) {
        e.preventDefault();

        var anchor = $(this).attr('href');
        var screenshot = anchor.replace(/\D/g, '');

        var caption = $(this).text();

        $.featherlight(
          Drupal.settings.asu_clas_paragraphs.basePath + '/images/bundle-screenshots/' + screenshot + '.jpg', {
            afterContent: function() {
              $('.featherlight-content').append('<div class="featherlight-caption">CLAS ' + caption + '</div>');
            },
            closeOnClick: 'anywhere',
            loading: '<div class="featherlight-spinner"></div>',
            type: {
              image: true
            }
          }
        );
      });
    }
  };
})(jQuery, Drupal);
