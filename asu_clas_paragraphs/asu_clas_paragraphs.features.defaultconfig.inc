<?php
/**
 * @file
 * asu_clas_paragraphs.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function asu_clas_paragraphs_defaultconfig_features() {
  return array(
    'asu_clas_paragraphs' => array(
      'field_default_fields' => 'field_default_fields',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function asu_clas_paragraphs_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-clas_paragraph_pane-field_clas_paragraph_bundle'.
  $fields['fieldable_panels_pane-clas_paragraph_pane-field_clas_paragraph_bundle'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_clas_paragraph_bundle',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'paragraphs',
    ),
    'field_instance' => array(
      'bundle' => 'clas_paragraph_pane',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '<strong>Bundle examples:</strong> <a href="#clas-01">CTA Footer</a>, <a href="#clas-02">Two Column Image Right</a>, <a href="#clas-03">Two Column Image Left</a>, <a href="#clas-04">Two Column Gold Starburst Right</a>, <a href="#clas-05">Starburst Gray Carousel</a>, <a href="#clas-06">Starburst Gold Carousel</a>, <a href="#clas-07">Quotes Carousel</a>, <a href="#clas-08">Number Highlighter</a>, <a href="#clas-09">Two Column Image Right Two</a>, <a href="#clas-10">Two Column Video Left</a>, <a href="#clas-11">Two Column Edgy Gold Icons</a>, <a href="#clas-12">Two Column Edgy Background Cover</a>, <a href="#clas-13">Discipline Icon Grid</a>, <a href="#clas-14">Carousel Background Cover</a>, <a href="#clas-15">Media Object</a>, <a href="#clas-16">Discipline Icon Grid with Text</a>.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'paragraphs',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'type' => 'paragraphs_view',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_clas_paragraph_bundle',
      'label' => 'Paragraph Bundle',
      'required' => 0,
      'settings' => array(
        'add_mode' => 'select',
        'allowed_bundles' => array(
          'clas_carousel_background_cover' => 'clas_carousel_background_cover',
          'clas_cta_footer' => 'clas_cta_footer',
          'clas_discipline_icon_grid' => 'clas_discipline_icon_grid',
          'clas_discipline_icon_grid_w_text' => 'clas_discipline_icon_grid_w_text',
          'clas_edgy_paragraph_bg_cover' => 'clas_edgy_paragraph_bg_cover',
          'clas_edgy_paragraph_gold_icon' => 'clas_edgy_paragraph_gold_icon',
          'clas_media_object' => 'clas_media_object',
          'clas_number_highlighter' => 'clas_number_highlighter',
          'clas_quotes_carousel' => 'clas_quotes_carousel',
          'clas_starburst_gold_carousel' => 'clas_starburst_gold_carousel',
          'clas_starburst_gray_carousel' => 'clas_starburst_gray_carousel',
          'clas_two_col_gold_sb_right' => 'clas_two_col_gold_sb_right',
          'clas_two_column_image_left' => 'clas_two_column_image_left',
          'clas_two_column_image_right' => 'clas_two_column_image_right',
          'clas_two_column_image_right_2' => 'clas_two_column_image_right_2',
          'clas_two_column_photos' => 'clas_two_column_photos',
          'clas_two_column_video_left' => 'clas_two_column_video_left',
        ),
        'bundle_weights' => array(
          'clas_carousel_background_cover' => -34,
          'clas_cta_footer' => -33,
          'clas_discipline_icon_grid' => -32,
          'clas_discipline_icon_grid_w_text' => -31,
          'clas_edgy_paragraph_bg_cover' => -30,
          'clas_edgy_paragraph_gold_icon' => -29,
          'clas_media_object' => -28,
          'clas_number_highlighter' => -27,
          'clas_quotes_carousel' => -18,
          'clas_starburst_gold_carousel' => -26,
          'clas_starburst_gray_carousel' => -25,
          'clas_two_col_gold_sb_right' => -24,
          'clas_two_column_image_left' => -22,
          'clas_two_column_image_right' => -21,
          'clas_two_column_image_right_2' => -23,
          'clas_two_column_photos' => -20,
          'clas_two_column_video_left' => -19,
        ),
        'default_edit_mode' => 'open',
        'title' => 'Paragraph',
        'title_multiple' => 'Paragraphs',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'paragraphs',
        'settings' => array(),
        'type' => 'paragraphs_embed',
        'weight' => -4,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>Bundle examples:</strong> <a href="#clas-01">CTA Footer</a>, <a href="#clas-02">Two Column Image Right</a>, <a href="#clas-03">Two Column Image Left</a>, <a href="#clas-04">Two Column Gold Starburst Right</a>, <a href="#clas-05">Starburst Gray Carousel</a>, <a href="#clas-06">Starburst Gold Carousel</a>, <a href="#clas-07">Quotes Carousel</a>, <a href="#clas-08">Number Highlighter</a>, <a href="#clas-09">Two Column Image Right Two</a>, <a href="#clas-10">Two Column Video Left</a>, <a href="#clas-11">Two Column Edgy Gold Icons</a>, <a href="#clas-12">Two Column Edgy Background Cover</a>, <a href="#clas-13">Discipline Icon Grid</a>, <a href="#clas-14">Carousel Background Cover</a>, <a href="#clas-15">Media Object</a>, <a href="#clas-16">Discipline Icon Grid with Text</a>.');
  t('Paragraph Bundle');

  return $fields;
}
