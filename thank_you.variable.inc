<?php
/**
 * @file
 * Module's main file.
 */

/**
 * A custom form
 */


function pagina_gracias_variable_info($options) {

  // This is the very minimum we need, some descriptive name.

  $variable['pagina_gracias_titulo'] = array(
    'title' => t('Title'),
    'localize' => TRUE,
  );

   $variable['pagina_gracias_body'] = array(
    'title' => t('Descripcion'),
    'localize' => TRUE,
  );


  $variable['pagina_gracias_label'] = array(
    'title' => t('Label'),
    'localize' => TRUE,
  );

   $variable['pagina_gracias_script'] = array(
    'title' => t('Script'),
    'localize' => TRUE,
  );

    $variable['pagina_gracias_script2'] = array(
    'title' => t('Script'),
    'localize' => TRUE,
  );

 

  return $variable;
}  