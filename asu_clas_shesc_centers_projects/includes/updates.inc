<?php
/**
 * @file
 */

/**
 * Implements hook_update_N().
 */
function _asu_clas_shesc_centers_projects_update_7101() {
  // Add taxonomy for Research Centers.
  $taxonomy = (object) array(
    'description' => '',
    'hierarchy' => 1,
    'machine_name' => 'centers',
    'module' => 'taxonomy',
    'name' => 'Centers',
    'weight' => 0,
  );

  taxonomy_vocabulary_save($taxonomy);

  // Add term(s) to Research Centers vocabulary.
  $vocab = taxonomy_vocabulary_machine_name_load('centers');

  $terms = (object) array(
    'name' => 'Center for Bioarchaeological Research',
    'vid' => $vocab->vid,
  );

  taxonomy_term_save($terms);

  // Add field(s) to Center Projects content type.
  $fields = array(
    0 => array(
      'field_name' => 'center_project_relation',
      'label' => 'Center Project Relationship',
      'type' => 'entityreference',
      'module' => 'entityreference',
      'settings' => array(
        'target_type' => 'taxonomy_term',
        'handler' => 'base',
        'handler_settings' => array(
          'target_bundles' => array(
            'centers' => 'centers',
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'taxonomy_term_data' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'target_id' => 'tid',
          ),
        ),
      ),
    ),
  );

  foreach ($fields as $field) {
    field_create_field($field);
  }

  $instances = array(
    1 => array(
      'bundle' => 'center_project',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 2,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'center_project_relation',
      'label' => 'Center Project Relation',
      'required' => 0,
      'settings' => array(
        'behavior' => array(
          'taxonomy-index' => array(
            'status' => 1,
          ),
        ),
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 2,
      ),
    ),
  );

  foreach ($instances as $instance) {
    field_create_instance($instance);
  }
}
