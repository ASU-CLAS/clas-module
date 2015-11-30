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
  <div class="content"<?php print $content_attributes; ?>>

    <div class="clas-carousel carousel-starburst-gold">
      <div class="row carousel-starburst-gold-slider clearfix">

        <?php foreach ($content['field_starburst_gold_slider'] as $key => $field_collection): ?>
          <?php if (is_numeric($key) && !empty($field_collection['entity']['field_collection_item'])): ?>
            <?php $field_starburst_gold_item = current($field_collection['entity']['field_collection_item']); ?>

            <div class="item clearfix">
              <div class="row">
                <div class="col-md-10 col-md-offset-1 col-xs-10 col-xs-offset-1">
                  <div class="starburst-gold-title">
                    <?php print render($field_starburst_gold_item['field_slide_title']); ?>
                  </div>
                </div>

                <div class="col-md-10 col-md-offset-1 col-xs-10 col-xs-offset-1">
                  <div class="starburst-gold-text">
                    <?php print render($field_starburst_gold_item['field_slide_text']); ?>
                  </div>
                </div>
              </div>
            </div>

          <?php endif; ?>
        <?php endforeach; ?>

      </div>
    </div>

  </div>
</div>

<script>
  (function($){
    $(document).ready(function(){
      // WooThemes Flexslider
      // http://www.woothemes.com/flexslider
      $('.carousel-starburst-gold').flexslider({
        animation: 'fade',
        animationLoop: true,
        animationSpeed: 600,
        controlNav: true,
        directionNav: true,
        namespace: 'clas-carousel-',
        selector: '.item',
        slideshow: false,
        slideshowSpeed: 3000,
        smoothHeight: false
      });
    });
  })(jQuery);
</script>
