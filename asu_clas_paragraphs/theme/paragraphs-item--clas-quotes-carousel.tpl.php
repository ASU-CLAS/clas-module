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

    <div class="carousel-quotes">
      <div class="row carousel-quotes-slider clearfix">

        <?php foreach ($content['field_carousel_collection'] as $key => $field_collection): ?>
          <?php if (is_numeric($key) && !empty($field_collection['entity']['field_collection_item'])): ?>
              <?php $field_carousel_item = current($field_collection['entity']['field_collection_item']); ?>

              <div class="item clearfix">
                <div class="row">
                  <div class="col-md-3">
                    <div class="carousel-quote-photo">
                      <?php if (isset($field_carousel_item['field_quote_carousel_photo']['#items'])): ?>
                        <?php print render($field_carousel_item['field_quote_carousel_photo']); ?>
                      <?php else: ?>
                        <?php print theme_image(array('path' => drupal_get_path('module', 'asu_clas_paragraphs') . '/images/placeholder-carousel-quotes.jpg')); ?>
                      <?php endif; ?>
                    </div>
                  </div>

                  <div class="col-md-9">
                    <div class="carousel-quote-text">
                      <?php print render($field_carousel_item['field_quote_carousel_quote']); ?>
                    </div>

                    <div class="carousel-quote-name">
                      <?php print render($field_carousel_item['field_quote_carousel_name']); ?>
                    </div>

                    <div class="carousel-quote-title">
                      <?php print render($field_carousel_item['field_quote_carousel_title']); ?>
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
      $('.carousel-quotes').flexslider({
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
