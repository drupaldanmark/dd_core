<?php
/**
 * @file
 * dd_media.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function dd_media_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.desktop';
  $breakpoint->name = 'Desktop';
  $breakpoint->breakpoint = '760px';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.desktop'] = $breakpoint;

  return $export;
}
