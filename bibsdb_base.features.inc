<?php
/**
 * @file
 * bibsdb_base.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function bibsdb_base_strongarm_alter(&$data) {
  if (isset($data['autologout_redirect_url'])) {
    $data['autologout_redirect_url']->value = 'bibsdb_frontpage'; /* WAS: 'ding_frontpage' */
  }
  if (isset($data['ding_varnish_role'])) {
    $data['ding_varnish_role']->value = 5; /* WAS: 2 */
  }
}
