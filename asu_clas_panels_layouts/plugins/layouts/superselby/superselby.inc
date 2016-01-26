<?php
// Plugin definition
$plugin = array(
  'title' => t('Super Selby'),
  'icon' => 'superselby.png',
  'category' => t('Panopoly'),
  'theme' => 'superselby',
  'css' => 'superselby.css',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Sidebar'),
    'contentheader' => t('Content Header'),
    'contentcolumn1' => t('Content Column 1'),
    'contentcolumn2' => t('Content Column 2'),
    'contentfooter' => t('Content Footer'),
	'footer' => t('Footer'),
  ),
);
