<?php
/**
 * @file
 * iyi_scan_and_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iyi_scan_and_post_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iyi_scan_and_post_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function iyi_scan_and_post_node_info() {
  $items = array(
    'user' => array(
      'name' => t('Magic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('The users must fill your own information.'),
    ),
  );
  return $items;
}
