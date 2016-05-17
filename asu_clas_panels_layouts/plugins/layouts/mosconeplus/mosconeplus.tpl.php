<?php
/**
 * @file
 * Template for Panopoly Moscone Plus.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display mosconeplus clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

<!-- Header -->
	<section class="section">
	    <div class="container">

	      <div class="row row-1 mosconeplus-header row-full">
	        <div class="column col-md-12">
	          
			  		<?php print $content['header']; ?>
			  
	        </div>
	      </div>

	    </div>
	</section>
<!-- Header -->

<!-- Main Content -->
	<section class="section">
		<div class="container">

  		<div class="mosconeplus-container mosconeplus-column-content clearfix row">

				<!-- Left Side -->
				    <div class="mosconeplus-column-content-region mosconeplus-sidebar panel-panel span3">
				      <div class="mosconeplus-column-content-region-inner mosconeplus-sidebar-inner panel-panel-inner">

				        <?php print $content['sidebar']; ?>

				      </div>
				    </div>
				<!-- Left Side -->    

				<!-- Right Side -->
				    <div class="mosconeplus-column-content-region mosconeplus-content panel-panel span9">

				      <div class="mosconeplus-column-content-region-inner mosconeplus-content-inner panel-panel-inner">

				        <?php print $content['rowone']; ?>

				      </div>

				      <div class="mosconeplus-column-content-region-inner mosconeplus-content-inner panel-panel-inner clearfix">

				        <!-- clearfix applied to this element is specific to shesc's research topic image -->
				        <?php print $content['rowtwo']; ?>

				      </div>

				      <div class="mosconeplus-column-content-region-inner mosconeplus-content-inner panel-panel-inner">

				        <?php print $content['rowthree']; ?>
				        
				      </div>	      

				    </div>
				<!-- Right Side -->    

  		</div>

			</div>
		</section>
<!-- Main Content -->

<!-- Footer -->
		<section class="section">
			<div class="container">

				  <div class="mosconeplus-container mosconeplus-footer clearfix panel-panel row-full">
				    <div class="mosconeplus-container-inner mosconeplus-footer-inner panel-panel-inner span12">

				      <?php print $content['footer']; ?>

				    </div>
				  </div>

				</div>
			</section>
<!-- Footer -->  

</div><!-- /.mosconeplus -->
