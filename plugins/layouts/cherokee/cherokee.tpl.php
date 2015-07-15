<?php
/**
 * @file
 * Template for default Panopoly cherokee.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display cherokee clearfix container <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="cherokee-container cherokee-header clearfix panel-panel row-fluid">
    <div class="cherokee-container-inner cherokee-header-inner panel-panel-inner span12">
	
      <?php print $content['header']; ?>
	  
    </div>
  </div>

  
  <div class="cherokee-container cherokee-top clearfix row-fluid">
    <div class="cherokee-top-region cherokee-slider panel-panel span8">
      <div class="cherokee-top-region-inner cherokee-slider-inner panel-panel-inner">
	  
        <?php print $content['slider']; ?>
		
      </div>
    </div>
    <div class="cherokee-top-region cherokee-slider-gutter panel-panel span4">
      <div class="cherokee-top-region-inner cherokee-slider-gutter-inner panel-panel-inner">
	  
        <?php print $content['slidergutter']; ?>
		
      </div>
    </div>
  </div>

  
  <div class="cherokee-container cherokee-center clearfix panel-panel row-fluid">
    <div class="cherokee-container-inner cherokee-center-inner panel-panel-inner span12">
	
      <?php print $content['center']; ?>
	  
    </div>
  </div>
  
  
  <div class="cherokee-container cherokee-middle clearfix row-fluid">
    <div class="cherokee-middle-region cherokee-column1 panel-panel span4">
      <div class="cherokee-middle-region-inner cherokee-column1-inner panel-panel-inner">
	  
        <?php print $content['column1']; ?>
		
      </div>
    </div>
    <div class="cherokee-middle-region cherokee-column2 panel-panel span4">
      <div class="cherokee-middle-region-inner cherokee-column2-inner panel-panel-inner">
	  
        <?php print $content['column2']; ?>
		
      </div>
    </div>
    <div class="cherokee-middle-region cherokee-column3 panel-panel span4">
      <div class="cherokee-middle-region-inner cherokee-column3-inner panel-panel-inner">
	  
        <?php print $content['column3']; ?>
		
      </div>
    </div>
  </div>

  <div class="cherokee-container cherokee-footer clearfix panel-panel row-fluid">
    <div class="cherokee-container-inner cherokee-footer-inner panel-panel-inner span12">
	
      <?php print $content['footer']; ?>
	  
    </div>
  </div>
  
</div><!-- /.cherokee -->
