<?php
/**
 * @file
 */
$plugin = array(
  'title' => t('ASU CLAS Branding'),
  'description' => t('Branding for ASU CLAS Webspark themed sites.'),
  'render region' => 'asu_clas_branding_render_region',
  'render pane' => 'asu_clas_branding_render_pane',
  'settings form' => 'asu_clas_branding_pane_settings_form',
  'pane settings form' => 'asu_clas_branding_pane_settings_form',
  'weight' => 100,
);

/**
 * Theme fuction for the region style.
 */
function theme_asu_clas_branding_render_region($vars) {
  $content = $vars['panes'];
  $settings = $vars['settings'];

  $settings['attributes'] = '';
  foreach ($settings as $key=>$param) {
    $settings['attributes'] .= ' ' . $param;
  }

  if (!empty($settings['theme']) && $settings['theme']) {
    $output = theme('panels_default_style_render_region', $vars);
  }
  else {
    $output = implode(PHP_EOL, $content);
  }

  if (!empty($output)) {
    $content_wrapper = _asu_clas_panels_styles_wrapper_wrap($settings);

    $output = $content_wrapper['prefix'] . $output . $content_wrapper['suffix'];
  }

  return $output;
}

/**
 * Theme function for the pane style.
 */
function theme_asu_clas_branding_render_pane($vars) {
  $content = &$vars['content'];
  $settings = $vars['settings'];

  if (!isset($content->css_class)) {
    $content->css_class = '';
  }

  foreach ($settings as $key=>$param) {
    $content->css_class .= ' ' . $param;
  }

  $output = theme('panels_pane', $vars);

  return $output;
}

/**
 * Options for the Panels style plugin to help style panes.
 */
function asu_clas_branding_pane_settings_form($style_settings) {
   $bgcolors_default_value = isset($style_settings['bgcolors']) ? $style_settings['bgcolors'] : '';

   $bgcolor_options = array(
      ''                         => t('None'),
      'pane-background-black'    => t('Black (#000)'),
      'pane-background-white'    => t('White (#fff)'),
      'pane-background-midnight' => t('Midnight (#2a2a2a)'),
      'pane-background-gray'     => t('Gray (#f1f1f1)'),
      'pane-background-charcoal' => t('Charcoal (#353535)'),
      'pane-background-gold'     => t('Gold (#ffb30f)'),
    );

    $form['bgcolors'] = array(
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
      '#type' => 'radios',
      '#title' => t('Background Color:'),
      '#description' => t('Note: The background color will be applied to the entire row that contains this pane or region.'),
      '#required' => FALSE,
      '#options' => $bgcolor_options,
      '#default_value' => $bgcolors_default_value,
    );

    $well_default_value = isset($style_settings['well_style']) ? $style_settings['well_style'] : '';

    $form['well_style'] = array(
      '#prefix' => '<div class="well">',
      '#suffix' => '</div>',
      '#type'   => 'radios',
      '#title'  => t('Well Style:'),
      '#description' => t('Note: Renders pane as a well.'),
      '#options' => array(
        '' => t('None'),
        'pane-well pane-well-basic' => t('Basic'),
      ),
      '#default_value' => $well_default_value,
    );

  return $form;
}
