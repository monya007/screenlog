/**
 * @file
 * screenlog.custom.js
 */

(function ($) {

  'use strict';

  Drupal.behaviors.screenlog = {
    attach: function (context, settings) {
      screenLog.init();
    }
  };

}(jQuery));
