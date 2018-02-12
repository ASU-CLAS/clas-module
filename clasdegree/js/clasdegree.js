(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {

    //code starts
      $('#block-menu-menu-clas-degree-left-side-menu-').addClass('panel-pane pane-menu-tree pane-main-menu left-side-menu');
    //code ends

    $(window).load(function(){
    	console.log("Preselecting start date");
      var numOptions = 0;
      $("#edit-start-date--2 option").each(function(index,val){
        if(index == 0 ) {
          $(this).removeAttr('selected');
          console.log("Removed default selection");
        }
        if(index == 1) {
          $(this).attr("selected",true);
          console.log("Selected first option");
        }
        numOptions += 1;
      });
      if(numOptions < 3) {
        console.log("Hiding start date because there is only 1 valid option");
        $(".form-item-start-date").css("display","none");
      }

    });

  }
};
})(jQuery);
