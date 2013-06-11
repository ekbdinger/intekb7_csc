<?php
/**
 * @file
 * csc.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function csc_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-csc-body'
  $field_instances['node-csc-body'] = array(
    'bundle' => 'csc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Content for the Customer Service Center (CSC)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'test_format' => 0,
          1 => 1,
          2 => 2,
          3 => 0,
          4 => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 1,
        'default_order_wrapper' => array(
          'formats' => array(
            'test_format' => array(
              'weight' => -49,
            ),
            1 => array(
              'weight' => -48,
            ),
            2 => array(
              'weight' => -50,
            ),
            3 => array(
              'weight' => -47,
            ),
            4 => array(
              'weight' => -46,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Content for the Customer Service Center (CSC)');

  return $field_instances;
}
