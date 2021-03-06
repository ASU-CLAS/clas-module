<?php

$view = new view();
$view->name = 'research_areas';
$view->description = '';
$view->tag = 'asu_clas';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'ASU CLAS Research Areas';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Research Areas';
$handler->display->display_options['css_class'] = 'research-area-list-vertical';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Taxonomy term: Research Area Icon */
$handler->display->display_options['fields']['research_area_icon']['id'] = 'research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['table'] = 'field_data_research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['field'] = 'research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['label'] = '';
$handler->display->display_options['fields']['research_area_icon']['element_class'] = 'research-area-image';
$handler->display->display_options['fields']['research_area_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['research_area_icon']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['research_area_icon']['hide_empty'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h3';
$handler->display->display_options['fields']['name']['element_class'] = 'research-area-name';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_class'] = 'research-area-description';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'research_area' => 'research_area',
);
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent']['id'] = 'parent';
$handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent']['field'] = 'parent';

/* Display: Vertical List */
$handler = $view->new_display('panel_pane', 'Vertical List', 'research_area_list_vertical_pane');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Research Area Icon */
$handler->display->display_options['fields']['research_area_icon']['id'] = 'research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['table'] = 'field_data_research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['field'] = 'research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['label'] = '';
$handler->display->display_options['fields']['research_area_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['research_area_icon']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['research_area_icon']['settings'] = array(
  'image_style' => 'asu_clas_research_area_icon',
  'image_link' => '',
);
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h3';
$handler->display->display_options['fields']['name']['element_class'] = 'research-area-name';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_class'] = 'research-area-description';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;

/* Display: Vertical List Subcategories */
$handler = $view->new_display('panel_pane', 'Vertical List Subcategories', 'research_area_list_vertical_subcategories_pane');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Research Areas';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'research-area-list-vertical-subcategories';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h3';
$handler->display->display_options['fields']['name']['element_class'] = 'research-area-name';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Research Area Image */
$handler->display->display_options['fields']['research_area_image']['id'] = 'research_area_image';
$handler->display->display_options['fields']['research_area_image']['table'] = 'field_data_research_area_image';
$handler->display->display_options['fields']['research_area_image']['field'] = 'research_area_image';
$handler->display->display_options['fields']['research_area_image']['label'] = '';
$handler->display->display_options['fields']['research_area_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['research_area_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['research_area_image']['settings'] = array(
  'image_style' => 'asu_clas_research_area_image',
  'image_link' => '',
);
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_class'] = 'research-area-description';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'empty';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['parent']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['parent']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['parent']['validate_options']['vocabularies'] = array(
  'research_area' => 'research_area',
);
$handler->display->display_options['arguments']['parent']['validate_options']['type'] = 'tids';
$handler->display->display_options['arguments']['parent']['validate']['fail'] = 'empty';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'research_area' => 'research_area',
);
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent_1']['id'] = 'parent_1';
$handler->display->display_options['filters']['parent_1']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent_1']['field'] = 'parent';
$handler->display->display_options['filters']['parent_1']['operator'] = '!=';
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
  'parent' => array(
    'type' => 'user',
    'context' => 'entity:field_collection_item.uuid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Taxonomy term: Parent term',
  ),
);

/* Display: Horizontal Grid */
$handler = $view->new_display('panel_pane', 'Horizontal Grid', 'research_area_grid_horizontal_pane');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'research-area-grid-horizontal';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Research Area Icon */
$handler->display->display_options['fields']['research_area_icon']['id'] = 'research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['table'] = 'field_data_research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['field'] = 'research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['label'] = '';
$handler->display->display_options['fields']['research_area_icon']['element_class'] = 'research-area-image';
$handler->display->display_options['fields']['research_area_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['research_area_icon']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['research_area_icon']['hide_empty'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h3';
$handler->display->display_options['fields']['name']['element_class'] = 'research-area-name';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['exclude'] = TRUE;
$handler->display->display_options['fields']['description']['element_class'] = 'research-area-description';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;

/* Display: Horizontal Grid with Description */
$handler = $view->new_display('panel_pane', 'Horizontal Grid with Description', 'research_area_grid_horizontal_descriptions_pane');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'research-area-grid-horizontal research-area-grid-horizontal-descriptions';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['tid']['element_class'] = 'hide';
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Research Area iSearch Relationship */
$handler->display->display_options['fields']['research_area_isearch_relation']['id'] = 'research_area_isearch_relation';
$handler->display->display_options['fields']['research_area_isearch_relation']['table'] = 'field_data_research_area_isearch_relation';
$handler->display->display_options['fields']['research_area_isearch_relation']['field'] = 'research_area_isearch_relation';
$handler->display->display_options['fields']['research_area_isearch_relation']['label'] = '';
$handler->display->display_options['fields']['research_area_isearch_relation']['alter']['text'] = '[research_area_isearch_relation-target_id]';
$handler->display->display_options['fields']['research_area_isearch_relation']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['research_area_isearch_relation']['element_class'] = 'hide';
$handler->display->display_options['fields']['research_area_isearch_relation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['research_area_isearch_relation']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['research_area_isearch_relation']['type'] = 'entityreference_entity_id';
$handler->display->display_options['fields']['research_area_isearch_relation']['settings'] = array(
  'view_mode' => 'default',
  'links' => 0,
);
$handler->display->display_options['fields']['research_area_isearch_relation']['delta_offset'] = '0';
$handler->display->display_options['fields']['research_area_isearch_relation']['separator'] = '+';
/* Field: Taxonomy term: Research Area Icon */
$handler->display->display_options['fields']['research_area_icon']['id'] = 'research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['table'] = 'field_data_research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['field'] = 'research_area_icon';
$handler->display->display_options['fields']['research_area_icon']['label'] = '';
$handler->display->display_options['fields']['research_area_icon']['element_class'] = 'research-area-image';
$handler->display->display_options['fields']['research_area_icon']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['research_area_icon']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['research_area_icon']['hide_empty'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h3';
$handler->display->display_options['fields']['name']['element_class'] = 'research-area-name';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_class'] = 'research-area-description';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 0;
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 'title_override';
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;

/* Display: Nested Subcategories */
$handler = $view->new_display('panel_pane', 'Nested Subcategories', 'subcategories_embed');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'research-area-subcategories-embed';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_class'] = 'research-area-name';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['tid']['element_class'] = 'hide';
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Research Area iSearch Relationship */
$handler->display->display_options['fields']['research_area_isearch_relation']['id'] = 'research_area_isearch_relation';
$handler->display->display_options['fields']['research_area_isearch_relation']['table'] = 'field_data_research_area_isearch_relation';
$handler->display->display_options['fields']['research_area_isearch_relation']['field'] = 'research_area_isearch_relation';
$handler->display->display_options['fields']['research_area_isearch_relation']['label'] = '';
$handler->display->display_options['fields']['research_area_isearch_relation']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['research_area_isearch_relation']['alter']['text'] = '[research_area_isearch_relation-target_id]';
$handler->display->display_options['fields']['research_area_isearch_relation']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['research_area_isearch_relation']['element_class'] = 'hide';
$handler->display->display_options['fields']['research_area_isearch_relation']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['research_area_isearch_relation']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['research_area_isearch_relation']['delta_offset'] = '0';
$handler->display->display_options['fields']['research_area_isearch_relation']['separator'] = '+';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'empty';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['parent']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['parent']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['parent']['validate_options']['vocabularies'] = array(
  'research_area' => 'research_area',
);
$handler->display->display_options['arguments']['parent']['validate_options']['type'] = 'tids';
$handler->display->display_options['arguments']['parent']['validate']['fail'] = 'empty';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'research_area' => 'research_area',
);
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent_1']['id'] = 'parent_1';
$handler->display->display_options['filters']['parent_1']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent_1']['field'] = 'parent';
$handler->display->display_options['filters']['parent_1']['operator'] = '!=';
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
  'parent' => array(
    'type' => 'user',
    'context' => 'entity:field_collection_item.uuid',
    'context_optional' => 0,
    'panel' => '0',
    'fixed' => '',
    'label' => 'Taxonomy term: Parent term',
  ),
);
