<?php
/**
 * @file
 * cmm_social_feed.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cmm_social_feed_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_cmm_social_feed_networks'
  $field_bases['field_cmm_social_feed_networks'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cmm_social_feed_networks',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'cmm_social_feed_networks',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => NULL,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
