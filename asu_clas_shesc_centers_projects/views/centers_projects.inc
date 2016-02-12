<?php

$view = new view();
$view->name = 'center_projects';
$view->description = '';
$view->tag = 'asu_clas';
$view->base_table = 'node';
$view->human_name = 'ASU CLAS SHESC Center Projects';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'center-projects-list';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Center Project Image */
$handler->display->display_options['fields']['center_project_image']['id'] = 'center_project_image';
$handler->display->display_options['fields']['center_project_image']['table'] = 'field_data_center_project_image';
$handler->display->display_options['fields']['center_project_image']['field'] = 'center_project_image';
$handler->display->display_options['fields']['center_project_image']['label'] = '';
$handler->display->display_options['fields']['center_project_image']['element_class'] = 'center-project-image';
$handler->display->display_options['fields']['center_project_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['center_project_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['center_project_image']['settings'] = array(
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
$handler->display->display_options['fields']['title']['element_class'] = 'center-project-name';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Center Project Description */
$handler->display->display_options['fields']['center_project_description']['id'] = 'center_project_description';
$handler->display->display_options['fields']['center_project_description']['table'] = 'field_data_center_project_description';
$handler->display->display_options['fields']['center_project_description']['field'] = 'center_project_description';
$handler->display->display_options['fields']['center_project_description']['label'] = '';
$handler->display->display_options['fields']['center_project_description']['element_class'] = 'center-project-description';
$handler->display->display_options['fields']['center_project_description']['element_label_colon'] = FALSE;
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
  'center_project' => 'center_project',
);

/* Display: Projects List */
$handler = $view->new_display('panel_pane', 'Projects List', 'center_projects_list');
