<?php
/**
 * @file
 * bibsdb_base.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function bibsdb_base_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.autologout_inactivity_message.value"] = 'Af sikkerhedsmæssige årsager er du blevet logget ud, da du har været inaktiv de seneste 10 minutter
  
  ';
  $overrides["variable.autologout_redirect_url.value"] = 'bibsdb_frontpage';
  $overrides["variable.autologout_role_8_timeout.value"] = 600;
  $overrides["variable.ding_varnish_role.value"] = 5;

 return $overrides;
}
