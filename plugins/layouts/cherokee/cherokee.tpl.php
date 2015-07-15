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

<div class="panel-display cherokee clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
	
<section class="section">
    <div class="container">
      <div class="row row-1 cherokee-header row-full">
        <div class="column col-md-12">
          
		  <?php print $content['header']; ?>
		  
        </div>
      </div>
    </div><!-- /.container -->
</section><!-- /.section-post-header -->

<section class="section">
  <div class="container">
  
	  <div class="cherokee-container cherokee-top clearfix row">
		<div class="cherokee-top-region cherokee-slider panel-panel column col-sm-8">
		  <div class="cherokee-top-region-inner cherokee-slider-inner panel-panel-inner">
		  
			<?php print $content['slider']; ?>
			
		  </div>
		</div>
		<div class="cherokee-top-region cherokee-slider-gutter panel-panel column col-sm-4">
		  <div class="cherokee-top-region-inner cherokee-slider-gutter-inner panel-panel-inner">
		  
			<?php print $content['slidergutter']; ?>
			
		  </div>
		</div>
	  </div>
	  

	  
	  <div class="cherokee-container cherokee-center clearfix panel-panel row">
		<div class="cherokee-container-inner cherokee-center-inner panel-panel-inner column col-md-12">
		
		  <?php print $content['center']; ?>
		  
		</div>
	  </div>

	  
		<div class="cherokee-container cherokee-middle clearfix row">
			<div class="cherokee-middle-region cherokee-column1 panel-panel column col-sm-4">
				<div class="cherokee-middle-region-inner cherokee-column1-inner panel-panel-inner">

				<?php print $content['column1']; ?>

				</div>
			</div>
			<div class="cherokee-middle-region cherokee-column2 panel-panel column col-sm-4">
				<div class="cherokee-middle-region-inner cherokee-column2-inner panel-panel-inner">

				<?php print $content['column2']; ?>

				</div>
			</div>
			<div class="cherokee-middle-region cherokee-column3 panel-panel column col-sm-4">
				<div class="cherokee-middle-region-inner cherokee-column3-inner panel-panel-inner">

				<?php print $content['column3']; ?>

				</div>
			</div>
		</div>
	  
	  
  
  </div>
</section>
  
  	<section class="section">
    <div class="container">
      <div class="row row-1 cherokee-footer row-full">
        <div class="column col-md-12">
          
		  <?php print $content['footer']; ?>
		  
        </div>
      </div>
    </div><!-- /.container -->
  </section>

  
</div><!-- /.cherokee -->
