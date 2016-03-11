<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

//-- Titles

$field_paragraph_title_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_left_title_bg_co');
$field_paragraph_title_left = $field_paragraph_title_left[0]['value'];

$field_paragraph_title_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_right_title_bg_c');
$field_paragraph_title_right = $field_paragraph_title_right[0]['value'];

//-- Body text fields

$field_paragraph_text_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_left_text_bg_co');
$field_paragraph_text_left = $field_paragraph_text_left[0]['value'];

$field_paragraph_text_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_right_text_bg_co');
$field_paragraph_text_right = $field_paragraph_text_right[0]['value'];

//-- Buttons

$field_paragraph_links_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_left_link_bg_co');
$field_paragraph_links_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_right_link_bg_co');

//-- Background Icons

$field_paragraph_background_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_left_bg_bg_co');
$field_paragraph_background_left = image_style_url('clas_bg_image', $field_paragraph_background_left[0]['uri']);

$field_paragraph_background_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_right_bg_bg_co');
$field_paragraph_background_right = image_style_url('clas_bg_image', $field_paragraph_background_right[0]['uri']);

?>

<div class="container-fluid clas-edgy-paragraph-background-cover-wrapper">

  	<div class="col-xs-12 col-sm-6 col-md-6" style="background-image: url('<?php print $field_paragraph_background_left; ?>');">

      <div class="inner-bg-cover-wrapper">

        <h2><?php print $field_paragraph_title_left; ?></h2>

        <div class="cta-text">
    		  <?php print $field_paragraph_text_left; ?>
        </div>
        <?php if (isset($field_paragraph_links_left[0]['title'])): ?>
          <a class="btn btn-primary btn-lg cta-button" href="<?php print $field_paragraph_links_left[0]['url']; ?>">
            <?php print $field_paragraph_links_left[0]['title']; ?>
          </a>
        <?php endif ?>

      </div>

  	</div>

  	<div class="col-xs-12 col-sm-6 col-md-6" style="background-image: url('<?php print $field_paragraph_background_right; ?>');">

      <div class="inner-bg-cover-wrapper">

        <h2><?php print $field_paragraph_title_right; ?></h2>

        <div class="cta-text">
          <?php print $field_paragraph_text_right; ?>
        </div>

        <?php if (isset($field_paragraph_links_right[0]['title'])): ?>
          <a class="btn btn-primary btn-lg cta-button" href="<?php print $field_paragraph_links_right[0]['url']; ?>">
            <?php print $field_paragraph_links_right[0]['title']; ?>
          </a>
        <?php endif ?>

      </div>

  	</div>

</div>

<script>
  (function($){
    $(document).ready(function(){
      // jQuery matchHeight
      // http://brm.io/jquery-match-height/
      $('.inner-bg-cover-wrapper').matchHeight({
        byRow: true,
        property: 'height',
        target: null,
        remove: false
      });
    });
  })(jQuery);
</script>
