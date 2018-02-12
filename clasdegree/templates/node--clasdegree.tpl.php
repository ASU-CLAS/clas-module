<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>

<?php // if ($node->type == 'clas_degree' && $view_mode == 'full'): ?>
<?php if ($node->type == 'clas_degree'): ?>

  <div class="container">

    <div class="row">

      <div class="col-sm-4">

          <?php
            $region = block_get_blocks_by_region('clas_degree_left_side_content');
            print render($region);
          ?>

          <?php if($node->field_apply_now_link) { ?>
            <p class="btn btn-gold btn-block"><a href="<?php print $node->field_apply_now_link['und'][0]['url']; ?>">Apply Now</a></p>
          <?php } ?>
          <?php if($node->field_request_information_link) { ?>
            <p class="btn btn-gold btn-block"><a href="<?php print $node->field_request_information_link['und'][0]['url']; ?>">Request Information</a></p>
          <?php } ?>
          <?php if($node->field_cd_student_handbook) { ?>
            <p class="btn btn-primary btn-block"><a href="/sites/default/files/<?php print $node->field_cd_student_handbook['und'][0]['filename']; ?>">Student Handbook</a></p>
          <?php } ?>

      </div>

      <div class="col-sm-8">

        <?php if($node->field_cd_marketing_description) { ?>
        <!-- <h5>Marketing description</h5> -->
        <div class="clas-degree-main-description"><p><?php print $node->field_cd_marketing_description['und'][0]['value']; ?></p></div>
        <?php } ?>

        <!-- <h5>Key stats</h5> -->
        <?php

          if (isset($node->field_cd_key_stats['und'][0]['value'])) {
            $cd_key_stats_id=$node->field_cd_key_stats['und'][0]['value'];
            $cd_key_stats_entity = entity_load_single('field_collection_item',$cd_key_stats_id);
          }

          if (isset($cd_key_stats_entity->field_cd_icon_1['und'][0]['safe_value'])) {
              $cd_icon_1 = $cd_key_stats_entity->field_cd_icon_1['und'][0]['safe_value'];
          }
          if (isset($cd_key_stats_entity->field_cd_label_1['und'][0]['safe_value'])) {
              $cd_label_1 = $cd_key_stats_entity->field_cd_label_1['und'][0]['safe_value'];
          }

          if (isset($cd_key_stats_entity->field_cd_icon_2['und'][0]['safe_value'])) {
              $cd_icon_2 = $cd_key_stats_entity->field_cd_icon_2['und'][0]['safe_value'];
          }
          if (isset($cd_key_stats_entity->field_cd_label_2['und'][0]['safe_value'])) {
              $cd_label_2 = $cd_key_stats_entity->field_cd_label_2['und'][0]['safe_value'];
          }

          if (isset($cd_key_stats_entity->field_cd_icon_3['und'][0]['safe_value'])) {
              $cd_icon_3 = $cd_key_stats_entity->field_cd_icon_3['und'][0]['safe_value'];
          }
          if (isset($cd_key_stats_entity->field_cd_label_3['und'][0]['safe_value'])) {
              $cd_label_3 = $cd_key_stats_entity->field_cd_label_3['und'][0]['safe_value'];
          }
        ?>
        <?php if(isset($cd_icon_1)) { ?>
        <p>
          <div class="row key-stats">
            <div class="col-md-4">
              <div class="key-stats-icon">
                <i class="fa <?php print $cd_icon_1; ?> fa-2x" aria-hidden="true"></i>
              </div>
              <div class="key-stats-label">
                <?php print $cd_label_1; ?>
              </div>
            </div>
            <div class="col-md-4">
              <div class="key-stats-icon">
                <i class="fa <?php print $cd_icon_2; ?> fa-2x" aria-hidden="true"></i>
              </div>
              <div class="key-stats-label">
                <?php print $cd_label_2; ?>
              </div>
            </div>
            <div class="col-md-4">
              <div class="key-stats-icon">
                <i class="fa <?php print $cd_icon_3; ?> fa-2x" aria-hidden="true"></i>
              </div>
              <div class="key-stats-label">
                <?php print $cd_label_3; ?>
              </div>
            </div>
          </div>
        </p>
        <?php } ?>

        <?php if($node->field_cd_description) { ?>
        <!-- <h5>Degree description</h5> -->
        <div class="clas-degree-main-description"><p><?php print $node->field_cd_description['und'][0]['value']; ?></p></div>
        <?php } ?>

        <?php if($node->field_concentrations) { ?>
        <h5>Concentrations</h5>
        <p><?php print $node->field_concentrations['und'][0]['value']; ?></p>
        <?php } ?>

        <?php if($node->field_cd_how_to_apply) { ?>
        <h5>How to apply</h5>
        <p><?php print $node->field_cd_how_to_apply['und'][0]['value']; ?></p>
        <?php } ?>

        <?php

          if (isset($node->field_cd_one_marketing_number['und'][0]['value'])) {
            $cd_one_marketing_number_id=$node->field_cd_one_marketing_number['und'][0]['value'];
            $cd_one_marketing_number_entity = entity_load_single('field_collection_item',$cd_one_marketing_number_id);
          }

          if (isset($cd_one_marketing_number_entity->field_cd_number['und'][0]['safe_value'])) {
              $cd_one_number = $cd_one_marketing_number_entity->field_cd_number['und'][0]['safe_value'];
          }
          if (isset($cd_one_marketing_number_entity->field_cd_description_one['und'][0]['safe_value'])) {
              $cd_one_number_description = $cd_one_marketing_number_entity->field_cd_description_one['und'][0]['safe_value'];
          }
        ?>
        <?php if(isset($cd_one_number)) { ?>
        <!-- <h5>One marketing number</h5> -->
        <p>
          <div class="row one-marketing-number panel panel-default">
            <div class="col-md-3 one-marketing-number-number"><?php print $cd_one_number; ?></div>
            <div class="col-md-9 one-marketing-number-description"><?php print $cd_one_number_description; ?></div>
          </div>
        </p>
        <?php } ?>

        <?php if($node->field_cd_quote) { ?>
        <!-- <h5>Quote</h5> -->
        <p class="blockquote-text-margin">
          <div class="row marketing-quote panel panel-default">
            <div class="col-md-12 marketing-quote-text">
              <blockquote>
                <?php print $node->field_cd_quote['und'][0]['safe_value']; ?>
              </blockquote>
            </div>
          </div>
        </p>
        <?php } ?>

        <?php if($node->field_video) { ?>
        <!-- <h5>Video</h5> -->
        <p>
          <div class="clas-degree-video-responsive">
            <?php print $node->field_video['und'][0]['value']; ?>
          </div>
        </p>
        <?php } ?>

        <?php if($node->field_cd_curriculum) { ?>
        <h5>Curriculum</h5>
        <p><?php print $node->field_cd_curriculum['und'][0]['value']; ?></p>
        <?php } ?>

        <?php if($node->field_cd_courses_and_electives) { ?>
        <h5>Courses and electives</h5>
        <p><?php print $node->field_cd_courses_and_electives['und'][0]['value']; ?></p>
        <?php } ?>

        <?php if(field_get_items('node', $node, 'field_accordion_section')) { ?>
        <!-- <h5>Accordion Section</h5> -->
            <?php
               $items = field_get_items('node', $node, 'field_accordion_section');
               $i = 0;
               foreach ($items as $item) {
                 if ($i == 0) {
                   print '<div class="panel-group" id="accordion" role="tablist" aria-multiselectable="true">';

                     print '<div class="panel panel-default">';

                       print '<div class="panel-heading" role="tab" id="heading'.$i.'"><h4 class="panel-title"><a role="button" data-toggle="collapse" data-parent="#accordion" href="#collapse'.$i.'" aria-expanded="true" aria-controls="collapse'.$i.'">'.$node->field_accordion_section['und'][$i]['summary'].'</a></h4></div>';

                       print '<div id="collapse'.$i.'" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading'.$i.'"><div class="panel-body">'.$node->field_accordion_section['und'][$i]['safe_value'].'</div></div>';

                     print '</div>';

                   print '</div>';
                 } else {
                   print '<div class="panel-group" id="accordion" role="tablist" aria-multiselectable="true">';

                     print '<div class="panel panel-default">';

                       print '<div class="panel-heading" role="tab" id="heading'.$i.'"><h4 class="panel-title"><a role="button" data-toggle="collapse" data-parent="#accordion" href="#collapse'.$i.'" aria-expanded="true" aria-controls="collapse'.$i.'">'.$node->field_accordion_section['und'][$i]['summary'].'</a></h4></div>';

                       print '<div id="collapse'.$i.'" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading'.$i.'"><div class="panel-body">'.$node->field_accordion_section['und'][$i]['safe_value'].'</div></div>';

                     print '</div>';

                   print '</div>';
                 }
                $i++;
               }
            ?>
        <?php } ?>

        <?php

          if (isset($node->field_cd_marketing_numbers['und'][0]['value'])) {
            $cd_marketing_numbers_id=$node->field_cd_marketing_numbers['und'][0]['value'];
            $cd_marketing_numbers_entity = entity_load_single('field_collection_item',$cd_marketing_numbers_id);
          }

          if (isset($cd_marketing_numbers_entity->field_cd_first_marketing_number['und'][0]['safe_value'])) {
              $cd_first_marketing_number = $cd_marketing_numbers_entity->field_cd_first_marketing_number['und'][0]['safe_value'];
          }
          if (isset($cd_marketing_numbers_entity->field_cd_first_marketing_label['und'][0]['safe_value'])) {
              $cd_first_marketing_label = $cd_marketing_numbers_entity->field_cd_first_marketing_label['und'][0]['safe_value'];
          }
          if (isset($cd_marketing_numbers_entity->field_cd_second_marketing_number['und'][0]['safe_value'])) {
              $cd_second_marketing_number = $cd_marketing_numbers_entity->field_cd_second_marketing_number['und'][0]['safe_value'];
          }
          if (isset($cd_marketing_numbers_entity->field_cd_second_marketing_label['und'][0]['safe_value'])) {
              $cd_second_marketing_label = $cd_marketing_numbers_entity->field_cd_second_marketing_label['und'][0]['safe_value'];
          }
          if (isset($cd_marketing_numbers_entity->field_cd_third_marketing_number['und'][0]['safe_value'])) {
              $cd_third_marketing_number = $cd_marketing_numbers_entity->field_cd_third_marketing_number['und'][0]['safe_value'];
          }
          if (isset($cd_marketing_numbers_entity->field_cd_third_marketing_label['und'][0]['safe_value'])) {
              $cd_third_marketing_label = $cd_marketing_numbers_entity->field_cd_third_marketing_label['und'][0]['safe_value'];
          }
        ?>
        <?php if(isset($cd_first_marketing_number)) { ?>
        <!-- <h5>Marketing numbers</h5> -->
        <p>
          <div class="row marketing-numbers">
            <div class="col-md-4 marketing-numbers-container">
              <div class="marketing-number-number">
                <?php print $cd_first_marketing_number; ?>
              </div>
              <div class="marketing-number-label">
                <?php print $cd_first_marketing_label; ?>
              </div>
            </div>
            <div class="col-md-4 marketing-numbers-container">
              <div class="marketing-number-number">
                <?php print $cd_second_marketing_number; ?>
              </div>
              <div class="marketing-number-label">
                <?php print $cd_second_marketing_label; ?>
              </div>
            </div>
            <div class="col-md-4 marketing-numbers-container">
              <div class="marketing-number-number">
                <?php print $cd_third_marketing_number; ?>
              </div>
              <div class="marketing-number-label">
                <?php print $cd_third_marketing_label; ?>
              </div>
            </div>
          </div>
        </p>
        <?php } ?>

        <?php if(field_get_items('node', $node, 'field_carousel_text')) { ?>
        <!-- <h5>Carousel</h5> -->
        <div id="text-carousel" class="carousel slide carousel-container" data-ride="carousel">
          <div class="row">
              <div class="col-xs-offset-3 col-xs-6">
                  <div class="carousel-inner">

                    <?php
                       $items = field_get_items('node', $node, 'field_carousel_text');
                       $i = 0;
                      foreach ($items as $item) {
                        if ($i == 0) {
                          print '<div class="item active"><div class="carousel-content">'.$node->field_carousel_text['und'][$i]['safe_value'].'</div></div>';
                        } else {
                            print '<div class="item"><div class="carousel-content">'.$node->field_carousel_text['und'][$i]['safe_value'].'</div></div>';
                        }
                       $i++;
                      }
                    ?>

                  </div>
              </div>
          </div>
          <a class="left carousel-control" href="#text-carousel" data-slide="prev">
           <span class="glyphicon glyphicon-chevron-left"></span>
          </a>
          <a class="right carousel-control" href="#text-carousel" data-slide="next">
           <span class="glyphicon glyphicon-chevron-right"></span>
          </a>
        </div>
        <?php } ?>

        <?php if($node->field_cd_additional_degree_infor) { ?>
        <!-- <h5>Additional degree information</h5> -->
        <p><?php print $node->field_cd_additional_degree_infor['und'][0]['value']; ?></p>
        <?php } ?>

        <!-- RFI BLOCK and TABS BLOCK BELOW -->
        <div id="RFI"></div>
        <?php
          $region = block_get_blocks_by_region('clas_degree_main_content');
          print render($region);
        ?>

      </div>

    </div>
  </div>

<?php endif; ?>
