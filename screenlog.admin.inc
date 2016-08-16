<?php

/**
 * @file
 * Administrative pages of screenlog module
 */


function screenlog_admin_settings_form() {
  $form = array();

  $form['screenlog_enable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable screenlog.js'),
    '#description' => t('Enable bring console.log on the screen.'),
    '#default_value' => variable_get('screenlog_enable', FALSE),
  );

  $form['screenlog_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Enable screenlog.js on specific pages'),
    '#description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %admin for the admin page and %admin-wildcard for every personal blog. %front is the front page.", array('%admin' => 'admin', '%admin-wildcard' => 'admin/*', '%front' => '<front>')),
    '#default_value' => variable_get('screenlog_pages', ''),
  );
  return system_settings_form($form);
}
