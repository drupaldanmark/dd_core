<?php
/**
 * @file
 * dd_media.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function dd_media_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.desktop';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'desktops';
  $breakpoint_group->name = 'Desktops';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['desktops'] = $breakpoint_group;

  return $export;
}
