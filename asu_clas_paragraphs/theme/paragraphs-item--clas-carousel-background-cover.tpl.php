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
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>

    <div class="carousel-background-cover clearfix">

      <?php foreach ($content['field_clas_carousel_bg_slider'] as $key => $field_collection): ?>
        <?php if (is_numeric($key) && !empty($field_collection['entity']['field_collection_item'])): ?>
          <?php $field_background_carousel_item = current($field_collection['entity']['field_collection_item']); ?>

          <div class="item" style="background-image: url(<?php print image_style_url('clas_bg_image', $field_background_carousel_item['field_slide_background_image'][0]['#item']['uri']); ?>);">

            <div class="background-cover-text">
              <?php print render($field_background_carousel_item['field_slide_background_text']); ?>
            </div>

          </div>

        <?php endif; ?>
      <?php endforeach; ?>

    </div>

</div>

<script>
  (function($){
    $(document).ready(function(){
      // WooThemes Flexslider
      // http://www.woothemes.com/flexslider
      $('.carousel-background-cover').flexslider({
        animation: 'fade',
        animationLoop: true,
        animationSpeed: 600,
        controlNav: false,
        directionNav: true,
        namespace: 'carousel-background-cover-',
        selector: '.item',
        slideshow: false,
        slideshowSpeed: 3000
      });
    });
  })(jQuery);
</script>
