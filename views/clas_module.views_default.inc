<?php

/**
 * Implements hook_views_default_views().
 */
function clas_module_views_default_views() {

$view = new view();
$view->name = 'clas_degrees_source';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CLAS Degrees';
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
$handler->display->display_options['header']['area']['content'] = '<div class="degree-switch-buttons">
<div class="btn-group">
<a class="btn btn-default" href="/degrees/undergrad"><i class="fa fa-th-large fa-lg"></i> Grid</a><a class="btn btn-default" href="/degrees/undergrad/list"><i class="fa fa-th-list fa-lg"></i> List</a>
</div>
</div>';
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
/* Field: Content: Degree Image */
$handler->display->display_options['fields']['field_degree_image']['id'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['table'] = 'field_data_field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['field'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['label'] = '';
$handler->display->display_options['fields']['field_degree_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_degree_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_degree_image']['settings'] = array(
  'image_style' => 'clas_degree_image',
  'image_link' => '',
);
/* Field: Content: Degree Awarded */
$handler->display->display_options['fields']['field_asu_degree_awarded']['id'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['table'] = 'field_data_field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['field'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_awarded']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['text'] = '<a href="/node/[nid]">[field_asu_degree_awarded]</a>';
$handler->display->display_options['fields']['field_asu_degree_awarded']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Campus */
$handler->display->display_options['fields']['field_asu_degree_campus']['id'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['table'] = 'field_data_field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['field'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['label'] = 'Location';
$handler->display->display_options['fields']['field_asu_degree_campus']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_campus']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_offset'] = '0';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$v = count($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\']) - 1;
if ($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\'][$v][\'value\']== \'Online\') {
  echo \'Yes\';
}
else {
  echo \'No\';
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Department Code */
$handler->display->display_options['fields']['field_asu_degree_department_code']['id'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['table'] = 'field_data_field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['field'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department_code']['element_label_colon'] = FALSE;
/* Field: Content: Degree */
$handler->display->display_options['fields']['field_asu_degree']['id'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['table'] = 'field_data_field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['field'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree']['alter']['text'] = '<div class="asu-degree-rewritten-fields">
    <div class="asu-degree-major-title"><strong>[field_asu_degree_awarded] ([field_asu_degree])</strong></div>
    [body]
    
    <!--<div class="asu-degree-field-title">Location:</div> [field_asu_degree_campus]<br>-->
    <!--<div class="asu-degree-field-title">Degree Type:</div> [field_asu_degree]<br>-->
    <!--<div class="asu-degree-field-title">Available Online:</div> [php] -->
    
</div>';
$handler->display->display_options['fields']['field_asu_degree']['element_label_colon'] = FALSE;
/* Field: Content: Department */
$handler->display->display_options['fields']['field_asu_degree_department']['id'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['field'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department']['element_label_colon'] = FALSE;
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
  'asu_degree' => 'asu_degree',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Program: Undergrad or Graduate (field_asu_degree_program) */
$handler->display->display_options['filters']['field_asu_degree_program_value']['id'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['table'] = 'field_data_field_asu_degree_program';
$handler->display->display_options['filters']['field_asu_degree_program_value']['field'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['value'] = 'undergrad';
$handler->display->display_options['filters']['field_asu_degree_program_value']['group'] = 1;
/* Filter criterion: Content: Cert option: True or False (field_asu_degree_cert) */
$handler->display->display_options['filters']['field_asu_degree_cert_value']['id'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['table'] = 'field_data_field_asu_degree_cert';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['field'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['group'] = 1;

/* Display: Pane - Undergrad Degrees */
$handler = $view->new_display('panel_pane', 'Pane - Undergrad Degrees', 'panel_pane_1');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clas-degrees-view clas-undergrad';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Degree Image */
$handler->display->display_options['fields']['field_degree_image']['id'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['table'] = 'field_data_field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['field'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['label'] = '';
$handler->display->display_options['fields']['field_degree_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_degree_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_degree_image']['settings'] = array(
  'image_style' => 'clas_degree_image',
  'image_link' => '',
);
/* Field: Content: Degree Awarded */
$handler->display->display_options['fields']['field_asu_degree_awarded']['id'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['table'] = 'field_data_field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['field'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_awarded']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['text'] = '<a href="/node/[nid]">[field_asu_degree_awarded]</a>';
$handler->display->display_options['fields']['field_asu_degree_awarded']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Campus */
$handler->display->display_options['fields']['field_asu_degree_campus']['id'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['table'] = 'field_data_field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['field'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['label'] = 'Location';
$handler->display->display_options['fields']['field_asu_degree_campus']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_campus']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_offset'] = '0';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$v = count($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\']) - 1;
if ($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\'][$v][\'value\']== \'Online\') {
  echo \'Yes\';
}
else {
  echo \'No\';
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Department Code */
$handler->display->display_options['fields']['field_asu_degree_department_code']['id'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['table'] = 'field_data_field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['field'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department_code']['element_label_colon'] = FALSE;
/* Field: Content: Degree */
$handler->display->display_options['fields']['field_asu_degree']['id'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['table'] = 'field_data_field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['field'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree']['alter']['text'] = '<div class="asu-degree-rewritten-fields">
    <div class="asu-degree-major-title"><strong>[field_asu_degree_awarded] ([field_asu_degree])</strong></div>
    [body]

    <!--<div class="asu-degree-field-title">Location:</div> [field_asu_degree_campus]<br>-->
    <!--<div class="asu-degree-field-title">Degree Type:</div> [field_asu_degree]<br>-->
    <!--<div class="asu-degree-field-title">Available Online:</div> [php] -->
    
</div>';
$handler->display->display_options['fields']['field_asu_degree']['element_label_colon'] = FALSE;
/* Field: Content: Department */
$handler->display->display_options['fields']['field_asu_degree_department']['id'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['field'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'asu_degree' => 'asu_degree',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Program: Undergrad or Graduate (field_asu_degree_program) */
$handler->display->display_options['filters']['field_asu_degree_program_value']['id'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['table'] = 'field_data_field_asu_degree_program';
$handler->display->display_options['filters']['field_asu_degree_program_value']['field'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['value'] = 'undergrad';
$handler->display->display_options['filters']['field_asu_degree_program_value']['group'] = 1;
/* Filter criterion: Content: Cert option: True or False (field_asu_degree_cert) */
$handler->display->display_options['filters']['field_asu_degree_cert_value']['id'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['table'] = 'field_data_field_asu_degree_cert';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['field'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['value'] = 'false';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['group'] = 1;
/* Filter criterion: Content: Department (field_asu_degree_department) */
$handler->display->display_options['filters']['field_asu_degree_department_value']['id'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['field'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator_id'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['label'] = 'Academic Unit';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['identifier'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_field'] = 'field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_dependent'] = 0;
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Pane - Graduate Degrees */
$handler = $view->new_display('panel_pane', 'Pane - Graduate Degrees', 'panel_pane_2');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clas-degrees-view clas-grad';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<div class="degree-switch-buttons">
<div class="btn-group">
<a class="btn btn-default" href="/degrees/grad"><i class="fa fa-th-large fa-lg"></i> Grid</a><a class="btn btn-default" href="/degrees/grad/list"><i class="fa fa-th-list fa-lg"></i> List</a>
</div>
</div>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Degree Image */
$handler->display->display_options['fields']['field_degree_image']['id'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['table'] = 'field_data_field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['field'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['label'] = '';
$handler->display->display_options['fields']['field_degree_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_degree_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_degree_image']['settings'] = array(
  'image_style' => 'clas_degree_image',
  'image_link' => '',
);
/* Field: Content: Degree Awarded */
$handler->display->display_options['fields']['field_asu_degree_awarded']['id'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['table'] = 'field_data_field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['field'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_awarded']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['text'] = '<a href="/node/[nid]">[field_asu_degree_awarded]</a>';
$handler->display->display_options['fields']['field_asu_degree_awarded']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Campus */
$handler->display->display_options['fields']['field_asu_degree_campus']['id'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['table'] = 'field_data_field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['field'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['label'] = 'Location';
$handler->display->display_options['fields']['field_asu_degree_campus']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_campus']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_offset'] = '0';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$v = count($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\']) - 1;
if ($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\'][$v][\'value\']== \'Online\') {
  echo \'Yes\';
}
else {
  echo \'No\';
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Department Code */
$handler->display->display_options['fields']['field_asu_degree_department_code']['id'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['table'] = 'field_data_field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['field'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department_code']['element_label_colon'] = FALSE;
/* Field: Content: Degree */
$handler->display->display_options['fields']['field_asu_degree']['id'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['table'] = 'field_data_field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['field'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree']['alter']['text'] = '<div class="asu-degree-rewritten-fields">
    <div class="asu-degree-major-title"><strong>[field_asu_degree_awarded]</strong></div>
    [body]
    
    <!--<div class="asu-degree-field-title">Location:</div> [field_asu_degree_campus]<br>-->
    <!--<div class="asu-degree-field-title">Degree Type:</div> [field_asu_degree]<br>-->
    <!--<div class="asu-degree-field-title">Available Online:</div> [php] -->
    
</div>';
$handler->display->display_options['fields']['field_asu_degree']['element_label_colon'] = FALSE;
/* Field: Content: Department */
$handler->display->display_options['fields']['field_asu_degree_department']['id'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['field'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'asu_degree' => 'asu_degree',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Program: Undergrad or Graduate (field_asu_degree_program) */
$handler->display->display_options['filters']['field_asu_degree_program_value']['id'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['table'] = 'field_data_field_asu_degree_program';
$handler->display->display_options['filters']['field_asu_degree_program_value']['field'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['value'] = 'graduate';
$handler->display->display_options['filters']['field_asu_degree_program_value']['group'] = 1;
/* Filter criterion: Content: Department (field_asu_degree_department) */
$handler->display->display_options['filters']['field_asu_degree_department_value']['id'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['field'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator_id'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['label'] = 'Academic Unit';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['identifier'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_field'] = 'field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_dependent'] = 0;
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Pane - Certs Minors */
$handler = $view->new_display('panel_pane', 'Pane - Certs Minors', 'panel_pane_3');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clas-degrees-view clas-undergrad';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<div class="degree-switch-buttons">
<div class="btn-group">
<a class="btn btn-default" href="/degrees/undergrad/minor-certs"><i class="fa fa-th-large fa-lg"></i> Grid</a><a class="btn btn-default" href="/degrees/undergrad/minor-certs/list"><i class="fa fa-th-list fa-lg"></i> List</a>
</div>
</div>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Degree Image */
$handler->display->display_options['fields']['field_degree_image']['id'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['table'] = 'field_data_field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['field'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['label'] = '';
$handler->display->display_options['fields']['field_degree_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_degree_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_degree_image']['settings'] = array(
  'image_style' => 'clas_degree_image',
  'image_link' => '',
);
/* Field: Content: Degree Awarded */
$handler->display->display_options['fields']['field_asu_degree_awarded']['id'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['table'] = 'field_data_field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['field'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_awarded']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['text'] = '<a href="/node/[nid]">[field_asu_degree_awarded]</a>';
$handler->display->display_options['fields']['field_asu_degree_awarded']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['exclude'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Campus */
$handler->display->display_options['fields']['field_asu_degree_campus']['id'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['table'] = 'field_data_field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['field'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['label'] = 'Location';
$handler->display->display_options['fields']['field_asu_degree_campus']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_campus']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_offset'] = '0';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$v = count($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\']) - 1;
if ($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\'][$v][\'value\']== \'Online\') {
  echo \'Yes\';
}
else {
  echo \'No\';
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Department Code */
$handler->display->display_options['fields']['field_asu_degree_department_code']['id'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['table'] = 'field_data_field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['field'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department_code']['element_label_colon'] = FALSE;
/* Field: Content: Degree */
$handler->display->display_options['fields']['field_asu_degree']['id'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['table'] = 'field_data_field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['field'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree']['alter']['text'] = '<div class="asu-degree-rewritten-fields">
    <div class="asu-degree-major-title"><strong>[field_asu_degree_awarded] ([field_asu_degree])</strong></div>
    [body]
    
    <!--<div class="asu-degree-field-title">Location:</div> [field_asu_degree_campus]<br>-->
    <!--<div class="asu-degree-field-title">Degree Type:</div> [field_asu_degree]<br>-->
    <!--<div class="asu-degree-field-title">Available Online:</div> [php] -->
    
</div>';
$handler->display->display_options['fields']['field_asu_degree']['element_label_colon'] = FALSE;
/* Field: Content: Department */
$handler->display->display_options['fields']['field_asu_degree_department']['id'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['field'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'asu_degree' => 'asu_degree',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Program: Undergrad or Graduate (field_asu_degree_program) */
$handler->display->display_options['filters']['field_asu_degree_program_value']['id'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['table'] = 'field_data_field_asu_degree_program';
$handler->display->display_options['filters']['field_asu_degree_program_value']['field'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['value'] = 'undergrad';
$handler->display->display_options['filters']['field_asu_degree_program_value']['group'] = 1;
/* Filter criterion: Content: Cert option: True or False (field_asu_degree_cert) */
$handler->display->display_options['filters']['field_asu_degree_cert_value']['id'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['table'] = 'field_data_field_asu_degree_cert';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['field'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['value'] = 'true';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['group'] = 1;
/* Filter criterion: Content: Department (field_asu_degree_department) */
$handler->display->display_options['filters']['field_asu_degree_department_value']['id'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['field'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator_id'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['label'] = 'Academic Unit';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['identifier'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_field'] = 'field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_dependent'] = 0;
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Pane L - Undergrad Degrees */
$handler = $view->new_display('panel_pane', 'Pane L - Undergrad Degrees', 'panel_pane_4');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clas-degrees-view clas-undergrad';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'field_degree_image' => 'field_degree_image',
  'field_asu_degree_awarded' => 'field_asu_degree_awarded',
  'body' => 'body',
  'field_asu_degree_campus' => 'field_asu_degree_campus',
  'php' => 'php',
  'field_asu_degree_department_code' => 'field_asu_degree_department_code',
  'field_asu_degree' => 'field_asu_degree',
  'field_asu_degree_department' => 'field_asu_degree_department',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_degree_image' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_awarded' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'body' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_campus' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_department_code' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_department' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 0,
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Degree Image */
$handler->display->display_options['fields']['field_degree_image']['id'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['table'] = 'field_data_field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['field'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['label'] = '';
$handler->display->display_options['fields']['field_degree_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_degree_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_degree_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_degree_image']['settings'] = array(
  'image_style' => 'clas_degree_image',
  'image_link' => '',
);
/* Field: Content: Degree Awarded */
$handler->display->display_options['fields']['field_asu_degree_awarded']['id'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['table'] = 'field_data_field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['field'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['label'] = 'Degree';
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['text'] = '<div class="asu-degree-major-title"><strong><a href="/node/[nid]">[field_asu_degree_awarded]</a></strong></div>';
$handler->display->display_options['fields']['field_asu_degree_awarded']['element_label_colon'] = FALSE;
/* Field: Content: Campus */
$handler->display->display_options['fields']['field_asu_degree_campus']['id'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['table'] = 'field_data_field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['field'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['label'] = 'Location';
$handler->display->display_options['fields']['field_asu_degree_campus']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_campus']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_offset'] = '0';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$v = count($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\']) - 1;
if ($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\'][$v][\'value\']== \'Online\') {
  echo \'Yes\';
}
else {
  echo \'No\';
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Department Code */
$handler->display->display_options['fields']['field_asu_degree_department_code']['id'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['table'] = 'field_data_field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['field'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department_code']['element_label_colon'] = FALSE;
/* Field: Content: Degree */
$handler->display->display_options['fields']['field_asu_degree']['id'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['table'] = 'field_data_field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['field'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['label'] = 'Type';
$handler->display->display_options['fields']['field_asu_degree']['alter']['text'] = '<div class="asu-degree-rewritten-fields">
    <div class="asu-degree-major-title"><strong>[field_asu_degree_awarded] ([field_asu_degree])</strong></div>
    [body]

    <!--<div class="asu-degree-field-title">Location:</div> [field_asu_degree_campus]<br>-->
    <!--<div class="asu-degree-field-title">Degree Type:</div> [field_asu_degree]<br>-->
    <!--<div class="asu-degree-field-title">Available Online:</div> [php] -->
    
</div>';
$handler->display->display_options['fields']['field_asu_degree']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = 'Description';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Department */
$handler->display->display_options['fields']['field_asu_degree_department']['id'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['field'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'asu_degree' => 'asu_degree',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Program: Undergrad or Graduate (field_asu_degree_program) */
$handler->display->display_options['filters']['field_asu_degree_program_value']['id'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['table'] = 'field_data_field_asu_degree_program';
$handler->display->display_options['filters']['field_asu_degree_program_value']['field'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['value'] = 'undergrad';
$handler->display->display_options['filters']['field_asu_degree_program_value']['group'] = 1;
/* Filter criterion: Content: Cert option: True or False (field_asu_degree_cert) */
$handler->display->display_options['filters']['field_asu_degree_cert_value']['id'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['table'] = 'field_data_field_asu_degree_cert';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['field'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['value'] = 'false';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['group'] = 1;
/* Filter criterion: Content: Department (field_asu_degree_department) */
$handler->display->display_options['filters']['field_asu_degree_department_value']['id'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['field'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator_id'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['label'] = 'Academic Unit';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['identifier'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_field'] = 'field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_dependent'] = 0;
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Pane L - Certs Minors */
$handler = $view->new_display('panel_pane', 'Pane L - Certs Minors', 'panel_pane_5');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clas-degrees-view clas-undergrad';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'field_degree_image' => 'field_degree_image',
  'field_asu_degree_awarded' => 'field_asu_degree_awarded',
  'body' => 'body',
  'field_asu_degree_campus' => 'field_asu_degree_campus',
  'php' => 'php',
  'field_asu_degree_department_code' => 'field_asu_degree_department_code',
  'field_asu_degree' => 'field_asu_degree',
  'field_asu_degree_department' => 'field_asu_degree_department',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_degree_image' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_awarded' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'body' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_campus' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_department_code' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_department' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 0,
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<div class="degree-switch-buttons">
<div class="btn-group">
<a class="btn btn-default" href="/degrees/undergrad/minor-certs"><i class="fa fa-th-large fa-lg"></i> Grid</a><a class="btn btn-default" href="/degrees/undergrad/minor-certs/list"><i class="fa fa-th-list fa-lg"></i> List</a>
</div>
</div>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Degree Image */
$handler->display->display_options['fields']['field_degree_image']['id'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['table'] = 'field_data_field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['field'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['label'] = '';
$handler->display->display_options['fields']['field_degree_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_degree_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_degree_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_degree_image']['settings'] = array(
  'image_style' => 'clas_degree_image',
  'image_link' => '',
);
/* Field: Content: Degree Awarded */
$handler->display->display_options['fields']['field_asu_degree_awarded']['id'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['table'] = 'field_data_field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['field'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['label'] = 'Degree';
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['text'] = '<div class="asu-degree-major-title"><strong><a href="/node/[nid]">[field_asu_degree_awarded]</a></strong></div>';
$handler->display->display_options['fields']['field_asu_degree_awarded']['element_label_colon'] = FALSE;
/* Field: Content: Campus */
$handler->display->display_options['fields']['field_asu_degree_campus']['id'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['table'] = 'field_data_field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['field'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['label'] = 'Location';
$handler->display->display_options['fields']['field_asu_degree_campus']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_campus']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_offset'] = '0';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$v = count($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\']) - 1;
if ($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\'][$v][\'value\']== \'Online\') {
  echo \'Yes\';
}
else {
  echo \'No\';
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Department Code */
$handler->display->display_options['fields']['field_asu_degree_department_code']['id'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['table'] = 'field_data_field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['field'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department_code']['element_label_colon'] = FALSE;
/* Field: Content: Degree */
$handler->display->display_options['fields']['field_asu_degree']['id'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['table'] = 'field_data_field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['field'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['label'] = 'Type';
$handler->display->display_options['fields']['field_asu_degree']['alter']['text'] = '<div class="asu-degree-rewritten-fields">
    <div class="asu-degree-major-title"><strong>[field_asu_degree_awarded] ([field_asu_degree])</strong></div>
    [body]

    <!--<div class="asu-degree-field-title">Location:</div> [field_asu_degree_campus]<br>-->
    <!--<div class="asu-degree-field-title">Degree Type:</div> [field_asu_degree]<br>-->
    <!--<div class="asu-degree-field-title">Available Online:</div> [php] -->
    
</div>';
$handler->display->display_options['fields']['field_asu_degree']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = 'Description';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Department */
$handler->display->display_options['fields']['field_asu_degree_department']['id'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['field'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'asu_degree' => 'asu_degree',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Program: Undergrad or Graduate (field_asu_degree_program) */
$handler->display->display_options['filters']['field_asu_degree_program_value']['id'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['table'] = 'field_data_field_asu_degree_program';
$handler->display->display_options['filters']['field_asu_degree_program_value']['field'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['value'] = 'undergrad';
$handler->display->display_options['filters']['field_asu_degree_program_value']['group'] = 1;
/* Filter criterion: Content: Cert option: True or False (field_asu_degree_cert) */
$handler->display->display_options['filters']['field_asu_degree_cert_value']['id'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['table'] = 'field_data_field_asu_degree_cert';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['field'] = 'field_asu_degree_cert_value';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['value'] = 'true';
$handler->display->display_options['filters']['field_asu_degree_cert_value']['group'] = 1;
/* Filter criterion: Content: Department (field_asu_degree_department) */
$handler->display->display_options['filters']['field_asu_degree_department_value']['id'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['field'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator_id'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['label'] = 'Academic Unit';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['identifier'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_field'] = 'field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_dependent'] = 0;
$handler->display->display_options['inherit_panels_path'] = '1';

/* Display: Pane L - Grad Degrees */
$handler = $view->new_display('panel_pane', 'Pane L - Grad Degrees', 'panel_pane_6');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clas-degrees-view clas-undergrad';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'field_degree_image' => 'field_degree_image',
  'field_asu_degree_awarded' => 'field_asu_degree_awarded',
  'body' => 'body',
  'field_asu_degree_campus' => 'field_asu_degree_campus',
  'php' => 'php',
  'field_asu_degree_department_code' => 'field_asu_degree_department_code',
  'field_asu_degree' => 'field_asu_degree',
  'field_asu_degree_department' => 'field_asu_degree_department',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_degree_image' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_awarded' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'body' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_campus' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_department_code' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_asu_degree_department' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 0,
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<div class="degree-switch-buttons">
<div class="btn-group">
<a class="btn btn-default" href="/degrees/grad"><i class="fa fa-th-large fa-lg"></i> Grid</a><a class="btn btn-default" href="/degrees/grad/list"><i class="fa fa-th-list fa-lg"></i> List</a>
</div>
</div>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Degree Image */
$handler->display->display_options['fields']['field_degree_image']['id'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['table'] = 'field_data_field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['field'] = 'field_degree_image';
$handler->display->display_options['fields']['field_degree_image']['label'] = '';
$handler->display->display_options['fields']['field_degree_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_degree_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_degree_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_degree_image']['settings'] = array(
  'image_style' => 'clas_degree_image',
  'image_link' => '',
);
/* Field: Content: Degree Awarded */
$handler->display->display_options['fields']['field_asu_degree_awarded']['id'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['table'] = 'field_data_field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['field'] = 'field_asu_degree_awarded';
$handler->display->display_options['fields']['field_asu_degree_awarded']['label'] = 'Degree';
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_awarded']['alter']['text'] = '<div class="asu-degree-major-title"><strong><a href="/node/[nid]">[field_asu_degree_awarded]</a></strong></div>';
$handler->display->display_options['fields']['field_asu_degree_awarded']['element_label_colon'] = FALSE;
/* Field: Content: Campus */
$handler->display->display_options['fields']['field_asu_degree_campus']['id'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['table'] = 'field_data_field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['field'] = 'field_asu_degree_campus';
$handler->display->display_options['fields']['field_asu_degree_campus']['label'] = 'Location';
$handler->display->display_options['fields']['field_asu_degree_campus']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_campus']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_asu_degree_campus']['delta_offset'] = '0';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['exclude'] = TRUE;
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$v = count($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\']) - 1;
if ($data->_field_data[\'nid\'][\'entity\']->field_asu_degree_campus[\'und\'][$v][\'value\']== \'Online\') {
  echo \'Yes\';
}
else {
  echo \'No\';
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Content: Department Code */
$handler->display->display_options['fields']['field_asu_degree_department_code']['id'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['table'] = 'field_data_field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['field'] = 'field_asu_degree_department_code';
$handler->display->display_options['fields']['field_asu_degree_department_code']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department_code']['element_label_colon'] = FALSE;
/* Field: Content: Degree */
$handler->display->display_options['fields']['field_asu_degree']['id'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['table'] = 'field_data_field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['field'] = 'field_asu_degree';
$handler->display->display_options['fields']['field_asu_degree']['label'] = 'Type';
$handler->display->display_options['fields']['field_asu_degree']['alter']['text'] = '<div class="asu-degree-rewritten-fields">
    <div class="asu-degree-major-title"><strong>[field_asu_degree_awarded] ([field_asu_degree])</strong></div>
    [body]

    <!--<div class="asu-degree-field-title">Location:</div> [field_asu_degree_campus]<br>-->
    <!--<div class="asu-degree-field-title">Degree Type:</div> [field_asu_degree]<br>-->
    <!--<div class="asu-degree-field-title">Available Online:</div> [php] -->
    
</div>';
$handler->display->display_options['fields']['field_asu_degree']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = 'Description';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '125';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
/* Field: Content: Department */
$handler->display->display_options['fields']['field_asu_degree_department']['id'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['field'] = 'field_asu_degree_department';
$handler->display->display_options['fields']['field_asu_degree_department']['label'] = '';
$handler->display->display_options['fields']['field_asu_degree_department']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_asu_degree_department']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'asu_degree' => 'asu_degree',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Program: Undergrad or Graduate (field_asu_degree_program) */
$handler->display->display_options['filters']['field_asu_degree_program_value']['id'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['table'] = 'field_data_field_asu_degree_program';
$handler->display->display_options['filters']['field_asu_degree_program_value']['field'] = 'field_asu_degree_program_value';
$handler->display->display_options['filters']['field_asu_degree_program_value']['value'] = 'grad';
$handler->display->display_options['filters']['field_asu_degree_program_value']['group'] = 1;
/* Filter criterion: Content: Department (field_asu_degree_department) */
$handler->display->display_options['filters']['field_asu_degree_department_value']['id'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['table'] = 'field_data_field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['field'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator_id'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['label'] = 'Academic Unit';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['operator'] = 'field_asu_degree_department_value_op';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['identifier'] = 'field_asu_degree_department_value';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_field'] = 'field_asu_degree_department';
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_asu_degree_department_value']['expose']['autocomplete_dependent'] = 0;
$handler->display->display_options['inherit_panels_path'] = '1';


	$views[$view->name] = $view;
	return $views;
}