<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<div class="col-md-2">
  <?php if (isset($fields['field_isearch_photo_url'])): ?>
    <?php print $fields['field_isearch_photo_url']->content; ?>
  <?php else: ?>
    <?php print theme_image(array('path' => drupal_get_path('module', 'asu_clas_research_areas') . '/images/placeholder-200x200.png', 'width' => 116, 'height' => 116)); ?>
  <?php endif; ?>
</div>

<div class="col-md-10">
  <?php if (isset($fields['field_isearch_displayname'])): ?>
    <?php print $fields['field_isearch_displayname']->content; ?>
  <?php endif; ?>

  <?php if (isset($fields['field_isearch_employment_title'])): ?>
    <?php print $fields['field_isearch_employment_title']->content; ?>
  <?php endif; ?>

  <?php if (isset($fields['field_isearch_phone'])): ?>
    <?php print $fields['field_isearch_phone']->content; ?>
  <?php endif; ?>

  <?php if (isset($fields['field_isearch_email'])): ?>
    <?php print $fields['field_isearch_email']->content; ?>
  <?php endif; ?>
</div>
