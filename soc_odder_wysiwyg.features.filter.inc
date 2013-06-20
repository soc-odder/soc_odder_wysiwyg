<?php
/**
 * @file
 * soc_odder_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function soc_odder_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-8',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h2> <h3> <h4> <h5> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
