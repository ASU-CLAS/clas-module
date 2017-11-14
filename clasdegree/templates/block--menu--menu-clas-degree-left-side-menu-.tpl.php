<?php

/**
 * @file
 * Default theme implementation to display a block.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: An ID for the block, unique within each module.
 * - $block->region: The block region embedding the current block.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - block: The current template type, i.e., "theming hook".
 *   - block-[module]: The module generating the block. For example, the user
 *     module is responsible for handling the default user navigation block. In
 *     that case the class would be 'block-user'.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $block_html_id: A valid HTML ID and guaranteed unique.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<?php // dpm($variables); ?>
<?php
  if ( arg(0) == 'node' && is_numeric(arg(1)) && ! arg(2) ) {
    $node = node_load(arg(1));
    // Do something with the node
    $ourNodeID = $node->nid;
    $ourNodeTitle = $node->title;
    // dpm($ourNodeID);
  }

  // node path
  $node_path = 'node/'.$ourNodeID;

  // node alias
  $node_alias = drupal_get_path_alias($node_path);

  $menu = '';
  $menuItems = menu_tree_page_data('menu-clas-degree-left-side-menu-');
  // dpm($menuItems);
  foreach($menuItems as $key => $m) {
     if ($m['link']['in_active_trail'] && $menuItems[$key]['below']) {
        //  $menu = render(menu_tree_output($menuItems[$key]['below']));
         $menu = menu_tree_output($menuItems[$key]['below']);
     }
  }
  // dpm($menu);

?>

<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <div class="content">

    <ul class="menu clearfix">

      <li class="first expanded active-trail"><a href="/<?php print $node_alias; ?>" title="" class="active-trail active"><?php print $ourNodeTitle; ?></a>
        <ul class="menu clearfix">

          <?php
          foreach ($menu as $key => $value) {
            if (is_numeric($key)) {
              echo "<li class='leaf'><a href='{$value['#href']}' title='{$value['#title']}'>{$value['#title']}</a></li>";
            }
          }
          ?>

        </ul>
      </li>

    </ul>

  </div>

</div>
