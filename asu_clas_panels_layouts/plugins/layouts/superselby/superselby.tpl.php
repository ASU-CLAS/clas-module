<?php
/**
 * @file
 * Template for Panopoly superselby.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display superselby clearfix <?php !empty($class) ? print $class : ''; ?>" <?php !empty($css_id) ? print "id=\"$css_id\"" : ''; ?>>

<!-- Header -->
	<section class="section">
	    <div class="container">

	      <div class="row row-1 superselby-header row-full">
	        <div class="column col-md-12">

			  		<?php print $content['header']; ?>

	        </div>
	      </div>

	    </div>
	</section>
<!-- Header -->

  <section class="section">
    <div class="container">
      <div class="row">
        <div class="col-md-4 superselby-sidebar-main-area">

              <?php print $content['sidebar']; ?>

        </div> <!-- /.superselby-sidebar -->
        <div class="col-md-8 superselby-column-content-region-area">
          <div class="row">
            <div class="col-md-12 superselby-column-content-region-area">
              <?php print $content['contentheader']; ?>
            </div>
          </div>
          <div class="row">
            <div class="col-md-6 superselby-column-content-region-1">
              <?php print $content['contentcolumn1']; ?>
            </div>
            <div class="col-md-6 superselby-column-content-region-2">
              <?php print $content['contentcolumn2']; ?>
            </div>
          </div><!-- /.superselby-content-container row-->
          <div class="row">
            <div class="col-md-12 superselby-content-footer-area">
              <?php print $content['contentfooter']; ?>
            </div>
          </div>
        </div><!-- /.superselby-content-container -->
      </div><!-- /.superselby-content-container row-->
    </div>
  </section>

  <!-- Footer -->
		<section class="section">
			<div class="container">

				  <div class="row row-1 superselby-footer row-full">
						<div class="column col-md-12">

				      <?php print $content['footer']; ?>

				    </div>
				  </div>

				</div>
			</section>
<!-- Footer -->

</div><!-- /.superselby -->
