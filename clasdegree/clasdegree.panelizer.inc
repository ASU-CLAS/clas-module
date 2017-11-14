<?php
/**
 * @file
 * clasdegree.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function clasdegree_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'clas_degree';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:clas_degree:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_brenham';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'toprow1' => NULL,
      'postheaderrow1' => NULL,
      'toprow1b' => NULL,
      'toprow2col1' => NULL,
      'toprow2col2' => NULL,
      'toprow3col1' => NULL,
      'toprow3col2' => NULL,
      'toprow4col1' => NULL,
      'toprow4col2' => NULL,
      'toprow5col1' => NULL,
      'toprow5col2' => NULL,
      'toprow5col3' => NULL,
      'toprow5b' => NULL,
      'toprow6' => NULL,
      'middlerow1' => NULL,
      'middlerow1b' => NULL,
      'middlerow2col1' => NULL,
      'middlerow2col2' => NULL,
      'middlerow3col1' => NULL,
      'middlerow3col2' => NULL,
      'middlerow4col1' => NULL,
      'middlerow4col2' => NULL,
      'middlerow5col1' => NULL,
      'middlerow5col2' => NULL,
      'middlerow5col3' => NULL,
      'middlerow5b' => NULL,
      'middlerow6' => NULL,
      'bottomrow1' => NULL,
      'bottomrow1b' => NULL,
      'bottomrow2col1' => NULL,
      'bottomrow2col2' => NULL,
      'bottomrow3col1' => NULL,
      'bottomrow3col2' => NULL,
      'bottomrow4col1' => NULL,
      'bottomrow4col2' => NULL,
      'bottomrow5col1' => NULL,
      'bottomrow5col2' => NULL,
      'bottomrow5col3' => NULL,
      'bottomrow5b' => NULL,
      'bottomrow6' => NULL,
      'prefooterrow1' => NULL,
    ),
    'toprow1' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0d6277ab-ccd7-4b58-8e0f-728623535506';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:clas_degree:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-48d9396c-183e-404b-973c-b05f0dbac1a1';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '48d9396c-183e-404b-973c-b05f0dbac1a1';
  $display->content['new-48d9396c-183e-404b-973c-b05f0dbac1a1'] = $pane;
  $display->panels['contentmain'][0] = 'new-48d9396c-183e-404b-973c-b05f0dbac1a1';
  $pane = new stdClass();
  $pane->pid = 'new-b2154e62-8454-4be2-a792-e0fad4d69128';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_key_stats';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'field_collection_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'edit' => 'Edit',
      'delete' => 'Delete',
      'add' => 'Add',
      'description' => TRUE,
      'view_mode' => 'full',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b2154e62-8454-4be2-a792-e0fad4d69128';
  $display->content['new-b2154e62-8454-4be2-a792-e0fad4d69128'] = $pane;
  $display->panels['contentmain'][1] = 'new-b2154e62-8454-4be2-a792-e0fad4d69128';
  $pane = new stdClass();
  $pane->pid = 'new-6abd9c3b-256d-4d49-b4dc-83d739e75bcb';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_requirements';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6abd9c3b-256d-4d49-b4dc-83d739e75bcb';
  $display->content['new-6abd9c3b-256d-4d49-b4dc-83d739e75bcb'] = $pane;
  $display->panels['contentmain'][2] = 'new-6abd9c3b-256d-4d49-b4dc-83d739e75bcb';
  $pane = new stdClass();
  $pane->pid = 'new-0af64f2f-c32b-4dc6-8fd3-3ce9b3fbaaa2';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_how_to_apply';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0af64f2f-c32b-4dc6-8fd3-3ce9b3fbaaa2';
  $display->content['new-0af64f2f-c32b-4dc6-8fd3-3ce9b3fbaaa2'] = $pane;
  $display->panels['contentmain'][3] = 'new-0af64f2f-c32b-4dc6-8fd3-3ce9b3fbaaa2';
  $pane = new stdClass();
  $pane->pid = 'new-c1c9ecdc-dbee-4ded-8490-3d6a4b6cfa8c';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_one_marketing_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'field_collection_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'edit' => 'Edit',
      'delete' => 'Delete',
      'add' => 'Add',
      'description' => TRUE,
      'view_mode' => 'full',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c1c9ecdc-dbee-4ded-8490-3d6a4b6cfa8c';
  $display->content['new-c1c9ecdc-dbee-4ded-8490-3d6a4b6cfa8c'] = $pane;
  $display->panels['contentmain'][4] = 'new-c1c9ecdc-dbee-4ded-8490-3d6a4b6cfa8c';
  $pane = new stdClass();
  $pane->pid = 'new-4e1344c7-845a-42d0-b3a0-2d147dd627e0';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_quote';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4e1344c7-845a-42d0-b3a0-2d147dd627e0';
  $display->content['new-4e1344c7-845a-42d0-b3a0-2d147dd627e0'] = $pane;
  $display->panels['contentmain'][5] = 'new-4e1344c7-845a-42d0-b3a0-2d147dd627e0';
  $pane = new stdClass();
  $pane->pid = 'new-d49d3615-dd71-491c-84e5-79d0a0e473ab';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_curriculum';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd49d3615-dd71-491c-84e5-79d0a0e473ab';
  $display->content['new-d49d3615-dd71-491c-84e5-79d0a0e473ab'] = $pane;
  $display->panels['contentmain'][6] = 'new-d49d3615-dd71-491c-84e5-79d0a0e473ab';
  $pane = new stdClass();
  $pane->pid = 'new-5393e454-dce9-4a52-becc-19b1b06fedbe';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_courses_and_electives';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '5393e454-dce9-4a52-becc-19b1b06fedbe';
  $display->content['new-5393e454-dce9-4a52-becc-19b1b06fedbe'] = $pane;
  $display->panels['contentmain'][7] = 'new-5393e454-dce9-4a52-becc-19b1b06fedbe';
  $pane = new stdClass();
  $pane->pid = 'new-7d714a6a-bf2b-4383-b13f-b9a28bed51fd';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_marketing_numbers';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'field_collection_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'edit' => 'Edit',
      'delete' => 'Delete',
      'add' => 'Add',
      'description' => TRUE,
      'view_mode' => 'full',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '7d714a6a-bf2b-4383-b13f-b9a28bed51fd';
  $display->content['new-7d714a6a-bf2b-4383-b13f-b9a28bed51fd'] = $pane;
  $display->panels['contentmain'][8] = 'new-7d714a6a-bf2b-4383-b13f-b9a28bed51fd';
  $pane = new stdClass();
  $pane->pid = 'new-ab979b48-08d9-46d6-8617-4ecab23c3504';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_additional_degree_infor';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'ab979b48-08d9-46d6-8617-4ecab23c3504';
  $display->content['new-ab979b48-08d9-46d6-8617-4ecab23c3504'] = $pane;
  $display->panels['contentmain'][9] = 'new-ab979b48-08d9-46d6-8617-4ecab23c3504';
  $pane = new stdClass();
  $pane->pid = 'new-16e43181-07e9-4aa5-919d-0ba5986fa0fa';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'CLAS Degree RFI Block',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '16e43181-07e9-4aa5-919d-0ba5986fa0fa';
  $display->content['new-16e43181-07e9-4aa5-919d-0ba5986fa0fa'] = $pane;
  $display->panels['contentmain'][10] = 'new-16e43181-07e9-4aa5-919d-0ba5986fa0fa';
  $pane = new stdClass();
  $pane->pid = 'new-e5641573-9114-4354-bac8-7beed663650f';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'CLAS Degree Tabs Block',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'e5641573-9114-4354-bac8-7beed663650f';
  $display->content['new-e5641573-9114-4354-bac8-7beed663650f'] = $pane;
  $display->panels['contentmain'][11] = 'new-e5641573-9114-4354-bac8-7beed663650f';
  $pane = new stdClass();
  $pane->pid = 'new-091922e8-c2cd-4377-a2e7-79a738e3f817';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_banner_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_full',
      'image_link' => '',
      'file_view_mode' => 'responsive_image',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '091922e8-c2cd-4377-a2e7-79a738e3f817';
  $display->content['new-091922e8-c2cd-4377-a2e7-79a738e3f817'] = $pane;
  $display->panels['header'][0] = 'new-091922e8-c2cd-4377-a2e7-79a738e3f817';
  $pane = new stdClass();
  $pane->pid = 'new-759e3812-7365-42fd-875b-da45899431c3';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_student_handbook';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'file_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '759e3812-7365-42fd-875b-da45899431c3';
  $display->content['new-759e3812-7365-42fd-875b-da45899431c3'] = $pane;
  $display->panels['sidebar'][0] = 'new-759e3812-7365-42fd-875b-da45899431c3';
  $pane = new stdClass();
  $pane->pid = 'new-7deab57d-1474-44ae-acbe-2216374c122d';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'CLAS Degree Student Handbook Block',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7deab57d-1474-44ae-acbe-2216374c122d';
  $display->content['new-7deab57d-1474-44ae-acbe-2216374c122d'] = $pane;
  $display->panels['sidebar'][1] = 'new-7deab57d-1474-44ae-acbe-2216374c122d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:clas_degree:default'] = $panelizer;

  return $export;
}
