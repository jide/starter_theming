core = "7.x"
api = "2"

projects[] = bootstrap
projects[block_class][subdir] = "contrib"
projects[bootstrap_fieldgroup][subdir] = "contrib"
projects[ds_bootstrap_layouts][subdir] = "contrib"
projects[ds_bootstrap_layouts][version] = "3.x-dev"
projects[views_bootstrap][subdir] = "contrib"
projects[browserclass][subdir] = "contrib"
projects[twitter_bootstrap_modal][subdir] = "contrib"
projects[jquery_ajax_load][subdir] = "contrib"
projects[jquery_update][subdir] = "contrib"
projects[icon][subdir] = "contrib"
projects[less][subdir] = "contrib"

projects[starter_theme][type] = "theme"
projects[starter_theme][download][type] = "git"
projects[starter_theme][download][url] = "git://github.com/jide/starter_theme.git"
projects[starter_theme][subdir] = "features"

libraries[less.php][download][type] = "file"
libraries[less.php][download][url] = "https://github.com/oyejorge/less.php/releases/download/v1.7.0.2/less.php_1.7.0.2.zip"
