<?php
/**
 * @file
 * resto_content_type_restaurant.features.inc
 */

/**
 * Implements hook_node_info().
 */
function resto_content_type_restaurant_node_info() {
  $items = array(
    'resto_restaurant' => array(
      'name' => t('Restaurant'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a restaurant location with all necessary data.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
