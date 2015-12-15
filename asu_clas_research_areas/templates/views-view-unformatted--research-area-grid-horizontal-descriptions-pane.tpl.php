<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<div class="row">
  <?php $i = 0; ?>

  <?php foreach ($rows as $id => $row): ?>
    <?php $i++; ?>

    <div class="col-md-6 research-area-term">
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    </div>

    <?php if ($i % 2 === 0): ?>
      </div><div class="row">
    <?php endif; ?>

  <?php endforeach; ?>
</div>
