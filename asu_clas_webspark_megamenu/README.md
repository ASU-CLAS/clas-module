# ASU CLAS Webspark Mega Menu

The ASU CLAS Webspark Mega Menu module replaces the JavaScript file from the [Webspark Mega Menu module][1] in order to work around a bug where the TB Mega Menu items are altered with inline CSS from the Webspark Mega Menu JavaScript causing the menu to break onto a second line certain circumstances.

> This miscalculation bug exists in the JavaScript theme function `Drupal.behaviors.webspark_resize_menu()` which can be seen at `profiles/openasu/modules/webspark_featurescustom/webspark_megamenu/js/webspark_megamenu.js`.

> This bug is present in v1.13.13 (Hanford) and [earlier releases of Webspark][2], available as of December 2015.

Once this behavior is fixed in Webspark, this module will become obselete.

**Changelog**

**1.0.0** (15 December 2015)

* Initial release

[1]: https://github.com/ASU/webspark-drops-drupal7/tree/master/profiles/openasu/modules/webspark_featurescustom/webspark_megamenu
[2]: https://fserver.drupal.asu.edu/node/1664
