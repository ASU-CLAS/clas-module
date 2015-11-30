<?php
/**
 * @file
 * Template for custom Panopoly layout 'Monster'.
 *
 * Variables:
 *
 * - $css_id: An optional CSS ID to use for the layout.
 *
 * - $content: An array of content, each item keyed to one panel of the layout.
 */
?>

<div class="panel-display monster clearfix <?php !empty($class) ? print $class : NULL; ?>" <?php !empty($css_id) ? print 'id="$css_id"' : NULL; ?>>

  <section class="section section-header monster-section-header">
    <div class="container">
      <div class="row row-1 monster-single-column row-full">
        <div class="column col-md-12 monster-header-row-1">
          <?php print $content['header']; ?>
        </div>
      </div>
    </div>
  </section>

  <section class="section section-top monster-section-top">
    <div class="container">
      <div class="row row-1 monster-single-column row-full">
        <div class="column col-md-12 monster-top-row-1">
          <?php print $content['top_row_1']; ?>
        </div>
      </div>

      <div class="row row-2 monster-two-column">
        <div class="column col-sm-12 col-md-7 col-lg-8 monster-top-row-2-column-1">
          <?php print $content['top_row_2_col_1']; ?>
        </div>
        <div class="column col-sm-6 col-md-5 col-lg-4 monster-top-row-2-column-2">
          <?php print $content['top_row_2_col_2']; ?>
        </div>
      </div>

      <div class="row row-3 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['top_row_3']; ?>
        </div>
      </div>

      <div class="row row-4 monster-two-column">
        <div class="column col-sm-6 col-md-5 col-lg-4 monster-top-row-4-column-1">
          <?php print $content['top_row_4_col_1']; ?>
        </div>
        <div class="column col-sm-12 col-md-7 col-lg-8 monster-top-row-4-column-2">
          <?php print $content['top_row_4_col_2']; ?>
        </div>
      </div>

      <div class="row row-5 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['top_row_5']; ?>
        </div>
      </div>

      <div class="row row-6 monster-double-column">
        <div class="column col-md-6 monster-top-row-6-column-1">
          <?php print $content['top_row_6_col_1']; ?>
        </div>
        <div class="column col-md-6 monster-top-row-6-column-2">
          <?php print $content['top_row_6_col_2']; ?>
        </div>
      </div>

      <div class="row row-7 monster-single-column row-full">
        <div class="column col-md-12 monster-top-row-7">
          <?php print $content['top_row_7']; ?>
        </div>
      </div>

      <div class="row row-8 monster-triple-column">
        <div class="column col-md-4 col-sm-6 monster-top-row-8-column-1">
          <?php print $content['top_row_8_col_1']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-top-row-8-column-2">
          <?php print $content['top_row_8_col_2']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-top-row-8-column-3">
          <?php print $content['top_row_8_col_3']; ?>
        </div>
      </div>

      <div class="row row-9 monster-single-column row-full">
        <div class="column col-md-12 monster-top-row-9">
          <?php print $content['top_row_9']; ?>
        </div>
      </div>

      <div class="row row-10 monster-triple-column">
        <div class="column col-md-4 col-sm-6 monster-top-row-10-column-1">
          <?php print $content['top_row_10_col_1']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-top-row-8-column-2">
          <?php print $content['top_row_10_col_2']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-top-row-8-column-3">
          <?php print $content['top_row_10_col_3']; ?>
        </div>
      </div>

      <div class="row row-11 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['top_row_11']; ?>
        </div>
      </div>

      <div class="row row-12 monster-quad-column">
        <div class="column col-md-3 col-sm-6 monster-top-row-12-column-1">
          <?php print $content['top_row_12_col_1']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-top-row-12-column-2">
          <?php print $content['top_row_12_col_2']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-top-row-12-column-3">
          <?php print $content['top_row_12_col_3']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-top-row-12-column-4">
          <?php print $content['top_row_12_col_4']; ?>
        </div>
      </div>

      <div class="row row-13 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['top_row_13']; ?>
        </div>
      </div>

    </div>
  </section>

  <section class="section section-middle monster-section-middle">
    <div class="container">
      <div class="row row-1 monster-single-column row-full">
        <div class="column col-md-12 monster-middle-row-1">
          <?php print $content['middle_row_1']; ?>
        </div>
      </div>

      <div class="row row-2 monster-two-column">
        <div class="column col-sm-12 col-md-7 col-lg-8 monster-middle-row-2-column-1">
          <?php print $content['middle_row_2_col_1']; ?>
        </div>
        <div class="column col-sm-6 col-md-5 col-lg-4 monster-middle-row-2-column-2">
          <?php print $content['middle_row_2_col_2']; ?>
        </div>
      </div>

      <div class="row row-3 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['middle_row_3']; ?>
        </div>
      </div>

      <div class="row row-4 monster-two-column">
        <div class="column col-sm-6 col-md-5 col-lg-4 monster-middle-row-4-column-1">
          <?php print $content['middle_row_4_col_1']; ?>
        </div>
        <div class="column col-sm-12 col-md-7 col-lg-8 monster-middle-row-4-column-2">
          <?php print $content['middle_row_4_col_2']; ?>
        </div>
      </div>

      <div class="row row-5 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['middle_row_5']; ?>
        </div>
      </div>

      <div class="row row-6 monster-double-column">
        <div class="column col-md-6 monster-middle-row-6-column-1">
          <?php print $content['middle_row_6_col_1']; ?>
        </div>
        <div class="column col-md-6 monster-middle-row-6-column-2">
          <?php print $content['middle_row_6_col_2']; ?>
        </div>
      </div>

      <div class="row row-7 monster-single-column row-full">
        <div class="column col-md-12 monster-middle-row-7">
          <?php print $content['middle_row_7']; ?>
        </div>
      </div>

      <div class="row row-8 monster-triple-column">
        <div class="column col-md-4 col-sm-6 monster-middle-row-8-column-1">
          <?php print $content['middle_row_8_col_1']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-middle-row-8-column-2">
          <?php print $content['middle_row_8_col_2']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-middle-row-8-column-3">
          <?php print $content['middle_row_8_col_3']; ?>
        </div>
      </div>

      <div class="row row-9 monster-single-column row-full">
        <div class="column col-md-12 monster-middle-row-9">
          <?php print $content['middle_row_9']; ?>
        </div>
      </div>

      <div class="row row-10 monster-triple-column">
        <div class="column col-md-4 col-sm-6 monster-middle-row-10-column-1">
          <?php print $content['middle_row_10_col_1']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-middle-row-8-column-2">
          <?php print $content['middle_row_10_col_2']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-middle-row-8-column-3">
          <?php print $content['middle_row_10_col_3']; ?>
        </div>
      </div>

      <div class="row row-11 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['middle_row_11']; ?>
        </div>
      </div>

      <div class="row row-12 monster-quad-column">
        <div class="column col-md-3 col-sm-6 monster-middle-row-12-column-1">
          <?php print $content['middle_row_12_col_1']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-middle-row-12-column-2">
          <?php print $content['middle_row_12_col_2']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-middle-row-12-column-3">
          <?php print $content['middle_row_12_col_3']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-middle-row-12-column-4">
          <?php print $content['middle_row_12_col_4']; ?>
        </div>
      </div>

      <div class="row row-13 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['middle_row_13']; ?>
        </div>
      </div>

    </div>
  </section>

  <section class="section section-bottom monster-section-bottom">
    <div class="container">
      <div class="row row-1 monster-single-column row-full">
        <div class="column col-md-12 monster-bottom-row-1">
          <?php print $content['bottom_row_1']; ?>
        </div>
      </div>

      <div class="row row-2 monster-two-column">
        <div class="column col-sm-12 col-md-7 col-lg-8 monster-bottom-row-2-column-1">
          <?php print $content['bottom_row_2_col_1']; ?>
        </div>
        <div class="column col-sm-6 col-md-5 col-lg-4 monster-bottom-row-2-column-2">
          <?php print $content['bottom_row_2_col_2']; ?>
        </div>
      </div>

      <div class="row row-3 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['bottom_row_3']; ?>
        </div>
      </div>

      <div class="row row-4 monster-two-column">
        <div class="column col-sm-6 col-md-5 col-lg-4 monster-bottom-row-4-column-1">
          <?php print $content['bottom_row_4_col_1']; ?>
        </div>
        <div class="column col-sm-12 col-md-7 col-lg-8 monster-bottom-row-4-column-2">
          <?php print $content['bottom_row_4_col_2']; ?>
        </div>
      </div>

      <div class="row row-5 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['bottom_row_5']; ?>
        </div>
      </div>

      <div class="row row-6 monster-double-column">
        <div class="column col-md-6 monster-bottom-row-6-column-1">
          <?php print $content['bottom_row_6_col_1']; ?>
        </div>
        <div class="column col-md-6 monster-bottom-row-6-column-2">
          <?php print $content['bottom_row_6_col_2']; ?>
        </div>
      </div>

      <div class="row row-7 monster-single-column row-full">
        <div class="column col-md-12 monster-bottom-row-7">
          <?php print $content['bottom_row_7']; ?>
        </div>
      </div>

      <div class="row row-8 monster-triple-column">
        <div class="column col-md-4 col-sm-6 monster-bottom-row-8-column-1">
          <?php print $content['bottom_row_8_col_1']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-bottom-row-8-column-2">
          <?php print $content['bottom_row_8_col_2']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-bottom-row-8-column-3">
          <?php print $content['bottom_row_8_col_3']; ?>
        </div>
      </div>

      <div class="row row-9 monster-single-column row-full">
        <div class="column col-md-12 monster-bottom-row-9">
          <?php print $content['bottom_row_9']; ?>
        </div>
      </div>

      <div class="row row-10 monster-triple-column">
        <div class="column col-md-4 col-sm-6 monster-bottom-row-10-column-1">
          <?php print $content['bottom_row_10_col_1']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-bottom-row-8-column-2">
          <?php print $content['bottom_row_10_col_2']; ?>
        </div>
        <div class="column col-md-4 col-sm-6 monster-bottom-row-8-column-3">
          <?php print $content['bottom_row_10_col_3']; ?>
        </div>
      </div>

      <div class="row row-11 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['bottom_row_11']; ?>
        </div>
      </div>

      <div class="row row-12 monster-quad-column">
        <div class="column col-md-3 col-sm-6 monster-bottom-row-12-column-1">
          <?php print $content['bottom_row_12_col_1']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-bottom-row-12-column-2">
          <?php print $content['bottom_row_12_col_2']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-bottom-row-12-column-3">
          <?php print $content['bottom_row_12_col_3']; ?>
        </div>
        <div class="column col-md-3 col-sm-6 monster-bottom-row-12-column-4">
          <?php print $content['bottom_row_12_col_4']; ?>
        </div>
      </div>

      <div class="row row-13 monster-single-column row-full">
        <div class="column col-md-12">
          <?php print $content['bottom_row_13']; ?>
        </div>
      </div>

    </div>
  </section>

  <section class="section section-footer monster-section-footer">
    <div class="container">
      <div class="row row-1 monster-single-column row-full">
        <div class="column col-md-12 monster-footer-row-1">
          <?php print $content['footer']; ?>
        </div>
      </div>
    </div>
  </section>

</div>
