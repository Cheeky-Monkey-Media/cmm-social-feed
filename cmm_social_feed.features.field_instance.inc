<?php
/**
 * @file
 * cmm_social_feed.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cmm_social_feed_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-field_cmm_social_feed_networks'
  $field_instances['node-article-field_cmm_social_feed_networks'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the social networks to post this content to.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cmm_social_feed_networks',
    'label' => 'Post To Social Networks',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Post To Social Networks');
  t('Select the social networks to post this content to.');

  return $field_instances;
}
