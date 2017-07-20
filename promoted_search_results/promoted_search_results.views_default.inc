<?php
/**
 * @file
 * promoted_search_results.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function promoted_search_results_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'promoted_search_result';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Promoted Search Result';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
.promotedResult{
display:inline-block;
display:none;
background-color: #f1f1f1;
padding: 25px;
}

.promotedGA {
    padding: 5px 12px;
    display: none;
    background-color: #f1f1f1;
    /* width: 220px; */
    text-align: left;
    color: #535353;
    border-bottom-left-radius: 3px;
    border-bottom-right-radius: 3px;
    font-style:italic;
}
.fa:hover{
     color:#ffc627;
     cursor: pointer;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<br>
<script>
jQuery( document ).ready(function() {
    jQuery(".search-option").prependTo("#block-views-promoted-search-result-block");
    jQuery(".promotedResult").show();

setTimeout( function(){ 
    jQuery( ".promotedGA" ).slideDown( "slow" ); 
  }  , 1000 );

//GA events
 var searchTerm = jQuery("#edit-search-keys").val();

jQuery( ".fa-thumbs-up" ).click(function() {
     console.log(\'thumbs up \' + searchTerm);
     ga(\'send\', \'event\',  \'clas-promoted-search\', \'thumbsUp\', searchTerm);
     jQuery( ".promotedGA" ).fadeOut( "slow" );
});

jQuery( ".fa-thumbs-down" ).click(function() {
     console.log(\'thumbs down \' + searchTerm);
     ga(\'send\', \'event\',  \'clas-promoted-search\', \'thumbsDown\', searchTerm);
     jQuery( ".promotedGA" ).fadeOut( "slow" );
});
   
});
</script>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="promotedResult">[body]</div>
<span class="promotedGA">Was this helpful?&nbsp;&nbsp;&nbsp;&nbsp;  
   <i class="fa fa-thumbs-up"></i>&nbsp;&nbsp;&nbsp; 
   <i class="fa fa-thumbs-down"></i>
</span>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Search Terms */
  $handler->display->display_options['fields']['field_search_terms']['id'] = 'field_search_terms';
  $handler->display->display_options['fields']['field_search_terms']['table'] = 'field_data_field_search_terms';
  $handler->display->display_options['fields']['field_search_terms']['field'] = 'field_search_terms';
  $handler->display->display_options['fields']['field_search_terms']['label'] = '';
  $handler->display->display_options['fields']['field_search_terms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_search_terms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_search_terms']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Search Terms (field_search_terms) */
  $handler->display->display_options['arguments']['field_search_terms_value']['id'] = 'field_search_terms_value';
  $handler->display->display_options['arguments']['field_search_terms_value']['table'] = 'field_data_field_search_terms';
  $handler->display->display_options['arguments']['field_search_terms_value']['field'] = 'field_search_terms_value';
  $handler->display->display_options['arguments']['field_search_terms_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_search_terms_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_search_terms_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_search_terms_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_search_terms_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_search_terms_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_search_terms_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_search_terms_value']['case'] = 'lower';
  $handler->display->display_options['arguments']['field_search_terms_value']['path_case'] = 'lower';
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
    'promoted_search_result' => 'promoted_search_result',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['promoted_search_result'] = $view;

  return $export;
}
