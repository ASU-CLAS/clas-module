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
$field_paragraph_title = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_sb_title');
$field_paragraph_title = $field_paragraph_title[0]['value'];

/**
 * Text
 */
$field_paragraph_text = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_sb_text');
$field_paragraph_text = $field_paragraph_text[0]['value'];

/**
 * List Title
 */
$field_paragraph_list_title = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_sb_list_title');
$field_paragraph_list_title = $field_paragraph_list_title[0]['value'];

/**
 * List Items
 */
$field_paragraph_list_items = isset($content['field_sb_list_item']) ? $content['field_sb_list_item'] : NULL;

/**
 * List Text
 */
$field_paragraph_list_text = isset($content['field_sb_list_text']) ? $content['field_sb_list_text'] : NULL;
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

    <div class="row clearfix two-column-gold-starburst-right">
      <div class="col-md-8">
        <h2 class="two-column-gold-starburst-right-title"><?php echo $field_paragraph_title; ?></h2>

        <div class="two-column-gold-starburst-right-text">
          <?php echo $field_paragraph_text; ?>
        </div>
      </div>

      <div class="col-md-4">
        <div class="two-column-gold-starburst-right-sidebar">
          <h5 class="two-column-gold-starburst-right-sidebar-title"><?php echo $field_paragraph_list_title; ?></h5>

          <div class="two-column-gold-starburst-right-sidebar-text">
            <?php if(!empty($field_paragraph_list_items)): ?>
              <?php print render($field_paragraph_list_items); ?>
            <?php endif; ?>

            <?php if(!empty($field_paragraph_list_text)): ?>
              <?php print render($field_paragraph_list_text); ?>
            <?php endif; ?>
          </div>
        </div>
      </div>
    </div>

  </div>
</div>
