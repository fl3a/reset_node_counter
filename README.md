# Reset node counter

## Introduction

This set of modules and drush integration allows you to reset the node_counter which comes with Drupal cores statistic module.

This might be useful, if you refine your unpublished content online and you want to start with 0 views on a published node.

So Reset node counter provides you
* A checkbox on node edit form
* Drush integration
* Bulk operations

### Checkbox

This module add a 'Reset node counter' checkbox to 'Publishing options' tab/fieldset
of drupal´s node edit form.
When checked it deletes the record within the node_counter table for this specific node
after node/edit form submission.

### Drush Integration

This module also has a drush integration...
Just pass the nid of corresponding node to reset-node-counter drush command
and it wipes the entry of the corresponding node from node_counter table.

    drush reset-node-counter $NID 

### Bulk Operations

The **Reset node counter VBO** module allows you to reset the node counter on many nodes via [Views Bulk Operations(VBO)](https://www.drupal.org/project/views_bulk_operations) 
and[Adminstration views(admin_views)](http://drupal.org/project/admin_views).

It provides a reset action and a default view based on the admin_views_node view from admin_view module which already includes this action as operation.

## Requirements

Both modules requires statistics module (core) and it 'Count content views' setting enabled.

The **Reset node counter VBO** module requires [Adminstration views(admin_views)](http://drupal.org/project/admin_views). 


## Installation

Install as you would normally install a contributed Drupal module. 
See: https://drupal.org/documentation/install/modules-themes/modules-7 for further information.
 
## Configuration

This module requires no configuration.

## Maintainers

Florian Latzel (fl3a) - https://drupal.org/u/fl3a 
