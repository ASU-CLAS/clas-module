<?php
/**
 * @file
 * clasdegree.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function clasdegree_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_aa7b7da8-9beb-46a8-9bbf-93f24a965240';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'CLAS Degree',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'clas_degree' => 'clas_degree',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'header' => array(),
    ),
    'header' => array(
      'style' => 'customstyles',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd213731f-c160-44fd-b4dd-97029e4ba864';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_aa7b7da8-9beb-46a8-9bbf-93f24a965240';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-84b69c43-5fd7-4955-9b2f-652ff2572f69';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '84b69c43-5fd7-4955-9b2f-652ff2572f69';
  $display->content['new-84b69c43-5fd7-4955-9b2f-652ff2572f69'] = $pane;
  $display->panels['contentmain'][0] = 'new-84b69c43-5fd7-4955-9b2f-652ff2572f69';
  $pane = new stdClass();
  $pane->pid = 'new-ea8a8438-f5c3-4817-aab6-ae06ba5aadbc';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_key_stats';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = 'ea8a8438-f5c3-4817-aab6-ae06ba5aadbc';
  $display->content['new-ea8a8438-f5c3-4817-aab6-ae06ba5aadbc'] = $pane;
  $display->panels['contentmain'][1] = 'new-ea8a8438-f5c3-4817-aab6-ae06ba5aadbc';
  $pane = new stdClass();
  $pane->pid = 'new-bf2dfeac-bb66-48cd-84cb-792a2e167435';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_one_marketing_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bf2dfeac-bb66-48cd-84cb-792a2e167435';
  $display->content['new-bf2dfeac-bb66-48cd-84cb-792a2e167435'] = $pane;
  $display->panels['contentmain'][2] = 'new-bf2dfeac-bb66-48cd-84cb-792a2e167435';
  $pane = new stdClass();
  $pane->pid = 'new-a5d802de-a923-46ce-ba1f-6da66383df17';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_marketing_numbers';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'full',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a5d802de-a923-46ce-ba1f-6da66383df17';
  $display->content['new-a5d802de-a923-46ce-ba1f-6da66383df17'] = $pane;
  $display->panels['contentmain'][3] = 'new-a5d802de-a923-46ce-ba1f-6da66383df17';
  $pane = new stdClass();
  $pane->pid = 'new-ea8ab624-2d46-4cb2-95ea-569a38bf877c';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_quote';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ea8ab624-2d46-4cb2-95ea-569a38bf877c';
  $display->content['new-ea8ab624-2d46-4cb2-95ea-569a38bf877c'] = $pane;
  $display->panels['contentmain'][4] = 'new-ea8ab624-2d46-4cb2-95ea-569a38bf877c';
  $pane = new stdClass();
  $pane->pid = 'new-38204404-dd40-4d3b-a4a2-d88e019a2058';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_requirements';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => 'Degree requirements',
    'override_title_heading' => 'h5',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '38204404-dd40-4d3b-a4a2-d88e019a2058';
  $display->content['new-38204404-dd40-4d3b-a4a2-d88e019a2058'] = $pane;
  $display->panels['contentmain'][5] = 'new-38204404-dd40-4d3b-a4a2-d88e019a2058';
  $pane = new stdClass();
  $pane->pid = 'new-8841eb55-7d95-4409-af46-4d0ea6667442';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_how_to_apply';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => 'How to apply',
    'override_title_heading' => 'h5',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '8841eb55-7d95-4409-af46-4d0ea6667442';
  $display->content['new-8841eb55-7d95-4409-af46-4d0ea6667442'] = $pane;
  $display->panels['contentmain'][6] = 'new-8841eb55-7d95-4409-af46-4d0ea6667442';
  $pane = new stdClass();
  $pane->pid = 'new-354d3f06-2082-43b9-b070-47a6c36b7c92';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_curriculum';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => 'Curriculum',
    'override_title_heading' => 'h5',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '354d3f06-2082-43b9-b070-47a6c36b7c92';
  $display->content['new-354d3f06-2082-43b9-b070-47a6c36b7c92'] = $pane;
  $display->panels['contentmain'][7] = 'new-354d3f06-2082-43b9-b070-47a6c36b7c92';
  $pane = new stdClass();
  $pane->pid = 'new-0e812543-f944-479c-af9f-dc5fcc1e36cd';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_courses_and_electives';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => 'Courses and electives',
    'override_title_heading' => 'h5',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '0e812543-f944-479c-af9f-dc5fcc1e36cd';
  $display->content['new-0e812543-f944-479c-af9f-dc5fcc1e36cd'] = $pane;
  $display->panels['contentmain'][8] = 'new-0e812543-f944-479c-af9f-dc5fcc1e36cd';
  $pane = new stdClass();
  $pane->pid = 'new-438788e5-35f0-4dd2-90eb-081fac6ca09a';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_additional_degree_infor';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 1,
    'override_title_text' => 'Additional details',
    'override_title_heading' => 'h5',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '438788e5-35f0-4dd2-90eb-081fac6ca09a';
  $display->content['new-438788e5-35f0-4dd2-90eb-081fac6ca09a'] = $pane;
  $display->panels['contentmain'][9] = 'new-438788e5-35f0-4dd2-90eb-081fac6ca09a';
  $pane = new stdClass();
  $pane->pid = 'new-959ba4c9-efd9-4c4b-9558-f6899cd79de6';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Request information',
    'override_title_heading' => 'h5',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '959ba4c9-efd9-4c4b-9558-f6899cd79de6';
  $display->content['new-959ba4c9-efd9-4c4b-9558-f6899cd79de6'] = $pane;
  $display->panels['contentmain'][10] = 'new-959ba4c9-efd9-4c4b-9558-f6899cd79de6';
  $pane = new stdClass();
  $pane->pid = 'new-b6710c88-0670-4703-a536-cc41b358dbfe';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
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
  $pane->uuid = 'b6710c88-0670-4703-a536-cc41b358dbfe';
  $display->content['new-b6710c88-0670-4703-a536-cc41b358dbfe'] = $pane;
  $display->panels['contentmain'][11] = 'new-b6710c88-0670-4703-a536-cc41b358dbfe';
  $pane = new stdClass();
  $pane->pid = 'new-f48b5b0f-272f-402e-bf94-568e6cf5ead5';
  $pane->panel = 'header';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_banner_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_half',
      'image_link' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f48b5b0f-272f-402e-bf94-568e6cf5ead5';
  $display->content['new-f48b5b0f-272f-402e-bf94-568e6cf5ead5'] = $pane;
  $display->panels['header'][0] = 'new-f48b5b0f-272f-402e-bf94-568e6cf5ead5';
  $pane = new stdClass();
  $pane->pid = 'new-4872261e-d012-4079-81eb-6b3d0fb53b86';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4872261e-d012-4079-81eb-6b3d0fb53b86';
  $display->content['new-4872261e-d012-4079-81eb-6b3d0fb53b86'] = $pane;
  $display->panels['sidebar'][0] = 'new-4872261e-d012-4079-81eb-6b3d0fb53b86';
  $pane = new stdClass();
  $pane->pid = 'new-c2cd42dc-4802-458a-848c-e0fced0e61a5';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cd_student_handbook';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_url_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = 'c2cd42dc-4802-458a-848c-e0fced0e61a5';
  $display->content['new-c2cd42dc-4802-458a-848c-e0fced0e61a5'] = $pane;
  $display->panels['sidebar'][1] = 'new-c2cd42dc-4802-458a-848c-e0fced0e61a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-84b69c43-5fd7-4955-9b2f-652ff2572f69';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_aa7b7da8-9beb-46a8-9bbf-93f24a965240'] = $handler;

  return $export;
}
