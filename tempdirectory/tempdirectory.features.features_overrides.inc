<?php
/**
 * @file
 * tempdirectory.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function tempdirectory_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-3b1211d8-63be-4e95-9565-4d0a80e31593|panel"] = 'toprow4col2';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-3b1211d8-63be-4e95-9565-4d0a80e31593|position"] = 6;
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-437932a2-27c7-4e3e-a4cd-65571a51b7a1|panel"] = 'toprow4col2';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-437932a2-27c7-4e3e-a4cd-65571a51b7a1|position"] = 4;
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-5d24335b-ec61-41c0-8633-311b8c3de94c|panel"] = 'toprow4col2';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-5d24335b-ec61-41c0-8633-311b8c3de94c|position"] = 0;
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-948c5269-e52b-497d-b2b0-c80cec1bc80d|panel"] = 'toprow4col1';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-96aa79cb-765c-49a5-b8f6-b681a344c510|panel"] = 'toprow4col2';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-a976ab48-61e2-4adf-8a18-0068bfdeb031|panel"] = 'toprow4col2';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-ba545aa0-27f2-4b90-af8f-92e37e08c96e|panel"] = 'toprow4col2';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-d141fafa-3a92-4ae7-b559-ef6dd1dfff88|panel"] = 'toprow1';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-fe33082a-787f-4f23-8a75-598722e68f71|panel"] = 'toprow4col2';
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|content|new-fe33082a-787f-4f23-8a75-598722e68f71|position"] = 5;
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|panels|toprow1"] = array(
    0 => 'new-d141fafa-3a92-4ae7-b559-ef6dd1dfff88',
  );
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|panels|toprow4col1"] = array(
    0 => 'new-948c5269-e52b-497d-b2b0-c80cec1bc80d',
  );
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|panels|toprow4col2"] = array(
    0 => 'new-5d24335b-ec61-41c0-8633-311b8c3de94c',
    1 => 'new-a976ab48-61e2-4adf-8a18-0068bfdeb031',
    2 => 'new-96aa79cb-765c-49a5-b8f6-b681a344c510',
    3 => 'new-ba545aa0-27f2-4b90-af8f-92e37e08c96e',
    4 => 'new-437932a2-27c7-4e3e-a4cd-65571a51b7a1',
    5 => 'new-fe33082a-787f-4f23-8a75-598722e68f71',
    6 => 'new-3b1211d8-63be-4e95-9565-4d0a80e31593',
  );
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|panels|toprow5col1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|panels|toprow5col2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:asu_directory_person:default.display|panels|toprow5col3"]["DELETED"] = TRUE;

  $overrides["field_instance.node-asu_directory_person-field_asu_directory_image.display|default|settings|image_style"] = 'asunews_thumbnail';
  
 return $overrides;
}
