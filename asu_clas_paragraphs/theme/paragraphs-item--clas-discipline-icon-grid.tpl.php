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

$field_paragraph_title = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_title_disc_grid');
$field_paragraph_title = $field_paragraph_title[0]['value'];

//-- Body text field

$field_paragraph_text = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_text_disc_grid');
$field_paragraph_text = $field_paragraph_text[0]['value'];

//-- Research area option

$field_paragraph_research_option = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_research_areas');
$field_paragraph_research_option = $field_paragraph_research_option[0]['value'];

//-- Icons

//$field_paragraph_icon_1_icon = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_icon_1_icon');

//-- Button Callouts

$field_paragraph_btn_callouts = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_button_callout');

//-- Column Template Type

$column_template_type = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_column_setup');
$column_classes = '';
if (!empty($column_template_type[0]['value'])) {
  $column_classes = asu_clas_paragraphs_format_column_classes($column_template_type[0]['value']);
}


?>

<div class="clas-discipline-icon-grid">

  <div class="row">

    <h2><?php print $field_paragraph_title; ?></h2>

    <?php print $field_paragraph_text; ?>

    <?php
      if ($field_paragraph_research_areas[0]['value'] == TRUE) {
        if ($research_areas_view = views_embed_view('research_areas', 'research_area_grid_horizontal_pane')) {
          $hide = TRUE;

          printf('<section class="research-areas-view">%s</section>', $research_areas_view);
        }
        else {
          $hide = TRUE;
          printf('ERROR: The research_area_grid_horizontal_pane VIEW or research area taxonomies are not available.');
        }
      }
      else {
        $hide = FALSE;
      }

    ?>

    <?php if (!empty($content['field_paragraph_icon_callouts']) && is_array($content['field_paragraph_icon_callouts'])): ?>
      <?php foreach ($content['field_paragraph_icon_callouts'] as $key => $field_collection): ?>
        <?php if (is_numeric($key) && !empty($field_collection['entity']['field_collection_item'])): ?>
          <?php $field_icon = current($field_collection['entity']['field_collection_item']); ?>

          <div class="<?php echo (isset($hide) && $hide === TRUE) ? 'hide ' : NULL; ?><?php print $column_classes; ?> disc-icon-wrapper">
            <div class="row">
              <div class="col-xs-6 col-sm-3 col-md-3 disc-icon-icon disc-icon-<?php print $field_icon['field_paragraph_discipline_icon']['#items'][0]['value']; ?>">
              </div>

              <div class="col-xs-6 col-sm-9 col-md-9 disc-icon-link">
                <?php if (!empty($field_icon['field_paragraph_icon_link']['#items'][0]['url']) && !empty($field_icon['field_paragraph_icon_title']['#items'][0]['value'])): ?>
                  <?php print l($field_icon['field_paragraph_icon_title']['#items'][0]['value'], $field_icon['field_paragraph_icon_link']['#items'][0]['url'], array('html' => TRUE)); ?>
                <?php elseif(!empty($field_icon['field_paragraph_icon_title']['#items'][0]['value'])): ?>
                  <strong><?php print $field_icon['field_paragraph_icon_title']['#items'][0]['value'] ?></strong>
                <?php endif; ?>
              </div>
            </div>
          </div>

        <?php endif; ?>
      <?php endforeach; ?>
    <?php endif; ?>

	<br class="clear" />

    <div class="disc-btn-callouts">
      <?php if (!empty($field_paragraph_btn_callouts)): ?>
        <?php foreach ($field_paragraph_btn_callouts as $field_paragraph_btn_callout): ?>
          <a class="btn btn-gold btn-lg btn-cta cta-button cta-button-link" href="<?php echo $field_paragraph_btn_callout['url']; ?>">
            <?php echo $field_paragraph_btn_callout['title']; ?>
          </a>
        <?php endforeach; ?>
      <?php endif; ?>
    </div>

  </div>

</div>
