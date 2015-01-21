<?php
/**
 * @file
 * cmm_social_feed.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cmm_social_feed_taxonomy_default_vocabularies() {
  return array(
    'cmm_social_feed_networks' => array(
      'name' => 'Social Networks',
      'machine_name' => 'cmm_social_feed_networks',
      'description' => 'Social Networks used to filter social feeds to post content to different social networks.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
