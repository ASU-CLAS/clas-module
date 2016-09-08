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

$field_title_1 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_title_1');
$field_title_1 = $field_title_1[0]['value'];

$field_title_2 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_title_2');
$field_title_2 = $field_title_2[0]['value'];

$field_title_3 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_title_3');
$field_title_3 = $field_title_3[0]['value'];

//-- Text

$field_text_1 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_text_1');
$field_text_1 = $field_text_1[0]['value'];

$field_text_2 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_text_2');
$field_text_2 = $field_text_2[0]['value'];

$field_text_3 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_text_3');
$field_text_3 = $field_text_3[0]['value'];

//-- Button Titles

$field_button_title_1 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_button_title_1');
$field_button_title_1 = $field_button_title_1[0]['value'];

$field_button_title_2 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_button_title_2');
$field_button_title_2 = $field_button_title_2[0]['value'];

$field_button_title_3 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_button_title_3');
$field_button_title_3 = $field_button_title_3[0]['value'];

//-- Links

$field_link_1 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_link_1');
$field_link_1 = $field_link_1[0]['value'];

$field_link_2 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_link_2');
$field_link_2 = $field_link_2[0]['value'];

$field_link_3 = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_link_3');
$field_link_3 = $field_link_3[0]['value'];

//--

?>

<div class="row cta-section">

	<div class="column col-sm-4">
		<?php echo render($content['field_icon_1']); ?>
		<p class="title-cta"><?php echo $field_title_1; ?></p>
		<p class="sub-title-cta"><?php echo $field_text_1; ?></p>
		<p class="btn btn-gold btn-lg btn-block btn-cta"><a href="<?php echo $field_link_1; ?>"><?php echo $field_button_title_1; ?></a></p>
	</div>

	<div class="column col-sm-4">
		<?php echo render($content['field_icon_2']); ?>
		<p class="title-cta"><?php echo $field_title_2; ?></p>
		<p class="sub-title-cta"><?php echo $field_text_2; ?></p>
		<p class="btn btn-gold btn-lg btn-block btn-cta"><a href="<?php echo $field_link_2; ?>"><?php echo $field_button_title_2; ?></a></p>
	</div>

	<div class="column col-sm-4">
		<?php echo render($content['field_icon_3']); ?>
		<p class="title-cta"><?php echo $field_title_3; ?></p>
		<p class="sub-title-cta"><?php echo $field_text_3; ?></p>
		<p class="btn btn-gold btn-lg btn-block btn-cta"><a href="<?php echo $field_link_3; ?>"><?php echo $field_button_title_3; ?></a></p>
	</div>

</div>


