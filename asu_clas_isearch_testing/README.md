# ASU CLAS iSearch Testing

The ASU CLAS iSearch Testing module enables testing of the embedded 'Research Faculty' Views found within the ASU CLAS Research Areas module.

This is made possible by populating the `isearch_expertise` taxonomy with terms that match the `research_areas` taxonomy, allowing for a sensible 1:1 relationship to exists across vocabularies.

> Due to the variable and freeform nature of the iSearch Expertise areas, it's impossible to know which Expertise Areas should be related to a particular Research Area.

> This is the reason this module exists – to help facilitate testing.

This module performs the following actions to assist in logical quality assurance testing:

1. Deletes any pre-existing iSearch Expertise terms
2. Pre-populates the iSearch Expertise taxonomy with Research Areas from the Math academic unit
3. Creates an iSearch Profile for each Research Area and relates it to its corresponding Expertise Area

All that's left is to manually relate a Research Area to an iSearch Expertise Area by editing the _Research Area iSearch Relationship_ field within each taxonomy term at `/admin/structure/taxonomy/research_area`.

The value of the Research Area iSearch Relationship field should match the name of the taxonomy term and its corresponding iSearch Expertise Area (e.g. Mathematical Biology <> Mathematical Biology)

**Changelog**

**Version 1.0.0** (08 January 2016)

* Initial release
