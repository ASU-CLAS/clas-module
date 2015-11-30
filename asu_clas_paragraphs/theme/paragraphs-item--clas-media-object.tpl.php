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

    <div class="clas-media-object">

        <?php foreach ($content['field_media_object'] as $key => $field_collection): ?>
          <?php if (is_numeric($key) && !empty($field_collection['entity']['field_collection_item'])): ?>
            <?php $field_media_object_item = current($field_collection['entity']['field_collection_item']); ?>

            <div class="row clearfix">
              <div class="col-md-4">
                <div class="media-image">
                  <?php if (isset($field_media_object_item['field_media_object_image']['#items'])): ?>
                    <?php print render($field_media_object_item['field_media_object_image']); ?>
                  <?php else: ?>
                    <?php print theme_image(array('path' => drupal_get_path('module', 'asu_clas_paragraphs') . '/images/placeholder-200x200.png')); ?>
                  <?php endif; ?>
                </div>
              </div>

              <div class="col-md-8">
                <div class="media-title">
                  <?php if (!empty($field_media_object_item['field_media_object_title_link']['#items'][0]['value'])): ?>
                    <h3><?php print l(t($field_media_object_item['field_media_object_title']['#items'][0]['value']), $field_media_object_item['field_media_object_title_link']['#items'][0]['value'], array('attributes' => array('class' => 'media-link'))); ?></h3>
                  <?php else: ?>
                    <h3><?php print render($field_media_object_item['field_media_object_title']); ?></h3>
                  <?php endif; ?>
                </div>

                <div class="media-body">
                  <?php print render($field_media_object_item['field_media_object_body']); ?>
                </div>
              </div>
            </div>

          <?php endif; ?>
        <?php endforeach; ?>

    </div>

  </div>
</div>
