<?php

/**
 * @file 
 * Includes for reset_node_counter, drush and submodules.
 */

/**
 * Callback for resetting a counter for a node.
 *
 * @param int $nid 
 *   Node id of correspoding node.
 */
function reset_node_counter_reset($nid) {
  db_delete('node_counter')
    ->condition('nid', $nid)
    ->execute();
}
