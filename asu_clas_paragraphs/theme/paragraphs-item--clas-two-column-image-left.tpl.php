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

<?php
/**
 * Title
 */
$field_paragraph_title_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_title');
$field_paragraph_title_left = $field_paragraph_title[0]['value'];

/**
 * Text
 */
$field_paragraph_text_left = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_text');
$field_paragraph_text_left = $field_paragraph_text[0]['value'];

/**
 * Links
 */
$field_paragraph_links_left = $content['field_paragraph_links'];
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

    <div class="zig-zag zig-zag-image-left">

      <div class="row clearfix">
        <div class="col-xs-12 col-sm-6">
          <div class="text-center">
            <?php echo render($content['field_paragraph_image']); ?>
          </div>
        </div>

        <div class="col-xs-12 col-sm-6">
          <h3 class="zig-zag-title"><?php echo $field_paragraph_title_left; ?></h3>

          <div class="zig-zag-text"><?php echo $field_paragraph_text_left; ?></div>
          <div class="zig-zag-links"><?php echo render($field_paragraph_links_left); ?></div>
        </div>
      </div>

    </div>

  </div>
</div>
