    (function($){
        $(document).ready(function(){

        	//setting class for all full bg image co paragraphs
			$(".full-background-image-callout").parent().parent().parent().parent().parent().parent().parent().addClass("full-background-image-callout-background");

			$(".two-column-photos").parent().parent().parent().parent().parent().parent().parent().addClass("two-column-photos-full-background");			

			/*--*/

			//total amount of full bg image co paragraphs in this document
			var amountoffullbackgroundparagraphs = $(".full-background-image-callout-background").length;
			//console.log(amountoffullbackgroundparagraphs);

			//total amount of full bg image two column paragraphs in this document
			var amountoftwocolfullbackgroundparagraphs = $(".two-column-photos-full-background").length;
			//console.log(amountoftwocolfullbackgroundparagraphs);			

			/*--*/

			//classes that we are working with
			var workwiththeseclasses = $('div[class$="full-background-image-callout-background"]');
			//console.log(workwiththeseclasses);

			//backgrounds that we are working with
			var workwiththesebgs = $(".full-background-image-callout").map(function () { return $(this).attr("needthisbg"); });
			//console.log(workwiththesebgs);					

			/*-- -- --*/

			var workwiththeseclassestwocol = $('div[class$="two-column-photos-full-background"]');
			//console.log(workwiththeseclassestwocol);

			var twocolfullleftphotobg = $(".two-column-photos").map(function () { return $(this).attr("leftphotoneeded"); });
			//console.log(twocolfullleftphotobg);

			var twocolfullrightphotobg = $(".two-column-photos").map(function () { return $(this).attr("rightphotoneeded"); });
			//console.log(twocolfullrightphotobg);

			/*--*/	

			/*looping and applying background images*/
			for (x = 0; x < amountoffullbackgroundparagraphs; x++) {

				//console.log(workwiththeseclasses[x]);
				//console.log(workwiththesebgs[x]);
				$(workwiththeseclasses[x]).css("background-image", "url(" + workwiththesebgs[x] + ")");

			}

			/*looping and applying background images*/
			for (y = 0; y < amountoftwocolfullbackgroundparagraphs; y++) {

				//console.log(workwiththeseclassestwocol[y]);
				//console.log(twocolfullleftphotobg[y]);
				//console.log(twocolfullrightphotobg[y]);				
				$(workwiththeseclassestwocol[y]).css('background-image', 'url(' + twocolfullleftphotobg[y] + '),' + 'url(' + twocolfullrightphotobg[y] + ')');

			}												

        });
    })(jQuery);
