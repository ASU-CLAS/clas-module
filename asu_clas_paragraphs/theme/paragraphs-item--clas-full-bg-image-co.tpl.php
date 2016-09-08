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

<?php //dsm($content); ?>

<?php

	$photo = file_create_url($content['field_callout_background_image'][0]['#item']['uri']);

?>

<div class="row full-background-image-callout" needthisbg="<?php print $photo; ?>">

	<div class="col-md-12 text-center">
		<div class="full-background-image-callout-text">
			<?php print $content['field_callout_body']['#items'][0]['safe_value']; ?>
		</div>
	</div>

</div>

