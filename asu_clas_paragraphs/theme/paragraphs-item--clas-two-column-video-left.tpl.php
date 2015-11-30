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

$field_paragraph_title = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_title_video_left');
$field_paragraph_title = $field_paragraph_title[0]['value'];

//-- Text

$field_paragraph_text = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_text_video_left');
$field_paragraph_text = $field_paragraph_text[0]['value'];

//-- Links

// $field_paragraph_links = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_links');
// $field_paragraph_links = $field_paragraph_links[0]['value'];

?>

<div class="row clas-two-column-video-left-wrapper">

    <h2 class="video-title"><?php echo $field_paragraph_title; ?></h2>

  	<div class="col-xs-12 col-sm-6 col-md-6">
  		<?php echo render($content['field_paragraph_video_video_left']); ?>
  	</div>

  	<div class="col-xs-12 col-sm-6 col-md-6">

      <h4 class="video-header-link"><?php echo render($content['field_paragraph_link_video_left']); ?></h4>

  		<p><?php echo $field_paragraph_text; ?></p>

  	</div>

</div>


