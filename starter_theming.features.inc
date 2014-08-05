<?php
/**
 * @file
 * starter_theming.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function starter_theming_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
