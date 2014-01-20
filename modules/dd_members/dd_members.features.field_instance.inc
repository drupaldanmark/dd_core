<?php
/**
 * @file
 * dd_members.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dd_members_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_freelancer'
  $field_instances['user-user-field_freelancer'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you want to show up on the freelance list on Drupal Danmark check this, further more it requires that you have been registered as a paying member of Drupal Danmark',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_freelancer',
    'label' => 'Freelancer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Freelancer');
  t('If you want to show up on the freelance list on Drupal Danmark check this, further more it requires that you have been registered as a paying member of Drupal Danmark');

  return $field_instances;
}
