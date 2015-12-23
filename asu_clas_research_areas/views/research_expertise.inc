<?php

$view = new view();
$view->name = 'asu_clas_research_area_expertise';
$view->description = '';
$view->tag = 'asu_clas';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'ASU CLAS Research Areas Expertise';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Faculty by Expertise';
$handler->display->display_options['css_class'] = 'faculty-expertise';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns'] = '2';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Faculty by Expertise</h2>';
/* Relationship: Taxonomy term: Content using Expertise Areas */
$handler->display->display_options['relationships']['reverse_field_isearch_expertise_areas_node']['id'] = 'reverse_field_isearch_expertise_areas_node';
$handler->display->display_options['relationships']['reverse_field_isearch_expertise_areas_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_isearch_expertise_areas_node']['field'] = 'reverse_field_isearch_expertise_areas_node';
$handler->display->display_options['relationships']['reverse_field_isearch_expertise_areas_node']['label'] = 'Expertise Area';
/* Relationship: Content: Affiliations (field_isearch_affiliations) */
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['id'] = 'field_isearch_affiliations_value';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['table'] = 'field_data_field_isearch_affiliations';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['field'] = 'field_isearch_affiliations_value';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['relationship'] = 'reverse_field_isearch_expertise_areas_node';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['label'] = 'Affiliation';
$handler->display->display_options['relationships']['field_isearch_affiliations_value']['delta'] = '-1';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'div';
$handler->display->display_options['fields']['name']['element_class'] = 'expertise-area';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_wrapper_class'] = 'expertise-area-wrapper';
$handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_isearch_expertise_areas_node';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Display Name */
$handler->display->display_options['fields']['field_isearch_displayname']['id'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['table'] = 'field_data_field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['field'] = 'field_isearch_displayname';
$handler->display->display_options['fields']['field_isearch_displayname']['relationship'] = 'reverse_field_isearch_expertise_areas_node';
$handler->display->display_options['fields']['field_isearch_displayname']['label'] = '';
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_isearch_displayname']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_isearch_displayname']['element_class'] = 'faculty-name';
$handler->display->display_options['fields']['field_isearch_displayname']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_isearch_displayname']['element_wrapper_class'] = 'faculty-name-wrapper collapse';
$handler->display->display_options['fields']['field_isearch_displayname']['element_default_classes'] = FALSE;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Sort criterion: Field collection item: Rank Tenure (field_isearch_affil_rank_tenure) */
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['id'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['table'] = 'field_data_field_isearch_affil_rank_tenure';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['field'] = 'field_isearch_affil_rank_tenure_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_tenure_value']['relationship'] = 'field_isearch_affiliations_value';
/* Sort criterion: Field collection item: Manager (field_isearch_affil_manager) */
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['id'] = 'field_isearch_affil_manager_value';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['table'] = 'field_data_field_isearch_affil_manager';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['field'] = 'field_isearch_affil_manager_value';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['relationship'] = 'field_isearch_affiliations_value';
$handler->display->display_options['sorts']['field_isearch_affil_manager_value']['order'] = 'DESC';
/* Sort criterion: Field collection item: Rank Weight (field_isearch_affil_rank_weight) */
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['id'] = 'field_isearch_affil_rank_weight_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['table'] = 'field_data_field_isearch_affil_rank_weight';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['field'] = 'field_isearch_affil_rank_weight_value';
$handler->display->display_options['sorts']['field_isearch_affil_rank_weight_value']['relationship'] = 'field_isearch_affiliations_value';
/* Sort criterion: Content: Last Name (field_isearch_lastname) */
$handler->display->display_options['sorts']['field_isearch_lastname_value']['id'] = 'field_isearch_lastname_value';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['table'] = 'field_data_field_isearch_lastname';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['field'] = 'field_isearch_lastname_value';
$handler->display->display_options['sorts']['field_isearch_lastname_value']['relationship'] = 'reverse_field_isearch_expertise_areas_node';
/* Sort criterion: Content: First Name (field_isearch_firstname) */
$handler->display->display_options['sorts']['field_isearch_firstname_value']['id'] = 'field_isearch_firstname_value';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['table'] = 'field_data_field_isearch_firstname';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['field'] = 'field_isearch_firstname_value';
$handler->display->display_options['sorts']['field_isearch_firstname_value']['relationship'] = 'reverse_field_isearch_expertise_areas_node';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'isearch_expertise' => 'isearch_expertise',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;

/* Display: Faculty by Expertise */
$handler = $view->new_display('panel_pane', 'Faculty by Expertise', 'faculty_expertise');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'isearch_expertise' => 'isearch_expertise',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;
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
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;
