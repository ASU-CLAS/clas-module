<?php
// Define Panopoly Layout.
$plugin = array(
  'title' => t('Monster'),
  'icon' => 'monster.png',
  'category' => t('ASU CLAS'),
  'theme' => 'monster',
  'css' => 'monster.css',
  'regions' => array(
      'header' => t('Header'),

      'top_row_1' => t('Top: Row 1, Full Width (100%)'),

      'top_row_2_col_1' => t('Top: Row 2, Column 1 (66%)'),
      'top_row_2_col_2' => t('Top: Row 2, Column 2 (33%)'),

      'top_row_3' => t('Top: Row 3, Full Width (100%)'),

      'top_row_4_col_1' => t('Top: Row 4, Column 1 (33%)'),
      'top_row_4_col_2' => t('Top: Row 4, Column 2 (66%)'),

      'top_row_5' => t('Top: Row 5, Full Width (100%)'),

      'top_row_6_col_1' => t('Top: Row 6, Column 1 (50%)'),
      'top_row_6_col_2' => t('Top: Row 6, Column 2 (50%)'),

      'top_row_7' => t('Top: Row 7, Full Width (100%)'),

      'top_row_8_col_1' => t('Top: Row 8, Column 1 (33%)'),
      'top_row_8_col_2' => t('Top: Row 8, Column 2 (33%)'),
      'top_row_8_col_3' => t('Top: Row 8, Column 3 (33%)'),

      'top_row_9' => t('Top: Row 9, Full Width (100%)'),

      'top_row_10_col_1' => t('Top: Row 10, Column 1 (33%)'),
      'top_row_10_col_2' => t('Top: Row 10, Column 2 (33%)'),
      'top_row_10_col_3' => t('Top: Row 10, Column 3 (33%)'),

      'top_row_11' => t('Top: Row 11, Full Width (100%)'),

      'top_row_12_col_1' => t('Top: Row 12, Column 1 (25%)'),
      'top_row_12_col_2' => t('Top: Row 12, Column 2 (25%)'),
      'top_row_12_col_3' => t('Top: Row 12, Column 3 (25%)'),
      'top_row_12_col_4' => t('Top: Row 12, Column 4 (25%)'),

      'top_row_13' => t('Top: Row 13, Full Width (100%)'),

      'middle_row_1' => t('Middle: Row 1, Full Width (100%)'),

      'middle_row_2_col_1' => t('Middle: Row 2, Column 1 (66%)'),
      'middle_row_2_col_2' => t('Middle: Row 2, Column 2 (33%)'),

      'middle_row_3' => t('Middle: Row 3, Full Width (100%)'),

      'middle_row_4_col_1' => t('Middle: Row 4, Column 1 (33%)'),
      'middle_row_4_col_2' => t('Middle: Row 4, Column 2 (66%)'),

      'middle_row_5' => t('Middle: Row 5, Full Width (100%)'),

      'middle_row_6_col_1' => t('Middle: Row 6, Column 1 (50%)'),
      'middle_row_6_col_2' => t('Middle: Row 6, Column 2 (50%)'),

      'middle_row_7' => t('Middle: Row 7, Full Width (100%)'),

      'middle_row_8_col_1' => t('Middle: Row 8, Column 1 (33%)'),
      'middle_row_8_col_2' => t('Middle: Row 8, Column 2 (33%)'),
      'middle_row_8_col_3' => t('Middle: Row 8, Column 3 (33%)'),

      'middle_row_9' => t('Middle: Row 9, Full Width (100%)'),

      'middle_row_10_col_1' => t('Middle: Row 10, Column 1 (33%)'),
      'middle_row_10_col_2' => t('Middle: Row 10, Column 2 (33%)'),
      'middle_row_10_col_3' => t('Middle: Row 10, Column 3 (33%)'),

      'middle_row_11' => t('Middle: Row 11, Full Width (100%)'),

      'middle_row_12_col_1' => t('Middle: Row 12, Column 1 (25%)'),
      'middle_row_12_col_2' => t('Middle: Row 12, Column 2 (25%)'),
      'middle_row_12_col_3' => t('Middle: Row 12, Column 3 (25%)'),
      'middle_row_12_col_4' => t('Middle: Row 12, Column 4 (25%)'),

      'middle_row_13' => t('Middle: Row 13, Full Width (100%)'),

      'bottom_row_1' => t('Bottom: Row 1, Full Width (100%)'),

      'bottom_row_2_col_1' => t('Bottom: Row 2, Column 1 (66%)'),
      'bottom_row_2_col_2' => t('Bottom: Row 2, Column 2 (33%)'),

      'bottom_row_3' => t('Bottom: Row 3, Full Width (100%)'),

      'bottom_row_4_col_1' => t('Bottom: Row 4, Column 1 (33%)'),
      'bottom_row_4_col_2' => t('Bottom: Row 4, Column 2 (66%)'),

      'bottom_row_5' => t('Bottom: Row 5, Full Width (100%)'),

      'bottom_row_6_col_1' => t('Bottom: Row 6, Column 1 (50%)'),
      'bottom_row_6_col_2' => t('Bottom: Row 6, Column 2 (50%)'),

      'bottom_row_7' => t('Bottom: Row 7, Full Width (100%)'),

      'bottom_row_8_col_1' => t('Bottom: Row 8, Column 1 (33%)'),
      'bottom_row_8_col_2' => t('Bottom: Row 8, Column 2 (33%)'),
      'bottom_row_8_col_3' => t('Bottom: Row 8, Column 3 (33%)'),

      'bottom_row_9' => t('Bottom: Row 9, Full Width (100%)'),

      'bottom_row_10_col_1' => t('Bottom: Row 10, Column 1 (33%)'),
      'bottom_row_10_col_2' => t('Bottom: Row 10, Column 2 (33%)'),
      'bottom_row_10_col_3' => t('Bottom: Row 10, Column 3 (33%)'),

      'bottom_row_11' => t('Bottom: Row 11, Full Width (100%)'),

      'bottom_row_12_col_1' => t('Bottom: Row 12, Column 1 (25%)'),
      'bottom_row_12_col_2' => t('Bottom: Row 12, Column 2 (25%)'),
      'bottom_row_12_col_3' => t('Bottom: Row 12, Column 3 (25%)'),
      'bottom_row_12_col_4' => t('Bottom: Row 12, Column 4 (25%)'),

      'bottom_row_13' => t('Bottom: Row 13, Full Width (100%)'),

      'footer' => t('Footer'),
	),
);
