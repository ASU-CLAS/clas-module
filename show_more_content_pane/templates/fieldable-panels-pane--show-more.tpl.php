<?php $rand1 = mt_rand(); ?>
<div data-link-id="<?php print $rand1; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<?php print render($elements['title']); ?>
  <?php print render($title_suffix); ?>
  <?php print render($content); ?>
<div class="show-more-button-wrapper"><div data-link-id="<?php print $rand1; ?>" class="show-more-button btn btn-secondary">Show More</div></div>
</div>
