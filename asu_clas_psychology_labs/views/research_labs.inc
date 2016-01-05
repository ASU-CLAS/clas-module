<?php

$view = new view();
$view->name = 'research_labs';
$view->description = '';
$view->tag = 'asu_clas';
$view->base_table = 'node';
$view->human_name = 'ASU CLAS Psychology Labs';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Research by Lab';
$handler->display->display_options['css_class'] = 'research-by-lab';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Previous';
$handler->display->display_options['pager']['options']['tags']['next'] = 'Next ›';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Research by Lab</h2>';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'lab_research_area' => 'lab_research_area',
  'asu_events_audience' => 0,
  'asu_events_category' => 0,
  'asu_events_type' => 0,
  'asu_news' => 0,
  'panopoly_categories' => 0,
  'isearch_departments' => 0,
  'isearch_expertise' => 0,
  'isearch_ranks' => 0,
  'research_area' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'div';
$handler->display->display_options['fields']['title']['element_class'] = 'research-lab-title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_type'] = 'div';
$handler->display->display_options['fields']['body']['element_class'] = 'research-lab-synopsis';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
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
  'lab' => 'lab',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Lab Research Area (field_lab_research_area) */
$handler->display->display_options['filters']['field_lab_research_area_tid']['id'] = 'field_lab_research_area_tid';
$handler->display->display_options['filters']['field_lab_research_area_tid']['table'] = 'field_data_field_lab_research_area';
$handler->display->display_options['filters']['field_lab_research_area_tid']['field'] = 'field_lab_research_area_tid';
$handler->display->display_options['filters']['field_lab_research_area_tid']['group'] = 1;
$handler->display->display_options['filters']['field_lab_research_area_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_lab_research_area_tid']['expose']['operator_id'] = 'field_lab_research_area_tid_op';
$handler->display->display_options['filters']['field_lab_research_area_tid']['expose']['operator'] = 'field_lab_research_area_tid_op';
$handler->display->display_options['filters']['field_lab_research_area_tid']['expose']['identifier'] = 'field_lab_research_area_tid';
$handler->display->display_options['filters']['field_lab_research_area_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_lab_research_area_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_lab_research_area_tid']['vocabulary'] = 'lab_research_area';
$handler->display->display_options['filters']['field_lab_research_area_tid']['hierarchy'] = 1;

/* Display: Research by Lab */
$handler = $view->new_display('panel_pane', 'Research by Lab', 'filter');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Previous';
$handler->display->display_options['pager']['options']['tags']['next'] = 'Next ›';
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;

/* Display: Lab List */
$handler = $view->new_display('panel_pane', 'Lab List', 'list');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'lab-list';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Previous';
$handler->display->display_options['pager']['options']['tags']['next'] = 'Next ›';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'row';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'lab-title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_type'] = 'div';
$handler->display->display_options['fields']['body']['element_class'] = 'lab-synopsis';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
/* Field: Content: Lab Image */
$handler->display->display_options['fields']['field_lab_image']['id'] = 'field_lab_image';
$handler->display->display_options['fields']['field_lab_image']['table'] = 'field_data_field_lab_image';
$handler->display->display_options['fields']['field_lab_image']['field'] = 'field_lab_image';
$handler->display->display_options['fields']['field_lab_image']['label'] = '';
$handler->display->display_options['fields']['field_lab_image']['element_class'] = 'lab-image';
$handler->display->display_options['fields']['field_lab_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_lab_image']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_lab_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_lab_image']['settings'] = array(
  'image_style' => 'asu_clas_research_area_image',
  'image_link' => '',
);
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
  'lab_research_area' => 'lab_research_area',
);
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
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
  'lab' => 'lab',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;
$handler->display->display_options['argument_input'] = array(
  'term_node_tid_depth' => array(
    'type' => 'user',
    'context' => 'entity:file.field_file_image_alt_text',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Lab Research Area (Term ID)',
  ),
);

/* Display: Research by Faculty Lab */
$handler = $view->new_display('panel_pane', 'Research by Faculty Lab', 'grid');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Research by Faculty';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'research-area-faculty-grid';
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Research by Faculty</h2>';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_lab_isearch_relationship_target_id']['id'] = 'field_lab_isearch_relationship_target_id';
$handler->display->display_options['relationships']['field_lab_isearch_relationship_target_id']['table'] = 'field_data_field_lab_isearch_relationship';
$handler->display->display_options['relationships']['field_lab_isearch_relationship_target_id']['field'] = 'field_lab_isearch_relationship_target_id';
$handler->display->display_options['relationships']['field_lab_isearch_relationship_target_id']['label'] = 'Lab Faculty Member';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Last Name */
$handler->display->display_options['fields']['field_isearch_lastname']['id'] = 'field_isearch_lastname';
$handler->display->display_options['fields']['field_isearch_lastname']['table'] = 'field_data_field_isearch_lastname';
$handler->display->display_options['fields']['field_isearch_lastname']['field'] = 'field_isearch_lastname';
$handler->display->display_options['fields']['field_isearch_lastname']['relationship'] = 'field_lab_isearch_relationship_target_id';
$handler->display->display_options['fields']['field_isearch_lastname']['label'] = '';
$handler->display->display_options['fields']['field_isearch_lastname']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_isearch_lastname']['element_label_colon'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path_1']['id'] = 'path_1';
$handler->display->display_options['fields']['path_1']['table'] = 'node';
$handler->display->display_options['fields']['path_1']['field'] = 'path';
$handler->display->display_options['fields']['path_1']['relationship'] = 'field_lab_isearch_relationship_target_id';
$handler->display->display_options['fields']['path_1']['label'] = '';
$handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_class'] = 'hide';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Display Name */
$handler->display->display_options['fields']['field_isearch_displayname']['id'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['table'] = 'field_data_field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['field'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['relationship'] = 'field_lab_isearch_relationship_target_id';
$handler->display->display_options['fields']['field_isearch_displayname']['label'] = '';
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_isearch_displayname']['element_class'] = 'research-faculty-name';
$handler->display->display_options['fields']['field_isearch_displayname']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_isearch_displayname']['element_default_classes'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Last Name (field_isearch_lastname) */
$handler->display->display_options['sorts']['field_isearch_lastname_value']['id'] = 'field_isearch_lastname_value';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['table'] = 'field_data_field_isearch_lastname';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['field'] = 'field_isearch_lastname_value';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['relationship'] = 'field_lab_isearch_relationship_target_id';
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
  'lab' => 'lab',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Lab Faculty Relationship (field_lab_isearch_relationship) */
$handler->display->display_options['filters']['field_lab_isearch_relationship_target_id']['id'] = 'field_lab_isearch_relationship_target_id';
$handler->display->display_options['filters']['field_lab_isearch_relationship_target_id']['table'] = 'field_data_field_lab_isearch_relationship';
$handler->display->display_options['filters']['field_lab_isearch_relationship_target_id']['field'] = 'field_lab_isearch_relationship_target_id';
$handler->display->display_options['filters']['field_lab_isearch_relationship_target_id']['operator'] = '!=';
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;
$handler->display->display_options['argument_input'] = array(
  'field_isearch_affil_empl_key_value' => array(
    'type' => 'none',
    'context' => 'entity:field_collection_item.uuid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Employee Type',
  ),
  'field_isearch_affil_dept_id_value_1' => array(
    'type' => 'none',
    'context' => 'entity:field_collection_item.uuid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Department ID',
  ),
  'field_isearch_affil_rank_tenure_value' => array(
    'type' => 'none',
    'context' => 'entity:field_collection_item.uuid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Field collection item: Rank Tenure (field_isearch_affil_rank_tenure)',
  ),
);
