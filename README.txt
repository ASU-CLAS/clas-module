README.txt
clas_module-7.x-1.6


CHANGELOG

1.6
	* Added CLAS Social Icons Block
	* Modified Event and News Content Type Layouts to include Social Icons Block

1.5
	* Added "Moscone Plus" layout

1.4
	* Added tabs field to asu degrees content type, only applies to grad degrees
	* Modified CSS to make H2 tags on asu degree page slightly smaller
	* Now requires 3 additional modules: Quick Tabs, Field Collection, Quick Tabs Field Collection

1.3
	* Added "Cherokee" panels layout
	* Added code to remove webspark css from megamenu admin page
	* Added CSS styles for class "nosub" that can be applied to tb-megamenu parent items to prevent children from displaying in nav bar

1.2
	* Added list style panes for clas_degrees views
	* Added grid/list view button to view header

1.1
	* Added filtering of asu degree imports if the Unit field is set in admin/config/system/clas_module
	
1.0
	* Added clas degree views as panes with slightly different styles than asu degree views
	* Added clas_degree_image style
	* Added CSS to adjust padding on gray nav bar items as the page condenses


INSTRUCTIONS

1.	Install module

	a.	Set site to SFTP connection mode in the Pantheon dashboard
	
	b.	Go to /admin/modules/install on your Webspark site and install the clas module from URL (URL to clas module found at: clas.asu.edu/webspark)
	
	c.	Click install, then enable the clas module from the module list at /admin/modules
	
	d.	Configure the clas module with your unit name (Configure link will appear next to the clas module in the module list at /admin/modules). The Unit name must match what is used in the ASU Degrees XML feed. List of units as of 6/22/2015 are listed below.
	
2.	Import degrees

	a.	Follow the instructions at: https://webspark.asu.edu/features/asu-degrees-feed 
	

3.	Build Degree list page

	a.	Create a new content page on your Webspark site.
	
	b.	Click Customize this page, then add a new pane to any region
	
	c.	From the content pane selection popup, choose View panes from the left menu
	
	d.	Click Add for the CLAS degree list you want to appear on the page (Undergrad, Grad, Certs/Minors) then click save for the pane, then save again for the page.
	
	


Unit names as they appear in the ASU Degree feed XML:

American Indian Studies Program
School of Molecular Sciences
Department of English
Department of Military Science
Department of Physics
Department of Psychology
Historical, Philosophical &amp; Religious Studies, Sch
Hugh Downs School of Human Communication
Sanford School of Social and Family Dynamics
School of Earth and Space Exploration
School of Geographical Sciences and Urban Planning
School of Human Evolution &amp; Social Change
School of International Letters and Cultures
School of Life Sciences
School of Mathematical and Statistical Sciences
School of Politics and Global Studies
School of Social Transformation
School of Transborder Studies