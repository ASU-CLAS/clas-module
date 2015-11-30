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

//-- Title

$field_paragraph_title_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_title_right_2');
$field_paragraph_title_right = $field_paragraph_title_right[0]['value'];

//-- Subtitle

$field_paragraph_subtitle_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_subtitle_right_2');
$field_paragraph_subtitle_right = $field_paragraph_subtitle_right[0]['value'];

//-- Text

$field_paragraph_text_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_text_right_2');
$field_paragraph_text_right = $field_paragraph_text_right[0]['value'];

//-- Links

 $field_paragraph_links_right = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_links_right_2');
 $field_paragraph_links_right = asu_clas_paragraphs_format_with_pipes($field_paragraph_links_right);
 //dpm($field_paragraph_links_right);

?>

<div class="row image-left-right-row-padding clas-two-column-image-right-option-two-wrapper">

	<div class="col-xs-12 col-sm-8 col-md-8">

		<h3><?php print $field_paragraph_title_right; ?></h3>

    <p><strong><?php print $field_paragraph_subtitle_right; ?></strong></p>

		<p><?php print $field_paragraph_text_right; ?></p>

		<p class="pipe-links"><?php print $field_paragraph_links_right; ?></p>

	</div>

	<div class="col-xs-12 col-sm-4 col-md-4 text-center">
		<?php print render($content['field_paragraph_image_right_2']); ?>
	</div>

</div>


