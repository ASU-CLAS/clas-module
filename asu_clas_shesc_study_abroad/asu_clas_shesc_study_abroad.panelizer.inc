<?php
/**
 * @file
 * asu_clas_shesc_study_abroad.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function asu_clas_shesc_study_abroad_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:study_abroad_program:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'study_abroad_program';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'mosconeplus';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'header' => array(),
      'sidebar' => array(),
      'contentmain' => NULL,
      'footer' => array(),
      'rowthree' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'rowone' => array(
        'bgcolors' => '',
        'padtop' => '',
        'padbot' => '',
        'martop' => 'add-margin-42-above',
        'marbot' => '',
      ),
      'rowtwo' => NULL,
    ),
    'rowthree' => array(
      'style' => 'tabs',
    ),
    'rowone' => array(
      'style' => 'customstyles',
    ),
    'style' => 'customstyles',
    'header' => array(
      'style' => 'customstyles',
    ),
    'sidebar' => array(
      'style' => 'customstyles',
    ),
    'rowtwo' => array(
      'style' => '0',
    ),
    'footer' => array(
      'style' => 'customstyles',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '38fc5fb8-9d97-4ff4-8846-0097714989f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65fed6f3-2a72-4288-a361-1b89ee10ac65';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'customstyles',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '65fed6f3-2a72-4288-a361-1b89ee10ac65';
    $display->content['new-65fed6f3-2a72-4288-a361-1b89ee10ac65'] = $pane;
    $display->panels['header'][0] = 'new-65fed6f3-2a72-4288-a361-1b89ee10ac65';
    $pane = new stdClass();
    $pane->pid = 'new-3bbc728e-682e-4ad7-b2ae-4f3fac20cf34';
    $pane->panel = 'rowone';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
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
    $pane->uuid = '3bbc728e-682e-4ad7-b2ae-4f3fac20cf34';
    $display->content['new-3bbc728e-682e-4ad7-b2ae-4f3fac20cf34'] = $pane;
    $display->panels['rowone'][0] = 'new-3bbc728e-682e-4ad7-b2ae-4f3fac20cf34';
    $pane = new stdClass();
    $pane->pid = 'new-57809cfc-186d-487f-b618-f7c1a8ec1c66';
    $pane->panel = 'rowthree';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_study_abroad_experience';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Experience',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'customstyles',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57809cfc-186d-487f-b618-f7c1a8ec1c66';
    $display->content['new-57809cfc-186d-487f-b618-f7c1a8ec1c66'] = $pane;
    $display->panels['rowthree'][0] = 'new-57809cfc-186d-487f-b618-f7c1a8ec1c66';
    $pane = new stdClass();
    $pane->pid = 'new-a4761de4-0aed-4f4a-84b3-1c32b322f08a';
    $pane->panel = 'rowthree';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_study_abroad_details';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Cost & Eligibility',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'customstyles',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a4761de4-0aed-4f4a-84b3-1c32b322f08a';
    $display->content['new-a4761de4-0aed-4f4a-84b3-1c32b322f08a'] = $pane;
    $display->panels['rowthree'][1] = 'new-a4761de4-0aed-4f4a-84b3-1c32b322f08a';
    $pane = new stdClass();
    $pane->pid = 'new-9726360f-2bfb-49dd-ab33-9ec16334974d';
    $pane->panel = 'rowtwo';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '9726360f-2bfb-49dd-ab33-9ec16334974d';
    $display->content['new-9726360f-2bfb-49dd-ab33-9ec16334974d'] = $pane;
    $display->panels['rowtwo'][0] = 'new-9726360f-2bfb-49dd-ab33-9ec16334974d';
    $pane = new stdClass();
    $pane->pid = 'new-ad860674-8820-4b8c-b373-a36d6d098316';
    $pane->panel = 'sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 1519,
      'parent' => 'main-menu:1519',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'customstyles',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ad860674-8820-4b8c-b373-a36d6d098316';
    $display->content['new-ad860674-8820-4b8c-b373-a36d6d098316'] = $pane;
    $display->panels['sidebar'][0] = 'new-ad860674-8820-4b8c-b373-a36d6d098316';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:study_abroad_program:default'] = $panelizer;

  return $export;
}
