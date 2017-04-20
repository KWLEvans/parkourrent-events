<?php
/**
 * @file
 * route_maps.features.inc
 */

/**
 * Implements hook_views_api().
 */
function route_maps_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function route_maps_node_info() {
  $items = array(
    'map' => array(
      'name' => t('Map'),
      'base' => 'node_content',
      'description' => t('A map generated for route locations'),
      'has_title' => '1',
      'title_label' => t('Route Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
