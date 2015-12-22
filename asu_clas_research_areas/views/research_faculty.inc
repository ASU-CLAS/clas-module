<?php

$view = new view();
$view->name = 'research_faculty';
$view->description = '';
$view->tag = 'asu_clas';
$view->base_table = 'node';
$view->human_name = 'ASU CLAS Research Areas Faculty';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Research Faculty';
$handler->display->display_options['css_class'] = 'research-area-faculty-list';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['columns'] = array(
  'path' => 'path',
  'field_isearch_photo_url' => 'field_isearch_photo_url',
  'field_isearch_short_bio' => 'field_isearch_short_bio',
  'title' => 'title',
  'field_isearch_phone' => 'field_isearch_phone',
  'field_isearch_campus_building' => 'field_isearch_campus_building',
  'field_isearch_email' => 'field_isearch_email',
  'field_isearch_expertise_areas' => 'field_isearch_expertise_areas',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'path' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_isearch_photo_url' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_isearch_short_bio' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_isearch_phone' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_isearch_campus_building' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_isearch_email' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_isearch_expertise_areas' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<div class="views-row views-row-1 views-row-odd views-row-first row">
    <div class="views-field views-field-field-isearch-photo-url col-md-2 user-photo"></div>
    <div class="views-field views-field-nothing-1 col-md-4 user-name">
      <span class="field-content"><div class="name">Name</div></span>
    </div>
    <div class="views-field views-field-nothing col-md-3 user-contact">
      <span class="field-content"><div class="email">Contact</div></span>
    </div>
    <div class="views-field views-field-field-isearch-expertise-areas col-md-3 user-expertise">
      <span class="field-content"><div class="email">Expertise</div></span>
    </div>
</div>
';
/* Relationship: Content: Affiliations (field_isearch_affiliations) */
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['id'] = 'field_isearch_affiliations_value';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['table'] = 'field_data_field_isearch_affiliations';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['field'] = 'field_isearch_affiliations_value';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['label'] = 'Affiliation';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['delta'] = '-1';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['label'] = 'Expertise';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'isearch_expertise' => 'isearch_expertise',
  'asu_events_audience' => 0,
  'asu_events_category' => 0,
  'asu_events_type' => 0,
  'asu_news' => 0,
  'panopoly_categories' => 0,
  'isearch_departments' => 0,
  'isearch_ranks' => 0,
);
/* Relationship: Field collection item: Rank (field_isearch_affil_rank) */
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['id'] = 'field_isearch_affil_rank_tid';
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['table'] = 'field_data_field_isearch_affil_rank';
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['field'] = 'field_isearch_affil_rank_tid';
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['label'] = 'Affiliation Rank';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
$handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Profile Picture */
$handler->display->display_options['fields']['field_isearch_photo_url']['id'] = 'field_isearch_photo_url';
$handler->display->display_options['fields']['field_isearch_photo_url']['table'] = 'field_data_field_isearch_photo_url';
$handler->display->display_options['fields']['field_isearch_photo_url']['field'] = 'field_isearch_photo_url';
$handler->display->display_options['fields']['field_isearch_photo_url']['label'] = '';
$handler->display->display_options['fields']['field_isearch_photo_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_isearch_photo_url']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_isearch_photo_url']['element_wrapper_class'] = 'col-md-2';
$handler->display->display_options['fields']['field_isearch_photo_url']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_isearch_photo_url']['settings'] = array(
  'image_style' => 'asu_isearch_profile_list',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['title']['element_wrapper_class'] = 'col-md-4';
/* Field: Content: Phone */
$handler->display->display_options['fields']['field_isearch_phone']['id'] = 'field_isearch_phone';
$handler->display->display_options['fields']['field_isearch_phone']['table'] = 'field_data_field_isearch_phone';
$handler->display->display_options['fields']['field_isearch_phone']['field'] = 'field_isearch_phone';
$handler->display->display_options['fields']['field_isearch_phone']['label'] = '';
$handler->display->display_options['fields']['field_isearch_phone']['element_label_colon'] = FALSE;
/* Field: Content: Email */
$handler->display->display_options['fields']['field_isearch_email']['id'] = 'field_isearch_email';
$handler->display->display_options['fields']['field_isearch_email']['table'] = 'field_data_field_isearch_email';
$handler->display->display_options['fields']['field_isearch_email']['field'] = 'field_isearch_email';
$handler->display->display_options['fields']['field_isearch_email']['label'] = '';
$handler->display->display_options['fields']['field_isearch_email']['element_label_colon'] = FALSE;
/* Field: Content: Expertise Areas */
$handler->display->display_options['fields']['field_isearch_expertise_areas']['id'] = 'field_isearch_expertise_areas';
$handler->display->display_options['fields']['field_isearch_expertise_areas']['table'] = 'field_data_field_isearch_expertise_areas';
$handler->display->display_options['fields']['field_isearch_expertise_areas']['field'] = 'field_isearch_expertise_areas';
$handler->display->display_options['fields']['field_isearch_expertise_areas']['label'] = '';
$handler->display->display_options['fields']['field_isearch_expertise_areas']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_isearch_expertise_areas']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['field_isearch_expertise_areas']['element_wrapper_class'] = 'col-md-3';
$handler->display->display_options['fields']['field_isearch_expertise_areas']['delta_offset'] = '0';
/* Field: Content: Display Name */
$handler->display->display_options['fields']['field_isearch_displayname']['id'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['table'] = 'field_data_field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['field'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['label'] = '';
$handler->display->display_options['fields']['field_isearch_displayname']['element_label_colon'] = FALSE;
/* Sort criterion: Field collection item: Rank Tenure (field_isearch_affil_rank_tenure) */
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['id'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['table'] = 'field_data_field_isearch_affil_rank_tenure';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['field'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['relationship'] = 'field_isearch_affiliations_value';
/* Sort criterion: Field collection item: Rank Weight (field_isearch_affil_rank_weight) */
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['id'] = 'field_isearch_affil_rank_weight_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['table'] = 'field_data_field_isearch_affil_rank_weight';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['field'] = 'field_isearch_affil_rank_weight_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['expose']['label'] = 'Rank';
/* Sort criterion: Content: Last Name (field_isearch_lastname) */
$handler->display->display_options['sorts']['field_isearch_lastname_value']['id'] = 'field_isearch_lastname_value';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['table'] = 'field_data_field_isearch_lastname';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['field'] = 'field_isearch_lastname_value';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['expose']['label'] = 'Last Name';
/* Sort criterion: Content: First Name (field_isearch_firstname) */
$handler->display->display_options['sorts']['field_isearch_firstname_value']['id'] = 'field_isearch_firstname_value';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['table'] = 'field_data_field_isearch_firstname';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['field'] = 'field_isearch_firstname_value';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['expose']['label'] = 'First Name';
/* Contextual filter: Employee Type */
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['id'] = 'field_isearch_affil_empl_key_value';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['table'] = 'field_data_field_isearch_affil_empl_key';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['field'] = 'field_isearch_affil_empl_key_value';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['ui_name'] = 'Employee Type';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['limit'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['break_phrase'] = TRUE;
/* Contextual filter: Department ID */
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['id'] = 'field_isearch_affil_dept_id_value_1';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['table'] = 'field_data_field_isearch_affil_dept_id';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['field'] = 'field_isearch_affil_dept_id_value';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['ui_name'] = 'Department ID';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['limit'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['break_phrase'] = TRUE;
/* Contextual filter: Field collection item: Rank Tenure (field_isearch_affil_rank_tenure) */
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['id'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['table'] = 'field_data_field_isearch_affil_rank_tenure';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['field'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['summary_options']['items_per_page'] = '25';
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
  'asu_isearch_profile' => 'asu_isearch_profile',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field collection item: Employee Type (field_isearch_affil_empl_type) */
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['id'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['table'] = 'field_data_field_isearch_affil_empl_type';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['field'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['value'] = 'Faculty';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['group'] = 1;
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['operator_id'] = 'field_isearch_affil_empl_type_value_op';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['label'] = 'Employee Type';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['operator'] = 'field_isearch_affil_empl_type_value_op';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['identifier'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_dependent'] = 0;
/* Filter criterion: Content: Expertise Areas (field_isearch_expertise_areas) */
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['id'] = 'field_isearch_expertise_areas_tid';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['table'] = 'field_data_field_isearch_expertise_areas';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['field'] = 'field_isearch_expertise_areas_tid';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['value'] = '';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['group'] = 1;
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['expose']['operator_id'] = 'field_isearch_expertise_areas_tid_op';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['expose']['label'] = 'Expertise Area';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['expose']['operator'] = 'field_isearch_expertise_areas_tid_op';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['expose']['identifier'] = 'field_isearch_expertise_areas_tid';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['vocabulary'] = 'isearch_expertise';
$handler->display->display_options['filters']['field_isearch_expertise_areas_tid']['hierarchy'] = 1;

/* Display: Faculty Grid */
$handler = $view->new_display('panel_pane', 'Faculty Grid', 'grid');
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
$handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Research Faculty</h2>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Display Name */
$handler->display->display_options['fields']['field_isearch_displayname']['id'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['table'] = 'field_data_field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['field'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['label'] = '';
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_isearch_displayname']['element_class'] = 'research-faculty-name';
$handler->display->display_options['fields']['field_isearch_displayname']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_isearch_displayname']['element_default_classes'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field collection item: Rank Tenure (field_isearch_affil_rank_tenure) */
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['id'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['table'] = 'field_data_field_isearch_affil_rank_tenure';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['field'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['relationship'] = 'field_isearch_affiliations_value';
/* Sort criterion: Manager */
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['id'] = 'field_isearch_affil_manager_value';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['table'] = 'field_data_field_isearch_affil_manager';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['field'] = 'field_isearch_affil_manager_value';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['ui_name'] = 'Manager';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['order'] = 'DESC';
/* Sort criterion: Field collection item: Rank Weight (field_isearch_affil_rank_weight) */
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['id'] = 'field_isearch_affil_rank_weight_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['table'] = 'field_data_field_isearch_affil_rank_weight';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['field'] = 'field_isearch_affil_rank_weight_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['expose']['label'] = 'Rank';
/* Sort criterion: Content: Last Name (field_isearch_lastname) */
$handler->display->display_options['sorts']['field_isearch_lastname_value']['id'] = 'field_isearch_lastname_value';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['table'] = 'field_data_field_isearch_lastname';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['field'] = 'field_isearch_lastname_value';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['expose']['label'] = 'Last Name';
/* Sort criterion: Content: First Name (field_isearch_firstname) */
$handler->display->display_options['sorts']['field_isearch_firstname_value']['id'] = 'field_isearch_firstname_value';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['table'] = 'field_data_field_isearch_firstname';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['field'] = 'field_isearch_firstname_value';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['expose']['label'] = 'First Name';
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
  'asu_isearch_profile' => 'asu_isearch_profile',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field collection item: Employee Type (field_isearch_affil_empl_type) */
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['id'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['table'] = 'field_data_field_isearch_affil_empl_type';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['field'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['value'] = 'Faculty';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['operator_id'] = 'field_isearch_affil_empl_type_value_op';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['label'] = 'Employee Type (field_isearch_affil_empl_type)';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['operator'] = 'field_isearch_affil_empl_type_value_op';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['identifier'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_dependent'] = 0;
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

/* Display: Faculty List Expertise */
$handler = $view->new_display('panel_pane', 'Faculty List Expertise', 'expertise_list');
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'row';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Profile Picture */
$handler->display->display_options['fields']['field_isearch_photo_url']['id'] = 'field_isearch_photo_url';
$handler->display->display_options['fields']['field_isearch_photo_url']['table'] = 'field_data_field_isearch_photo_url';
$handler->display->display_options['fields']['field_isearch_photo_url']['field'] = 'field_isearch_photo_url';
$handler->display->display_options['fields']['field_isearch_photo_url']['label'] = '';
$handler->display->display_options['fields']['field_isearch_photo_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_isearch_photo_url']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_isearch_photo_url']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_isearch_photo_url']['settings'] = array(
  'image_style' => 'asu_isearch_profile_list',
  'image_link' => '',
);
/* Field: Content: Display Name */
$handler->display->display_options['fields']['field_isearch_displayname']['id'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['table'] = 'field_data_field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['field'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['label'] = '';
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_isearch_displayname']['element_label_colon'] = FALSE;
/* Field: Content: Employment Title */
$handler->display->display_options['fields']['field_isearch_employment_title']['id'] = 'field_isearch_employment_title';
$handler->display->display_options['fields']['field_isearch_employment_title']['table'] = 'field_data_field_isearch_employment_title';
$handler->display->display_options['fields']['field_isearch_employment_title']['field'] = 'field_isearch_employment_title';
$handler->display->display_options['fields']['field_isearch_employment_title']['label'] = '';
$handler->display->display_options['fields']['field_isearch_employment_title']['element_label_colon'] = FALSE;
/* Field: Content: Email */
$handler->display->display_options['fields']['field_isearch_email']['id'] = 'field_isearch_email';
$handler->display->display_options['fields']['field_isearch_email']['table'] = 'field_data_field_isearch_email';
$handler->display->display_options['fields']['field_isearch_email']['field'] = 'field_isearch_email';
$handler->display->display_options['fields']['field_isearch_email']['label'] = '';
$handler->display->display_options['fields']['field_isearch_email']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_isearch_email']['element_label_colon'] = FALSE;
/* Field: Content: Phone */
$handler->display->display_options['fields']['field_isearch_phone']['id'] = 'field_isearch_phone';
$handler->display->display_options['fields']['field_isearch_phone']['table'] = 'field_data_field_isearch_phone';
$handler->display->display_options['fields']['field_isearch_phone']['field'] = 'field_isearch_phone';
$handler->display->display_options['fields']['field_isearch_phone']['label'] = '';
$handler->display->display_options['fields']['field_isearch_phone']['element_label_colon'] = FALSE;
$handler->display->display_options['pane_category']['weight'] = '0';
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

/* Display: Faculty List Embed */
$handler = $view->new_display('panel_pane', 'Faculty List Embed', 'list_embed');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['wrapper_class'] = '';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
$handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
  'isearch_expertise' => 'isearch_expertise',
  'asu_events_audience' => 0,
  'asu_events_category' => 0,
  'asu_events_type' => 0,
  'asu_news' => 0,
  'panopoly_categories' => 0,
  'isearch_departments' => 0,
  'isearch_ranks' => 0,
  'research_area' => 0,
);
/* Relationship: Content: Affiliations (field_isearch_affiliations) */
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['id'] = 'field_isearch_affiliations_value';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['table'] = 'field_data_field_isearch_affiliations';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['field'] = 'field_isearch_affiliations_value';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['label'] = 'Affiliation';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['delta'] = '-1';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['label'] = 'Expertise';
$handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
  'isearch_expertise' => 'isearch_expertise',
  'asu_events_audience' => 0,
  'asu_events_category' => 0,
  'asu_events_type' => 0,
  'asu_news' => 0,
  'panopoly_categories' => 0,
  'isearch_departments' => 0,
  'isearch_ranks' => 0,
);
/* Relationship: Field collection item: Rank (field_isearch_affil_rank) */
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['id'] = 'field_isearch_affil_rank_tid';
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['table'] = 'field_data_field_isearch_affil_rank';
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['field'] = 'field_isearch_affil_rank_tid';
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['relationships']['field_isearch_affil_rank_tid']['label'] = 'Affiliation Rank';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Display Name */
$handler->display->display_options['fields']['field_isearch_displayname']['id'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['table'] = 'field_data_field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['field'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['label'] = '';
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['suffix'] = '<span class="delimiter">,</em>';
$handler->display->display_options['fields']['field_isearch_displayname']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_isearch_displayname']['element_default_classes'] = FALSE;
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
  'isearch_expertise' => 'isearch_expertise',
);
$handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
$handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
$handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
/* Contextual filter: Employee Type */
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['id'] = 'field_isearch_affil_empl_key_value';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['table'] = 'field_data_field_isearch_affil_empl_key';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['field'] = 'field_isearch_affil_empl_key_value';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['ui_name'] = 'Employee Type';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['limit'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_empl_key_value']['break_phrase'] = TRUE;
/* Contextual filter: Department ID */
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['id'] = 'field_isearch_affil_dept_id_value_1';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['table'] = 'field_data_field_isearch_affil_dept_id';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['field'] = 'field_isearch_affil_dept_id_value';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['ui_name'] = 'Department ID';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['limit'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_dept_id_value_1']['break_phrase'] = TRUE;
/* Contextual filter: Field collection item: Rank Tenure (field_isearch_affil_rank_tenure) */
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['id'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['table'] = 'field_data_field_isearch_affil_rank_tenure';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['field'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_isearch_affil_rank_tenure_value']['summary_options']['items_per_page'] = '25';
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
  'asu_isearch_profile' => 'asu_isearch_profile',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field collection item: Employee Type (field_isearch_affil_empl_type) */
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['id'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['table'] = 'field_data_field_isearch_affil_empl_type';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['field'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['value'] = 'Faculty';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['group'] = 1;
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['operator_id'] = 'field_isearch_affil_empl_type_value_op';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['label'] = 'Employee Type';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['operator'] = 'field_isearch_affil_empl_type_value_op';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['identifier'] = 'field_isearch_affil_empl_type_value';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
);
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_items'] = '10';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_min_chars'] = '0';
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_raw_suggestion'] = 1;
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_raw_dropdown'] = 1;
$handler->display->display_options['filters']['field_isearch_affil_empl_type_value']['expose']['autocomplete_dependent'] = 0;
