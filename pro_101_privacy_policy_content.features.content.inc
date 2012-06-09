<?php
/**
 * @file
 * pro_101_privacy_policy_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_privacy_policy_content_content_defaults() {
  $content = array();

  $content['privacy_policy'] = (object) array(
    'exported_path' => 'privacy-policy',
    'link' => array(
      'menu_name' => 'menu-auxiliary',
      'link_path' => 'node-name/privacy_policy',
      'router_path' => 'node/%',
      'link_title' => 'Privacy Policy',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'identifier' => 'menu-auxiliary:node-name/privacy_policy',
    ),
    'title' => 'Privacy Policy',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1339229015',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'privacy_policy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
