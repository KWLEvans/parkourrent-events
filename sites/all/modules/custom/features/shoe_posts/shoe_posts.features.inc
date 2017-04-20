<?php
/**
 * @file
 * shoe_posts.features.inc
 */

/**
 * Implements hook_views_api().
 */
function shoe_posts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function shoe_posts_node_info() {
  $items = array(
    'new_shoe' => array(
      'name' => t('New Shoe'),
      'base' => 'node_content',
      'description' => t('A content field for posting information on new shoes available.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
