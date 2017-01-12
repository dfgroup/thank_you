<?php
/**
 * @file
 * Declare variables to allow transation.
 */

/**
 * A custom form
 */


function thank_you_variable_info($options) {

  // This is the very minimum we need, some descriptive name.

  $variable['thank_you_titulo'] = array(
    'title' => t('Title'),
    'localize' => TRUE,
  );

   $variable['thank_you_body'] = array(
    'title' => t('Descripcion'),
    'localize' => TRUE,
  );


  $variable['thank_you_label'] = array(
    'title' => t('Label'),
    'localize' => TRUE,
  );

   $variable['thank_you_script'] = array(
    'title' => t('Script'),
    'localize' => TRUE,
  );

    $variable['thank_you_script2'] = array(
    'title' => t('Script'),
    'localize' => TRUE,
  );

 

  return $variable;
}  