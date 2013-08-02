<?php
/**
 * @file
 * soc_odder_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function soc_odder_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'da',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Image' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'RemoveFormat' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'default_toolbar_grouping' => 0,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
      'advanced__active_tab' => 'edit-output',
    ),
  );

  return $profiles;
}
