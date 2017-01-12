<?php

   $titulo = variable_get('pagina_gracias_titulo','');
   $body = variable_get('pagina_gracias_body','');
   $etiqueta_volver = variable_get('pagina_gracias_etiqueta_volver','');
   $script = variable_get('pagina_gracias_script','');
    

$url = implode("/",$data);
 drupal_add_js($script, array(
 	'type' => 'inline', 
 	'scope' => 'header', 
 	'weight' => 5)
  );

?> 


  <aside  class="custom-page-gracias">

<div class="titular-web"><h2><span><?php print $titulo;?></span></h2></div>

<div class="white">
  <div class="sumilla">
    <p><img src="/sites/default/files/icon_error.png" alt="">&nbsp;<em><strong>Gracias </strong>Hemos recibido tu mensaje. Nos contactaremos a la brevedad posible contigo.</em>
    
      <span><a href="<?php  print "/".$url ; ?>"><?php print $etiqueta_volver;?></a></span>
      
      </p>
</div>

</div>

  <!--		<div class="page-gracias-body">
  		<p><?php print $body;?></p>
  		</div> -->


  		 
</aside>