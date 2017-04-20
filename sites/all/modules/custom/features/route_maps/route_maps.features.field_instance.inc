<?php
/**
 * @file
 * route_maps.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function route_maps_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-map-body'.
  $field_instances['node-map-body'] = array(
    'bundle' => 'map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-map-field_address'.
  $field_instances['node-map-field_address'] = array(
    'bundle' => 'map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'simple_gmap',
        'settings' => array(
          'apikey' => '',
          'iframe_height' => 600,
          'iframe_width' => 600,
          'include_link' => 0,
          'include_map' => 1,
          'include_static_map' => 0,
          'include_text' => 0,
          'langcode' => 'en',
          'link_text' => 'View larger map',
          'map_type' => 'm',
          'static_scale' => 1,
          'zoom_level' => 14,
        ),
        'type' => 'simple_gmap',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Description');

  return $field_instances;
}
