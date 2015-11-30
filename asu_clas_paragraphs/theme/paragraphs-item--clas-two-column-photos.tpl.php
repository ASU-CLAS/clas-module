<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

//-- Title

/*$field_paragraph_title = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_paragraph_title');
$field_paragraph_title = $field_paragraph_title[0]['value'];*/

?>

<!-- <div class="wrap-two-column-photos">

	<div class="col-md-6 text-center">
		TITLE<br />
		TEXT<br />
		CTA
	</div>

	<div class="col-md-6 text-center">
		TITLE<br />
		TEXT<br />
		CTA
	</div>

</div> -->


<div class="container-fluid">
  <div class="row">
      <div class="col-sm-12">
          <div class="container">
              <div class="row">
                  <div class="col-sm-6">
                      <p>Nunc congue, enim nec faucibus rutrum, orci magna bibendum odio, nec euismod lectus neque at felis. Vestibulum lectus arcu, aliquet vel vulputate sed, aliquet convallis massa. Aenean urna ante, pretium in pellentesque at, posuere vitae urna. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Donec in ipsum urna, id aliquet erat. Aliquam id nisi eu nunc pulvinar faucibus quis quis erat. Aliquam placerat auctor lectus, sit amet consectetur ipsum lacinia sit amet.</p>
                      <p>Duis vulputate bibendum elementum. Phasellus eu sodales ligula. Vivamus at justo mauris, id pretium libero. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas hendrerit dolor sit amet urna lacinia porttitor. Integer sed gravida turpis. Etiam varius nulla nulla, volutpat porta risus. Nullam sollicitudin augue posuere nisl sollicitudin ultrices. Morbi dignissim mauris varius orci placerat luctus. Aliquam et risus nulla, ac tincidunt augue. Integer interdum convallis nibh. Maecenas porttitor, leo at sollicitudin posuere, neque sem porttitor odio, et convallis sem massa id dolor. Sed molestie justo id lacus luctus vel commodo sem vestibulum. Vestibulum venenatis risus quis dui consectetur tempus. Suspendisse ultricies turpis sed odio laoreet imperdiet vel ac erat. In mattis enim ut orci tincidunt condimentum.</p>
                  </div>
                  <div class="col-sm-6">
                      <p>Phasellus non nibh ante, a elementum quam. Donec cursus fringilla dui et iaculis. Aenean rhoncus erat accumsan orci mollis vitae malesuada metus euismod. Maecenas aliquet leo et dui venenatis pulvinar sit amet id mi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Sed non purus sed tellus vehicula ullamcorper. Curabitur in nisi faucibus enim rutrum placerat. Morbi consequat, magna at convallis tempus, eros ante cursus neque, quis fermentum quam est a est. Mauris non arcu nulla. Vestibulum facilisis pulvinar augue nec egestas. In iaculis diam in libero facilisis eu rutrum arcu elementum. Phasellus viverra porttitor interdum. Donec vel elit vel erat sollicitudin sollicitudin.</p>
                      <p>Ut libero turpis, tristique et euismod quis, feugiat eu lorem. Nulla facilisi. Donec nec cursus nisi. Suspendisse tempor egestas rutrum. Pellentesque ac velit eget nisl auctor tincidunt in at risus. Integer lacinia neque vel lacus ornare vehicula suscipit dolor suscipit. Nunc quam diam, consequat pulvinar egestas quis, congue ac lacus. Donec pharetra posuere lacus, eget egestas est feugiat vel. Fusce orci dolor, lacinia aliquet mollis quis, posuere at diam. Curabitur non nibh massa, elementum luctus dolor. Curabitur elit odio, elementum sit amet placerat ac, ullamcorper sagittis purus. Integer odio dolor, scelerisque nec hendrerit non, laoreet ut augue. Curabitur lorem odio, lacinia ac placerat in, condimentum a velit.</p>
                  </div>
              </div>
          </div>
      </div>
  </div>
</div>

<!-- <div id="wrap-two-column-photos">

<div class="center-container-two-column-photos">

	<div class="center-row-two-column-photos">
	  <div class="col-xs-6 bg-one-two-column-photos text-center"><h2>Hello</h2></div>
	  <div class="col-xs-6 bg-two-two-column-photos text-center"><h2>World</h2></div>
	</div>

</div>

</div> -->