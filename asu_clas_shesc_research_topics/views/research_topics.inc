<?php

$view = new view();
$view->name = 'research_topics';
$view->description = '';
$view->tag = 'asu_clas';
$view->base_table = 'node';
$view->human_name = 'ASU CLAS SHESC Research Topics';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'research-topic-list';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'research_area' => 'research_area',
  'asu_events_audience' => 0,
  'asu_events_category' => 0,
  'asu_events_type' => 0,
  'asu_news' => 0,
  'panopoly_categories' => 0,
  'isearch_departments' => 0,
  'isearch_expertise' => 0,
  'isearch_local_tags' => 0,
  'isearch_ranks' => 0,
);
/* Field: Content: Research Topic Image */
$handler->display->display_options['fields']['research_topic_image']['id'] = 'research_topic_image';
$handler->display->display_options['fields']['research_topic_image']['table'] = 'field_data_research_topic_image';
$handler->display->display_options['fields']['research_topic_image']['field'] = 'research_topic_image';
$handler->display->display_options['fields']['research_topic_image']['label'] = '';
$handler->display->display_options['fields']['research_topic_image']['element_class'] = 'research-topic-image';
$handler->display->display_options['fields']['research_topic_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['research_topic_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['research_topic_image']['settings'] = array(
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
$handler->display->display_options['fields']['title']['element_class'] = 'research-topic-name';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Research Topic Description */
$handler->display->display_options['fields']['research_topic_description']['id'] = 'research_topic_description';
$handler->display->display_options['fields']['research_topic_description']['table'] = 'field_data_research_topic_description';
$handler->display->display_options['fields']['research_topic_description']['field'] = 'research_topic_description';
$handler->display->display_options['fields']['research_topic_description']['label'] = '';
$handler->display->display_options['fields']['research_topic_description']['element_class'] = 'research-topic-description';
$handler->display->display_options['fields']['research_topic_description']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Has taxonomy term ID (with depth) */
$handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
$handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
  'research_area' => 'research_area',
);
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
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
  'research_topic' => 'research_topic',
);
/* Filter criterion: Content: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['label'] = 'Research Area';
$handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
$handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
$handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['tid']['type'] = 'select';
$handler->display->display_options['filters']['tid']['vocabulary'] = 'research_area';
$handler->display->display_options['filters']['tid']['hierarchy'] = 1;

/* Display: Content pane */
$handler = $view->new_display('panel_pane', 'Content pane', 'research_topics_list');
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
$handler->display->display_options['allow']['fields_override'] = 0;
$handler->display->display_options['argument_input'] = array(
  'term_node_tid_depth' => array(
    'type' => 'context',
    'context' => 'terms.name_dashed',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Content: Has taxonomy term ID (with depth)',
  ),
);
