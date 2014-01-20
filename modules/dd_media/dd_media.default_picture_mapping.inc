<?php
/**
 * @file
 * dd_media.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function dd_media_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'desktops';
  $picture_mapping->breakpoint_group = 'desktops';
  $picture_mapping->mapping = array(
    'custom.user.desktop' => array(
      '1x' => 'panopoly_image_thumbnail',
    ),
  );
  $export['desktops'] = $picture_mapping;

  return $export;
}
