<?php
// Plugin definition
$plugin = array(
  'title' => t('Cherokee Flipped'),
  'icon' => 'cherokeeflipped.png',
  'category' => t('Panopoly'),
  'theme' => 'cherokeeflipped',
  'css' => 'cherokeeflipped.css',
  'regions' => array(
    'header' => t('Header'),
    'slider' => t('Slider'),
    'slidergutter' => t('Slider Gutter'),
	'center' => t('Center'),
    'column1' => t('First Column'),
    'column2' => t('Second Column'),
    'column3' => t('Third Column'),
	'footer' => t('Footer'),
  ),
);
