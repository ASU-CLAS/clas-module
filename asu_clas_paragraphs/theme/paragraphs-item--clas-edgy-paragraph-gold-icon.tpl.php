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

$field_paragraph_title_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_left_title_gold');
$field_paragraph_title_left = $field_paragraph_title_left[0]['value'];

$field_paragraph_title_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_right_title_gold');
$field_paragraph_title_right = $field_paragraph_title_right[0]['value'];

//-- Body text fields

$field_paragraph_text_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_left_text_gold');
$field_paragraph_text_left = $field_paragraph_text_left[0]['value'];

$field_paragraph_text_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_right_text_gold');
$field_paragraph_text_right = $field_paragraph_text_right[0]['value'];

//-- Links

$field_paragraph_links_left = render($content['field_paragraph_left_links_gold']);
$field_paragraph_links_right = render($content['field_paragraph_right_links_gold']);

//-- Background Icons

$field_paragraph_background_icon_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_left_bg_ic_gold');
$field_paragraph_background_icon_left = $field_paragraph_background_icon_left[0]['value'];

$field_paragraph_background_icon_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_right_bg_ic_gold');
$field_paragraph_background_icon_right = $field_paragraph_background_icon_right[0]['value'];

?>

<div class="row-fluid clas-edgy-paragraph-gold-icon-wrapper">

  	<div class="col-xs-12 col-sm-6 col-md-6">

      <div class="inner-gold-bg-wrapper <?php print 'gold-bg-'.$field_paragraph_background_icon_left; ?>">

        <h2><?php print $field_paragraph_title_left; ?></h2>

    		<?php print $field_paragraph_text_left; ?>

        <?php print $field_paragraph_links_left; ?>

      </div>

  	</div>

  	<div class="col-xs-12 col-sm-6 col-md-6">

      <div class="inner-gold-bg-wrapper <?php print 'gold-bg-'.$field_paragraph_background_icon_right; ?>">

        <h2><?php print $field_paragraph_title_right; ?></h2>

        <?php print $field_paragraph_text_right; ?>

        <?php print $field_paragraph_links_right; ?>

      </div>

  	</div>

</div>

<script>
  (function($){
    $(document).ready(function(){
      // jQuery matchHeight
      // http://brm.io/jquery-match-height/
      $('.inner-gold-bg-wrapper').matchHeight({
        byRow: true,
        property: 'height',
        target: null,
        remove: false
      });
    });
  })(jQuery);
</script>
