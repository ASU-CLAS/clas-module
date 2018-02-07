<?php
/**
 * @file
 * clasdegree.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function clasdegree_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clas_grad_degrees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CLAS Grad Degrees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '<br>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
.views-field-field-cd-thumbnail {
float:left;
}
.degree-list-text-fields {
    overflow: hidden;
    padding-left: 15px;
}
.degree-list-text-fields strong {
font-size: 1.25em;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Degrees imported';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Degrees have been imported.  Please check back later.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_cd_thumbnail']['id'] = 'field_cd_thumbnail';
  $handler->display->display_options['fields']['field_cd_thumbnail']['table'] = 'field_data_field_cd_thumbnail';
  $handler->display->display_options['fields']['field_cd_thumbnail']['field'] = 'field_cd_thumbnail';
  $handler->display->display_options['fields']['field_cd_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_cd_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cd_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cd_thumbnail']['settings'] = array(
    'image_style' => 'clas_degree_image',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Marketing Description */
  $handler->display->display_options['fields']['field_cd_marketing_description']['id'] = 'field_cd_marketing_description';
  $handler->display->display_options['fields']['field_cd_marketing_description']['table'] = 'field_data_field_cd_marketing_description';
  $handler->display->display_options['fields']['field_cd_marketing_description']['field'] = 'field_cd_marketing_description';
  $handler->display->display_options['fields']['field_cd_marketing_description']['label'] = '';
  $handler->display->display_options['fields']['field_cd_marketing_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cd_marketing_description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="degree-list-text-fields"><strong>[title]</strong><br/>[field_cd_marketing_description]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Degree Awarded (field_asu_degree_awarded) */
  $handler->display->display_options['sorts']['field_asu_degree_awarded_value']['id'] = 'field_asu_degree_awarded_value';
  $handler->display->display_options['sorts']['field_asu_degree_awarded_value']['table'] = 'field_data_field_asu_degree_awarded';
  $handler->display->display_options['sorts']['field_asu_degree_awarded_value']['field'] = 'field_asu_degree_awarded_value';
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
    'clas_degree' => 'clas_degree',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Pane */
  $handler = $view->new_display('panel_pane', 'Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clas-degrees-view clas-undergrad';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['clas_grad_degrees'] = $view;

  return $export;
}
