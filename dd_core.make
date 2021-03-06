; Drush Make file
;
; Use this file to build a full distribution including Drupal core and the
; "DrupalDanmark" distribution using the following command...
;
; drush --no-patch-txt make build-dd_core.make <target directory>

api = 2
core = 7.x

; Read instruction at https://www.drupal.org/project/picture
projects[picture][version] = 2.7
projects[picture][subdir] = contrib
; https://www.drupal.org/project/markdown
projects[markdown][version] = 1.2
projects[markdown][subdir] = contrib
; https://www.drupal.org/project/panels_everywhere
projects[panels_everywhere][version] = 1.0-rc1
projects[panels_everywhere][subdir] = contrib

; https://www.drupal.org/project/user_picture_default
projects[user_picture_default][version] = 1.0-beta1
projects[user_picture_default][subdir] = contrib
; https://drupal.org/node/2214443 - Breaks when checking hook_requirements outside of the runtime phase.
projects[user_picture_default][patch][2214443] = http://drupal.org/files/issues/2214443-should-return-an-empty-array.patch

; The Panopoly Foundation
projects[panopoly_core][version] = 1.11
projects[panopoly_core][subdir] = panopoly
projects[panopoly_images][version] = 1.11
projects[panopoly_images][subdir] = panopoly
projects[panopoly_theme][version] = 1.11
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_magic][version] = 1.11
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_widgets][version] = 1.11
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_admin][version] = 1.11
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_users][version] = 1.11
projects[panopoly_users][subdir] = panopoly
; The Panopoly Toolset
projects[panopoly_pages][version] = 1.11
projects[panopoly_pages][subdir] = panopoly
projects[panopoly_wysiwyg][version] = 1.11
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_search][version] = 1.11
projects[panopoly_search][subdir] = panopoly
