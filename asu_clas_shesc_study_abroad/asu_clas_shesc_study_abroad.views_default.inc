<?php
/**
 * @file
 * asu_clas_shesc_study_abroad.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function asu_clas_shesc_study_abroad_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'asu_clas_shesc_study_abroad';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ASU CLAS SHESC Study Abroad';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'study-abroad-program-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Study Abroad Image */
  $handler->display->display_options['fields']['field_study_abroad_image']['id'] = 'field_study_abroad_image';
  $handler->display->display_options['fields']['field_study_abroad_image']['table'] = 'field_data_field_study_abroad_image';
  $handler->display->display_options['fields']['field_study_abroad_image']['field'] = 'field_study_abroad_image';
  $handler->display->display_options['fields']['field_study_abroad_image']['label'] = '';
  $handler->display->display_options['fields']['field_study_abroad_image']['element_class'] = 'study-abroad-program-image';
  $handler->display->display_options['fields']['field_study_abroad_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_study_abroad_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_study_abroad_image']['settings'] = array(
    'image_style' => 'asu_clas_research_area_image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'study-abroad-program-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Study Abroad Description */
  $handler->display->display_options['fields']['field_study_abroad_description']['id'] = 'field_study_abroad_description';
  $handler->display->display_options['fields']['field_study_abroad_description']['table'] = 'field_data_field_study_abroad_description';
  $handler->display->display_options['fields']['field_study_abroad_description']['field'] = 'field_study_abroad_description';
  $handler->display->display_options['fields']['field_study_abroad_description']['label'] = '';
  $handler->display->display_options['fields']['field_study_abroad_description']['element_class'] = 'study-abroad-program-description';
  $handler->display->display_options['fields']['field_study_abroad_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'study_abroad_program' => 'study_abroad_program',
  );

  /* Display: Program List */
  $handler = $view->new_display('panel_pane', 'Program List', 'program_list');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['asu_clas_shesc_study_abroad'] = $view;

  return $export;
}
