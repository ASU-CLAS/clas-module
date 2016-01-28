<?php
/**
 * @file
 */

/**
 * Delete content type.
 */
function _asu_clas_shesc_research_topics_delete_content_type() {
  $types = array(
    'research_topic',
  );

  foreach($types as $type) {
    node_type_delete($type);
  }

  node_types_rebuild();

  menu_rebuild();
}

/**
 * Delete custom fields.
 */
function _asu_clas_shesc_research_topics_delete_custom_fields() {
  $fields = array(
    'research_topic_description',
    'research_topic_image',
    'research_topic_relation',
  );

  foreach ($fields as $field) {
    field_delete_field($field);
    field_purge_batch(1);
  }
}

/**
 * Delete Views.
 */
function _asu_clas_shesc_research_topics_delete_views() {
  $views = array(
    'research_topics',
  );

  foreach ($views as $view) {
    if ($view = views_get_view($view)) {
      views_delete_view($view);
    }
  }
}
