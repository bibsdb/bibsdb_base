<?php
/**
 * @file
 * bibsdb_base.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function bibsdb_base_strongarm_alter(&$data) {
  if (isset($data['autologout_inactivity_message'])) {
    $data['autologout_inactivity_message']->value = 'Af sikkerhedsmæssige årsager er du blevet logget ud, da du har været inaktiv de seneste 10 minutter
    
    '; /* WAS: 'Af sikkerhedsmæssige årsager er du blevet logget ud, da du har været inaktiv de seneste 15 minutter
    
    ' */
  }
  if (isset($data['autologout_redirect_url'])) {
    $data['autologout_redirect_url']->value = 'bibsdb_frontpage'; /* WAS: 'ding_frontpage' */
  }
  if (isset($data['autologout_role_8_timeout'])) {
    $data['autologout_role_8_timeout']->value = 600; /* WAS: 900 */
  }
  if (isset($data['ding_varnish_role'])) {
    $data['ding_varnish_role']->value = 5; /* WAS: 2 */
  }
}
