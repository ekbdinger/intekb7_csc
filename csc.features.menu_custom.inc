<?php
/**
 * @file
 * csc.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function csc_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-csc.
  $menus['menu-csc'] = array(
    'menu_name' => 'menu-csc',
    'title' => 'CSC Department',
    'description' => 'Links for the Customer Service Center (CSC) Department.  ',
  );
  // Exported menu: menu-csc-admin.
  $menus['menu-csc-admin'] = array(
    'menu_name' => 'menu-csc-admin',
    'title' => 'CSC Admin',
    'description' => 'Links for Georgia Moir or anyone who needs the ability to add or update CSC content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CSC Admin');
  t('CSC Department');
  t('Links for Georgia Moir or anyone who needs the ability to add or update CSC content');
  t('Links for the Customer Service Center (CSC) Department.  ');
  t('Management');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}
