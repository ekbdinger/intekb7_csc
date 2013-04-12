<?php
/**
 * @file
 * csc.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function csc_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/structure/menu/manage/menu-csc
  $menu_links['management:admin/structure/menu/manage/menu-csc'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-csc',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'CSC Department',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-csc-admin
  $menu_links['management:admin/structure/menu/manage/menu-csc-admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-csc-admin',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'CSC Admin',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-csc-admin:node/add/csc
  $menu_links['menu-csc-admin:node/add/csc'] = array(
    'menu_name' => 'menu-csc-admin',
    'link_path' => 'node/add/csc',
    'router_path' => 'node/add/csc',
    'link_title' => 'Create CSC Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-csc:<front>
  $menu_links['menu-csc:<front>'] = array(
    'menu_name' => 'menu-csc',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Service Alerts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-csc:node/9673
  $menu_links['menu-csc:node/9673'] = array(
    'menu_name' => 'menu-csc',
    'link_path' => 'node/9673',
    'router_path' => 'node/%',
    'link_title' => 'CSC Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-csc:node/9674
  $menu_links['menu-csc:node/9674'] = array(
    'menu_name' => 'menu-csc',
    'link_path' => 'node/9674',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-csc:node/9675
  $menu_links['menu-csc:node/9675'] = array(
    'menu_name' => 'menu-csc',
    'link_path' => 'node/9675',
    'router_path' => 'node/%',
    'link_title' => 'Evening Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: navigation:node/add/csc
  $menu_links['navigation:node/add/csc'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/csc',
    'router_path' => 'node/add/csc',
    'link_title' => 'CSC Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Content for the Customer Service Center (CSC)',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CSC Admin');
  t('CSC Content');
  t('CSC Department');
  t('CSC Home');
  t('Create CSC Page');
  t('Evening Support');
  t('News');
  t('Service Alerts');


  return $menu_links;
}
