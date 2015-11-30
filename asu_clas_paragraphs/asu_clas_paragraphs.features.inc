<?php
/**
 * @file
 * asu_clas_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asu_clas_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function asu_clas_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: clas_bg_image.
  $styles['clas_bg_image'] = array(
    'name' => 'clas_bg_image',
    'label' => 'CLAS Background Image',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1920,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: clas_carousel_starburst_gray_photo.
  $styles['clas_carousel_starburst_gray_photo'] = array(
    'name' => 'clas_carousel_starburst_gray_photo',
    'label' => 'CLAS Carousel Starburst Gray Photo',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 390,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: clas_cta_footer_icons.
  $styles['clas_cta_footer_icons'] = array(
    'name' => 'clas_cta_footer_icons',
    'label' => 'CLAS Footer Icon',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: clas_listing_overview_photo.
  $styles['clas_listing_overview_photo'] = array(
    'name' => 'clas_listing_overview_photo',
    'label' => 'CLAS Listing Overview Photo',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: clas_quote_carousel_photo.
  $styles['clas_quote_carousel_photo'] = array(
    'name' => 'clas_quote_carousel_photo',
    'label' => 'CLAS Quote Carousel Photo',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: clas_zig_zag_photo.
  $styles['clas_zig_zag_photo'] = array(
    'name' => 'clas_zig_zag_photo',
    'label' => 'CLAS Zig Zag Photo',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 540,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: img-circle.
  $styles['img-circle'] = array(
    'name' => 'img-circle',
    'label' => 'Bootstrap Rounded',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function asu_clas_paragraphs_paragraphs_info() {
  $items = array(
    'clas_carousel_background_cover' => array(
      'name' => 'CLAS Carousel Background Cover',
      'bundle' => 'clas_carousel_background_cover',
      'locked' => '1',
    ),
    'clas_cta_footer' => array(
      'name' => 'CLAS CTA Footer',
      'bundle' => 'clas_cta_footer',
      'locked' => '1',
    ),
    'clas_discipline_icon_grid' => array(
      'name' => 'CLAS Discipline Icon Grid',
      'bundle' => 'clas_discipline_icon_grid',
      'locked' => '1',
    ),
    'clas_discipline_icon_grid_w_text' => array(
      'name' => 'CLAS Discipline Icon Grid With Text',
      'bundle' => 'clas_discipline_icon_grid_w_text',
      'locked' => '1',
    ),
    'clas_edgy_paragraph_bg_cover' => array(
      'name' => 'CLAS Edgy Paragraph Background Cover',
      'bundle' => 'clas_edgy_paragraph_bg_cover',
      'locked' => '1',
    ),
    'clas_edgy_paragraph_gold_icon' => array(
      'name' => 'CLAS Edgy Paragraph Gold Icon',
      'bundle' => 'clas_edgy_paragraph_gold_icon',
      'locked' => '1',
    ),
    'clas_media_object' => array(
      'name' => 'CLAS Media Object',
      'bundle' => 'clas_media_object',
      'locked' => '1',
    ),
    'clas_number_highlighter' => array(
      'name' => 'CLAS Number Highlighter',
      'bundle' => 'clas_number_highlighter',
      'locked' => '1',
    ),
    'clas_quotes_carousel' => array(
      'name' => 'CLAS Quotes Carousel',
      'bundle' => 'clas_quotes_carousel',
      'locked' => '1',
    ),
    'clas_starburst_gold_carousel' => array(
      'name' => 'CLAS Starburst Gold Carousel',
      'bundle' => 'clas_starburst_gold_carousel',
      'locked' => '1',
    ),
    'clas_starburst_gray_carousel' => array(
      'name' => 'CLAS Starburst Gray Carousel',
      'bundle' => 'clas_starburst_gray_carousel',
      'locked' => '1',
    ),
    'clas_two_col_gold_sb_right' => array(
      'name' => 'CLAS Two Column Gold Starburst Right',
      'bundle' => 'clas_two_col_gold_sb_right',
      'locked' => '1',
    ),
    'clas_two_column_image_left' => array(
      'name' => 'CLAS Two Column Image Left',
      'bundle' => 'clas_two_column_image_left',
      'locked' => '1',
    ),
    'clas_two_column_image_right' => array(
      'name' => 'CLAS Two Column Image Right',
      'bundle' => 'clas_two_column_image_right',
      'locked' => '1',
    ),
    'clas_two_column_image_right_2' => array(
      'name' => 'CLAS Two Column Image Right Option Two',
      'bundle' => 'clas_two_column_image_right_2',
      'locked' => '1',
    ),
    'clas_two_column_photos' => array(
      'name' => 'CLAS Two Column Photos',
      'bundle' => 'clas_two_column_photos',
      'locked' => '1',
    ),
    'clas_two_column_video_left' => array(
      'name' => 'CLAS Two Column Video Left',
      'bundle' => 'clas_two_column_video_left',
      'locked' => '1',
    ),
  );
  return $items;
}
