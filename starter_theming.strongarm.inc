<?php
/**
 * @file
 * starter_theming.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function starter_theming_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'icon_api_apache_suppress_warning';
  $strongarm->value = 0;
  $export['icon_api_apache_suppress_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'icon_api_view_path_alias';
  $strongarm->value = 'icon';
  $export['icon_api_view_path_alias'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.9';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'bootstrap';
  $export['theme_default'] = $strongarm;

  return $export;
}
