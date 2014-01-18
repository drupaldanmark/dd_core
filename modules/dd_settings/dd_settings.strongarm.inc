<?php
/**
 * @file
 * dd_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dd_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_admin_advanced_plugins';
  $strongarm->value = '1';
  $export['panopoly_admin_advanced_plugins'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_admin_front_page_and_sticky';
  $strongarm->value = '0';
  $export['panopoly_admin_front_page_and_sticky'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_admin_link_description';
  $strongarm->value = '0';
  $export['panopoly_admin_link_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_admin_machine_name';
  $strongarm->value = '0';
  $export['panopoly_admin_machine_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_magic_live_preview';
  $strongarm->value = '2';
  $export['panopoly_magic_live_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_magic_pane_add_preview';
  $strongarm->value = '1';
  $export['panopoly_magic_pane_add_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_magic_show_panels_styles';
  $strongarm->value = '0';
  $export['panopoly_magic_show_panels_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panopoly_magic_strip_js_from_preview';
  $strongarm->value = '0';
  $export['panopoly_magic_strip_js_from_preview'] = $strongarm;

  return $export;
}
