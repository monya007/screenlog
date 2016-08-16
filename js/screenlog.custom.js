/**
 * @file
 * screenlog.custom.js
 */

(function($) {
  Drupal.behaviors.screenlog = {
    attach: function(context, settings) {
      screenLog.init();
    }
  };
}(jQuery));
