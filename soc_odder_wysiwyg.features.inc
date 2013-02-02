<?php
/**
 * @file
 * soc_odder_wysiwyg.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soc_odder_wysiwyg_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
