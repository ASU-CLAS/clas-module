/**
 * JavaScript file for Show More Content Pane module.
 *
 */

(function ($, Drupal) {
	Drupal.behaviors.show_more_content_pane = {
		attach: function(context, settings) {

			$(".field-name-field-show-more-content .field-item").each(function(index){
				if($(this).is(':first-child') == false) {
					$(this).css("display", "none");
				}
			});

			$(".show-more-button").click(function() {
				// find this buttons parent pane, then find all field items under it,then loop through them
				$(this).closest(".pane-bundle-show-more").find(".field-item").each(function(index){

					if($(this).css("display") == "none") {
						$(this).slideDown("fast");

						// if this is the last field, then hide the show more button
						if($(this).is(':last-child')) {
							$(this).closest(".pane-bundle-show-more").find(".show-more-button").css("display", "none");
						}
						return false;
					}

				});

			});


		}
	};
})(jQuery, Drupal);
