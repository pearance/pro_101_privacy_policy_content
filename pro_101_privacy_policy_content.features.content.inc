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
      'options' => array(
        'attributes' => array(),
      ),
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
          'value' => '<h2 class="node-title">
	Privacy Policy
</h2>

<p>
	This Privacy Policy governs the manner in which this website ("Site") collects, uses, maintains and discloses information collected from users ("Users", each user) of this Site. This privacy policy applies to this Site and all products and services offered by this Site.
</p>

<h2>
	Personal identification information
</h2>

<p>
	We may collect personal identification information from Users in a variety of ways, including, but not limited to, when Users visit our site, register on the site, subscribe to the newsletter, respond to a survey, fill out a form, and in connection with other activities, services, features or resources we make available on this Site. Users may be asked for, as appropriate, name, email address, mailing address, and phone number. Users may, however, visit our Site anonymously. We will collect personal identification information from Users only if they voluntarily submit such information to us. Users can always refuse to supply personally identification information, except that it may prevent them from engaging in certain Site related activities.
</p>

<h2>
	Non-personal identification information
</h2>

<p>
	We may collect non-personal identification information about Users whenever they interact with our Site. Non-personal identification information may include the browser name, the type of computer and technical information about Users means of connection to our Site, such as the operating system and the Internet service providers utilized and other similar information.
</p>

<h2>
	Web browser cookies
</h2>

<p>
	Our Site may use "cookies" to enhance User experience. User\'s web browser places cookies on their hard drive for record-keeping purposes and sometimes to track information about them. User may choose to set their web browser to refuse cookies, or to alert you when cookies are being sent. If they do so, note that some parts of the Site may not function properly.
</p>

<h2>
	How we use collected information
</h2>

<p>
	Our site may collect and use Users personal information for the following purposes:
</p>

<ul>
	<li>
		<em>- To improve service</em><br />
		Information you provide helps us respond to your service requests and needs more efficiently.
	</li>
	<li>
		<em>- To improve our Site</em><br />
		We may use feedback you provide to improve our products and services.
	</li>
	<li>
		<em>- To send periodic emails</em><br />
		We may use the email address to respond to their inquiries, questions, and/or other requests.
	</li>
</ul>

<h2>
	How we protect your information
</h2>

<p>
	We adopt appropriate data collection, storage and processing practices and security measures to protect against unauthorized access, alteration, disclosure or destruction of your personal information, username, password, transaction information and data stored on our Site.
</p>

<h2>
	Sharing your personal information
</h2>

<p>
	We do not sell, trade, or rent Users personal identification information to others. We may share generic aggregated demographic information not linked to any personal identification information regarding visitors and users with our business partners, trusted affiliates and advertisers for the purposes outlined above.
</p>

<h2>
	Third party websites
</h2>

<p>
	Users may find advertising or other content on our Site that link to the sites and services of our partners, suppliers, advertisers, sponsors, licensors and other third parties. We do not control the content or links that appear on these sites and are not responsible for the practices employed by websites linked to or from our Site. In addition, these sites or services, including their content and links, may be constantly changing. These sites and services may have their own privacy policies and customer service policies. Browsing and interaction on any other website, including websites which have a link to our Site, is subject to that website\'s own terms and policies.
</p>

<h2>
	Changes to this privacy policy
</h2>

<p>
	Our site has the discretion to update this privacy policy at any time. When we do, we will revise the updated date at the bottom of this page. We encourage Users to frequently check this page for any changes to stay informed about how we are helping to protect the personal information we collect. You acknowledge and agree that it is your responsibility to review this privacy policy periodically and become aware of modifications.
</p>

<h2>
	Your acceptance of these terms
</h2>

<p>
	By using this Site, you signify your acceptance of this policy. If you do not agree to this policy, please do not use our Site. Your continued use of the Site following the posting of changes to this policy will be deemed your acceptance of those changes.
</p>

<h2>
	Contacting us
</h2>

<p>
	If you have any questions about this Privacy Policy, the practices of this site, or your dealings with this site, please <a href="contact">contact us</a>.
</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
