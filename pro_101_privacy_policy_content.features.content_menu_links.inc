<?php
/**
 * @file
 * pro_101_privacy_policy_content.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function pro_101_privacy_policy_content_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-auxiliary:node/17
  $menu_links['menu-auxiliary:node/17'] = array(
    'menu_name' => 'menu-auxiliary',
    'link_path' => 'node-name/privacy_policy',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Privacy Policy');


  return $menu_links;
}
