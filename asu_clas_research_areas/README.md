# ASU CLAS Research Areas

The ASU CLAS Research Areas module provides a suite of functionality to enable the "Research Areas" section of each academic unit's website.

In particular, the module:

1. Creates a custom taxonomy
2. Adds necessary custom fields
3. Pre-populates the taxonomy with the Research Areas for each CLAS academic unit
4. Enables and configures the respective Panelizer templates
5. Sets a default Pathauto pattern
6. Adds two Views with several displays to output and format data as Panels Panes
7. Integrates and bridges Research Areas and Faculty with iSearch

This module is deeply integrated with the ASU CLAS Paragraphs and ASU Local iSearch Directory modules.

These integrations occur:

* In the Views provided by this module to select the appropriate Faculty members
* Within the templates found in the ASU CLAS Paragraphs module to output the resulting data

> Note: In order to "bridge" the pre-defined Research Areas to the freefrom iSearch Expertise Areas, a Entity Relationship field exists in the Research Area taxonomy to configure the mapping between terms.

> Without this relationship, a Research Area would not be able to be mapped to one or more iSearch Expertise Areas.

> Thus, to relate a Research Area to an iSearch Expertise Area, edit the _Research Area iSearch Relationship_ field within each taxonomy term at `/admin/structure/taxonomy/research_area`.

The result of this module is a complete suite of tools to empower Drupal Site Builders to manage the Research Areas within their academic units.

#### Changelog

**Version 1.0.0** (14 December 2015)

* Initial release
