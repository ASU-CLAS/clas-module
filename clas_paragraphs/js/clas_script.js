    (function($){
        $(document).ready(function(){

        	//setting class for all full bg image co paragraphs
			$(".full-background-image-callout").parent().parent().parent().parent().parent().parent().parent().addClass("full-background-image-callout-background");

			//$(".two-column-photos").parent().parent().parent().parent().parent().parent().parent().parent().parent().addClass("two-column-photos-full-background row-fluid");			

			/*--*/

			//total amount of full bg image co paragraphs in this document
			var amountoffullbackgroundparagraphs = $(".full-background-image-callout-background").length;
			//console.log(amountoffullbackgroundparagraphs);

			var amountoftwocolfullbackgroundparagraphs = $(".two-column-photos-full-background").length;
			//console.log(amountoftwocolfullbackgroundparagraphs);			

			/*--*/

			var workwiththeseids = $(".full-background-image-callout-background").map(function() { return this.id; }).get();
			//console.log(workwiththeseids);

			var workwiththesebgs = $(".full-background-image-callout").map(function () { return $(this).attr("needthisbg"); });
			//console.log(workwiththesebgs);

			/*-- -- --*/

			var twocolfullworkwiththeseids = $(".two-column-photos-full-background").map(function() { return this.id; }).get();
			//console.log(twocolfullworkwiththeseids);

			var twocolfullleftphotobg = $(".two-column-photos").map(function () { return $(this).attr("leftphotoneeded"); });
			//console.log(twocolfullleftphotobg);

			var twocolfullrightphotobg = $(".two-column-photos").map(function () { return $(this).attr("rightphotoneeded"); });
			//console.log(twocolfullrightphotobg);

			/*--*/											

			for (x = 0; x < amountoffullbackgroundparagraphs; x++) {

				//console.log(workwiththeseids[x]);
				//console.log(workwiththesebgs[x]);
				$("#" + workwiththeseids[x]).css("background-image", "url(" + workwiththesebgs[x] + ")");

			}

			for (y = 0; y < amountoftwocolfullbackgroundparagraphs; y++) {

				//console.log(twocolfullworkwiththeseids[y]);
				//console.log(twocolfullleftphotobg[y]);
				//console.log(twocolfullrightphotobg[y]);				
				//$("#" + twocolfullworkwiththeseids[x]).css("background-image", "url(" + twocolfullleftphotobg[x] + ")", "url(" + twocolfullrightphotobg[x] + ")');

				document.getElementById(twocolfullworkwiththeseids[y]).style.backgroundImage = "url('" + twocolfullleftphotobg[y] + "'), url('" + twocolfullrightphotobg[y] + "')";

			}												

        });
    })(jQuery);
