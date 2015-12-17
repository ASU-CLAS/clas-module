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
$field_number_highlighter_title = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_number_highlighter_title');
$field_number_highlighter_title = $field_number_highlighter_title[0]['value'];

/**
 * Left Column
 */
$field_left_number = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_left_number');
$field_left_number = $field_left_number[0]['value'];

$field_left_text = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_left_text');
$field_left_text = $field_left_text[0]['value'];

/**
 * Middle Column
 */
$field_middle_number = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_middle_number');
$field_middle_number = $field_middle_number[0]['value'];

$field_middle_text = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_middle_text');
$field_middle_text = $field_middle_text[0]['value'];

/**
 * Right Column
 */
$field_right_number = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_right_number');
$field_right_number = $field_right_number[0]['value'];

$field_right_text = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_right_text');
$field_right_text = $field_right_text[0]['value'];
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

		<div class="row clearfix row-number-highlighter text-center">
			<div class="col col-xs-12 col-sm-12 col-md-12">
				<h2 class="stat-title"><?php echo $field_number_highlighter_title; ?></h2>
			</div>

			<div class="col col-sm-4">
				<p class="stat-number"><?php echo $field_left_number; ?></p>
				<p class="stat-text"><?php echo $field_left_text; ?></p>
			</div>

			<div class="col col-sm-4">
				<p class="stat-number"><?php echo $field_middle_number; ?></p>
				<p class="stat-text"><?php echo $field_middle_text; ?></p>
			</div>

			<div class="col col-sm-4">
				<p class="stat-number"><?php echo $field_right_number; ?></p>
				<p class="stat-text"><?php echo $field_right_text; ?></p>
			</div>
		</div>

	</div>
</div>
