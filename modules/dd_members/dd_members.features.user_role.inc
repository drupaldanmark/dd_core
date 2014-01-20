<?php
/**
 * @file
 * dd_members.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dd_members_user_default_roles() {
  $roles = array();

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 4,
  );

  // Exported role: member 2009.
  $roles['member 2009'] = array(
    'name' => 'member 2009',
    'weight' => 5,
  );

  // Exported role: member 2010.
  $roles['member 2010'] = array(
    'name' => 'member 2010',
    'weight' => 6,
  );

  // Exported role: member 2011.
  $roles['member 2011'] = array(
    'name' => 'member 2011',
    'weight' => 7,
  );

  // Exported role: member 2012.
  $roles['member 2012'] = array(
    'name' => 'member 2012',
    'weight' => 8,
  );

  // Exported role: member 2013.
  $roles['member 2013'] = array(
    'name' => 'member 2013',
    'weight' => 9,
  );

  // Exported role: member 2014.
  $roles['member 2014'] = array(
    'name' => 'member 2014',
    'weight' => 10,
  );

  return $roles;
}
