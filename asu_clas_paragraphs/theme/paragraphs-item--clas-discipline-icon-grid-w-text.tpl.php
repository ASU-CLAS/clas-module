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

$field_paragraph_title = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_title_dwt_grid');
$field_paragraph_title = $field_paragraph_title[0]['value'];

//-- Icons

//$field_paragraph_icon_1_icon = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_icon_1_icon');

//-- Button Callouts

$field_paragraph_btn_callouts = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_button_callout');


?>

<div class="clas-discipline-icon-grid-t-text">
  <h2><?php print $field_paragraph_title; ?></h2>

    <div class="row">

    <?php foreach ($content['field_paragraph_icon_dw_callouts'] as $key => $field_collection): ?>
    <?php if (is_numeric($key) && !empty($field_collection['entity']['field_collection_item'])): ?>
    <?php $field_icon = current($field_collection['entity']['field_collection_item']); ?>

    <?php if ($key % 2 == 0 && $key != 0): ?>
    </div>
    <div class="row">
    <?php endif; ?>

    	<div class="col-xs-12 col-sm-6 col-md-6 disc-icon-wrapper">
        <div class="row">
          <div class="col-xs-3 col-sm-3 col-md-2 disc-icon-icon disc-icon-<?php print $field_icon['field_paragraph_dwt_icon']['#items'][0]['value']; ?>"></div>
          <div class="col-xs-9 col-sm-9 col-md-10 dwt-icon-link">
            <?php if (!empty($field_icon['field_paragraph_dwt_icon_link']['#items'][0]['url']) && !empty($field_icon['field_paragraph_dwt_icon_title']['#items'][0]['value'])): ?>
            <?php print l($field_icon['field_paragraph_dwt_icon_title']['#items'][0]['value'], $field_icon['field_paragraph_dwt_icon_link']['#items'][0]['url'], array('html' => TRUE)); ?>
            <?php elseif(!empty($field_icon['field_paragraph_dwt_icon_title']['#items'][0]['value'])): ?>
            <strong class="icon-title"><?php print $field_icon['field_paragraph_dwt_icon_title']['#items'][0]['value'] ?></strong>
            <?php endif; ?>
            <?php if (!empty($field_icon['field_paragraph_dwt_icon_text']['#items'][0]['value'])): ?>
            <div class="paragraph-dwt-icon-text"><?php print $field_icon['field_paragraph_dwt_icon_text']['#items'][0]['value']; ?></div>
            <?php endif; ?>
          </div>
        </div>
    	</div>

    <?php endif; ?>
    <?php endforeach; ?>

    </div>

  </div>

</div>


