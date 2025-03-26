/* 
	9 de septiembre >

	Mango Paola Ajedrez 2.0
	Licencia: GPLv3   
    	Copyright (c) 2012-2013 - Mango Computer c.a 

    	El Programa Mango Paola Ajedrez ésta basado en la investigación de Jose Andres Morales Linares.

	Nadie debería estar restringido por el software que utilizan. Hay cuatro libertades que cada usuario debe tener:
	* La libertad de usar el programa para cualquier propósito,
	* La libertad de cambiar el software para satisfacer sus necesidades,
	* La libertad de compartir el software con sus amigos y vecinos.
	* La libertad de compartir los cambios que realice.

	Cuando un programa se ofrece a los usuarios todas estas libertades, lo llamamos software libre.

	El programa es software libre. Usted puede redistribuirlo y/o modificarlo bajo los términos de la Licencia Pública 
	General de GNU según es publicada por la Free Software Foundation, bien de la versión 3 de la Licencia, o (a su elección)
	cualquier versión posterior. El programa se distribuye con la esperanza de que sea útil, pero SIN NINGUNA GARANTÍA, incluso
	sin la garantía implícita de COMERCIALIZACIÓN o IDONEIDAD PARA UN PROPÓSITO PARTICULAR. Vea la Licencia Pública General de GNU
	para más detalles: http://www.gnu.org/licenses/

	Existen muchos avances en la forma de escribir motores de ajedrez, estos dos sitios web 
	fueron de mucha ayuda durante el proceso de investigación y desarrollo. 
	* http://chessprogramming.wikispaces.com
	* https://sites.google.com/site/danasah/
    	* http://www.sluijten.com/winglet/

    	Información de contacto:
	comprasmangocomputer@gmail.com
	http://mangocomputerca.blogspot.com/
*/

#ifndef INTERFACE_GRAFICA_C
#define INTERFACE_GRAFICA_C

int iniciarInterfaceGrafica(int *argc, char* argv[])
{
	char rutaImgClavada[128];
	char rutaImgClavada2[128];

	sprintf(rutaImgClavada,	    "%s/imagenes/clavada.png",   strRutaApp);
	sprintf(rutaImgClavada2,    "%s/imagenes/clavada2.png",   strRutaApp);

	sprintf(strRutaPC_pensando,  "%s/imagenes/pcpensando.png",strRutaApp);

	imagen_clavada  = cairo_image_surface_create_from_png(rutaImgClavada); 
	imagen_clavada2 = cairo_image_surface_create_from_png(rutaImgClavada2); 

	bzero(strAplay_jaque,			MAX_RUTA_PATH);
	bzero(strAplay_mover,			MAX_RUTA_PATH);
	bzero(strAplay_mover_torre,		MAX_RUTA_PATH);
	bzero(strAplay_mover_caballo,		MAX_RUTA_PATH);
	bzero(strAplay_mover_peon,		MAX_RUTA_PATH);
	bzero(strAplay_mover_dama,		MAX_RUTA_PATH);
	bzero(strAplay_mover_alfil,		MAX_RUTA_PATH);
	bzero(strAplay_mover_rey,		MAX_RUTA_PATH);
	bzero(strAplay_capturar,		MAX_RUTA_PATH);
	bzero(strAplay_capturar2,		MAX_RUTA_PATH);
	bzero(strAplay_capturar3,		MAX_RUTA_PATH);
	bzero(strAplay_jaqueMate,		MAX_RUTA_PATH);
	bzero(strAplay_ahogado,			MAX_RUTA_PATH);
	bzero(strAplay_girarTablero,		MAX_RUTA_PATH);
	bzero(strAplay_rendirse,		MAX_RUTA_PATH);
	bzero(strAplay_enroque,			MAX_RUTA_PATH);
	bzero(strAplay_empateGeneral,		MAX_RUTA_PATH);

	bzero(strAplay_A,			MAX_RUTA_PATH);
	bzero(strAplay_B,			MAX_RUTA_PATH);
	bzero(strAplay_C,			MAX_RUTA_PATH);
	bzero(strAplay_D,			MAX_RUTA_PATH);
	bzero(strAplay_E,			MAX_RUTA_PATH);
	bzero(strAplay_F,			MAX_RUTA_PATH);
	bzero(strAplay_G,			MAX_RUTA_PATH);
	bzero(strAplay_H,			MAX_RUTA_PATH);
	bzero(strAplay_1,			MAX_RUTA_PATH);
	bzero(strAplay_2,			MAX_RUTA_PATH);
	bzero(strAplay_3,			MAX_RUTA_PATH);
	bzero(strAplay_4,			MAX_RUTA_PATH);
	bzero(strAplay_5,			MAX_RUTA_PATH);
	bzero(strAplay_6,			MAX_RUTA_PATH);
	bzero(strAplay_7,			MAX_RUTA_PATH);
	bzero(strAplay_8,			MAX_RUTA_PATH);
	bzero(strAplay_blanco,			MAX_RUTA_PATH);
	bzero(strAplay_negro,			MAX_RUTA_PATH);
	bzero(strAplay_peon,			MAX_RUTA_PATH);
	bzero(strAplay_torre,			MAX_RUTA_PATH);
	bzero(strAplay_caballo,			MAX_RUTA_PATH);
	bzero(strAplay_alfil,			MAX_RUTA_PATH);
	bzero(strAplay_dama,			MAX_RUTA_PATH);
	bzero(strAplay_rey,			MAX_RUTA_PATH);
	bzero(strAplay_moverPiezaDe,		MAX_RUTA_PATH);
	bzero(strAplay_hasta,			MAX_RUTA_PATH);
	bzero(strAplay_seleccion,		MAX_RUTA_PATH);
	bzero(strAplay_quitar,			MAX_RUTA_PATH);
	bzero(strAplay_piezaCapturada,		MAX_RUTA_PATH);
	bzero(strAplay_de,			MAX_RUTA_PATH);
	bzero(strAplay_sugieroMover,		MAX_RUTA_PATH);
	bzero(strAplay_pensandoSugerencia, 	MAX_RUTA_PATH);
	bzero(strAplay_mangoPaolaPensando, 	MAX_RUTA_PATH);
	bzero(strAplay_comandoIrActivado, 	MAX_RUTA_PATH);
	bzero(strAplay_escaqueAtacado, 		MAX_RUTA_PATH);
	bzero(strAplay_seleccionaEscaque,	MAX_RUTA_PATH);
	bzero(strAplay_escaqueDestinoEscaque,	MAX_RUTA_PATH);
	bzero(strAplay_vozJaque,		MAX_RUTA_PATH);
	bzero(strAplay_vozJaqueMate,		MAX_RUTA_PATH);
	bzero(strAplay_vozEnroqueCorto,		MAX_RUTA_PATH);
	bzero(strAplay_vozEnroqueLargo,		MAX_RUTA_PATH);
	bzero(strAplay_vozPromocion,		MAX_RUTA_PATH);

	bzero(strAplay_vozRepeticion,		MAX_RUTA_PATH);
	bzero(strAplay_vozGananNegras,		MAX_RUTA_PATH);
	bzero(strAplay_vozGananBlancas,		MAX_RUTA_PATH);
	bzero(strAplay_vozAhogado,		MAX_RUTA_PATH);

	//Carga de los archivos de sonido
	sprintf(strAplay_jaque,		"aplay -q -N -D default %s/sonidos/jaque.wav &",strRutaApp);
	sprintf(strAplay_mover,	    	"aplay -q -N -D default %s/sonidos/mover.wav &",strRutaApp);
	sprintf(strAplay_mover_torre,  	"aplay -q -N -D default %s/sonidos/mover_torre.wav &",strRutaApp);
	sprintf(strAplay_mover_caballo,	"aplay -q -N -D default %s/sonidos/mover_caballo.wav &",strRutaApp);
	sprintf(strAplay_mover_peon,   	"aplay -q -N -D default %s/sonidos/mover_peon.wav &",strRutaApp);
	sprintf(strAplay_mover_dama,   	"aplay -q -N -D default %s/sonidos/mover_dama.wav &",strRutaApp);
	sprintf(strAplay_mover_alfil,  	"aplay -q -N -D default %s/sonidos/mover_alfil.wav &",strRutaApp);
	sprintf(strAplay_mover_rey,    	"aplay -q -N -D default %s/sonidos/mover_rey.wav &",strRutaApp);
	sprintf(strAplay_capturar,	"aplay -q -N -D default %s/sonidos/capturar.wav &",strRutaApp);
	sprintf(strAplay_capturar2,    	"aplay -q -N -D default %s/sonidos/capturar2.wav &",strRutaApp);
	sprintf(strAplay_capturar3,    	"aplay -q -N -D default %s/sonidos/capturar3.wav &",strRutaApp);
	sprintf(strAplay_jaqueMate,    	"aplay -q -N -D default %s/sonidos/jaqueMate.wav &",strRutaApp);
	sprintf(strAplay_ahogado,	"aplay -q -N -D default %s/sonidos/ahogado.wav &",strRutaApp);
	sprintf(strAplay_girarTablero, 	"aplay -q -N -D default %s/sonidos/girarTablero.wav &",strRutaApp);
	sprintf(strAplay_rendirse,	"aplay -q -N -D default %s/sonidos/rendirse.wav &",strRutaApp);
	sprintf(strAplay_enroque,	"aplay -q -N -D default %s/sonidos/enroque.wav &",strRutaApp);
	sprintf(strAplay_empateGeneral, "aplay -q -N -D default %s/sonidos/empateGeneral.wav &",strRutaApp);

	sprintf(strAplay_A, "aplay -q -N -D default %s/sonidos/a.wav",strRutaApp);
	sprintf(strAplay_B, "aplay -q -N -D default %s/sonidos/b.wav",strRutaApp);
	sprintf(strAplay_C, "aplay -q -N -D default %s/sonidos/c.wav",strRutaApp);
	sprintf(strAplay_D, "aplay -q -N -D default %s/sonidos/d.wav",strRutaApp);
	sprintf(strAplay_E, "aplay -q -N -D default %s/sonidos/e.wav",strRutaApp);
	sprintf(strAplay_F, "aplay -q -N -D default %s/sonidos/f.wav",strRutaApp);
	sprintf(strAplay_G, "aplay -q -N -D default %s/sonidos/g.wav",strRutaApp);
	sprintf(strAplay_H, "aplay -q -N -D default %s/sonidos/h.wav",strRutaApp);
	sprintf(strAplay_1, "aplay -q -N -D default %s/sonidos/1.wav",strRutaApp);
	sprintf(strAplay_2, "aplay -q -N -D default %s/sonidos/2.wav",strRutaApp);
	sprintf(strAplay_3, "aplay -q -N -D default %s/sonidos/3.wav",strRutaApp);
	sprintf(strAplay_4, "aplay -q -N -D default %s/sonidos/4.wav",strRutaApp);
	sprintf(strAplay_5, "aplay -q -N -D default %s/sonidos/5.wav",strRutaApp);
	sprintf(strAplay_6, "aplay -q -N -D default %s/sonidos/6.wav",strRutaApp);
	sprintf(strAplay_7, "aplay -q -N -D default %s/sonidos/7.wav",strRutaApp);
	sprintf(strAplay_8, "aplay -q -N -D default %s/sonidos/8.wav",strRutaApp);

	sprintf(strAplay_blanco, 		"aplay -q -N -D default %s/sonidos/blanco.wav",			strRutaApp);
	sprintf(strAplay_negro, 		"aplay -q -N -D default %s/sonidos/negro.wav",			strRutaApp);
	sprintf(strAplay_peon, 			"aplay -q -N -D default %s/sonidos/peon.wav",			strRutaApp);
	sprintf(strAplay_torre, 		"aplay -q -N -D default %s/sonidos/torre.wav",			strRutaApp);
	sprintf(strAplay_caballo, 		"aplay -q -N -D default %s/sonidos/caballo.wav",		strRutaApp);
	sprintf(strAplay_alfil, 		"aplay -q -N -D default %s/sonidos/alfil.wav",			strRutaApp);
	sprintf(strAplay_dama, 			"aplay -q -N -D default %s/sonidos/dama.wav",			strRutaApp);
	sprintf(strAplay_rey, 			"aplay -q -N -D default %s/sonidos/rey.wav",			strRutaApp);
	sprintf(strAplay_moverPiezaDe, 		"aplay -q -N -D default %s/sonidos/moverPiezaDe.wav",		strRutaApp);
	sprintf(strAplay_hasta, 		"aplay -q -N -D default %s/sonidos/hasta.wav",			strRutaApp);
	sprintf(strAplay_seleccion, 		"aplay -q -N -D default %s/sonidos/seleccion.wav",		strRutaApp);
	sprintf(strAplay_quitar, 		"aplay -q -N -D default %s/sonidos/quitar.wav",			strRutaApp);
	sprintf(strAplay_piezaCapturada,	"aplay -q -N -D default %s/sonidos/piezaCapturada.wav",		strRutaApp);
	sprintf(strAplay_de,			"aplay -q -N -D default %s/sonidos/de.wav",			strRutaApp);
	sprintf(strAplay_sugieroMover,		"aplay -q -N -D default %s/sonidos/sugieroMover.wav",		strRutaApp);
	sprintf(strAplay_pensandoSugerencia,	"aplay -q -N -D default %s/sonidos/pensandoSugerencia.wav",	strRutaApp);
	sprintf(strAplay_mangoPaolaPensando,	"aplay -q -N -D default %s/sonidos/mangoPaolaPensando.wav",	strRutaApp);
	sprintf(strAplay_comandoIrActivado,	"aplay -q -N -D default %s/sonidos/comandoIrActivado.wav",	strRutaApp);
	sprintf(strAplay_escaqueAtacado,	"aplay -q -N -D default %s/sonidos/escaqueAtacado.wav",		strRutaApp);
	sprintf(strAplay_seleccionaEscaque,	"aplay -q -N -D default %s/sonidos/seleccionaEscaque.wav",	strRutaApp);
	sprintf(strAplay_escaqueDestinoEscaque,	"aplay -q -N -D default %s/sonidos/escaqueDestinoMovimiento.wav",strRutaApp);
	sprintf(strAplay_vozJaque,		"aplay -q -N -D default %s/sonidos/vozJaque.wav"		,strRutaApp);
	sprintf(strAplay_vozJaqueMate,		"aplay -q -N -D default %s/sonidos/vozJaqueMate.wav"		,strRutaApp);
	sprintf(strAplay_vozEnroqueCorto,	"aplay -q -N -D default %s/sonidos/vozEnroqueCorto.wav"		,strRutaApp);
	sprintf(strAplay_vozEnroqueLargo,	"aplay -q -N -D default %s/sonidos/vozEnroqueLargo.wav"		,strRutaApp);
	sprintf(strAplay_vozPromocion,		"aplay -q -N -D default %s/sonidos/vozPromocion.wav"		,strRutaApp);
	sprintf(strAplay_vozRepeticion,		"aplay -q -N -D default %s/sonidos/vozRepeticion.wav"		,strRutaApp);
	sprintf(strAplay_vozGananNegras,	"aplay -q -N -D default %s/sonidos/vozGananNegras.wav"		,strRutaApp);
	sprintf(strAplay_vozGananBlancas,	"aplay -q -N -D default %s/sonidos/vozGananBlancas.wav"		,strRutaApp);
	sprintf(strAplay_vozAhogado,		"aplay -q -N -D default %s/sonidos/vozAhogado.wav"		,strRutaApp);

//***************************************************************************************************************
	tiempoBase = obtenerBASETIEMPO();

	//#1E90FF azul claro
	rgb1.rojo  = 0.12;
	rgb1.verde = 0.56;
	rgb1.azul  = 1;

	//#87CEFA azul mas claro
	rgb2.rojo  = 0.53;
	rgb2.verde = 0.81;
	rgb2.azul  = 0.98;

	//#DF7401 Naranja Oscuro
	//#942EE2 Violeta Transmutador
	rgb3.rojo  = 0.580392157;
	rgb3.verde = 0.180392157;
	rgb3.azul  = 0.88627451;

	//#088A08 Verde Claro
	//#1BB61B Verder mas Claro
	rgb4.rojo  = 0.105882353;	
	rgb4.verde = 0.71372549;	
	rgb4.azul  = 0.105882353;	

	//#F84747 Rojo Intenso
	rgb5.rojo  = 0.97254902;
	rgb5.verde = 0.278431373;
	rgb5.azul  = 0.278431373;

	//#FFBF00 Amarillo Mostaza
	//#DF7401 Naranja Oscuro
	rgb6.rojo  =  0.874509804;	
	rgb6.verde =  0.454901961;	
	rgb6.azul  =  0.003921569;	

	//#F7D358 Amarillo Tenue
	//#FFBF00 Amarillo Mostaza
	rgb7.rojo  = 1;		  
	rgb7.verde = 0.749019608; 
	rgb7.azul  = 0;		  

	//#7A7A7A plateado gris
	rgb8.rojo  = 0.478431373;
	rgb8.verde = 0.478431373;
	rgb8.azul  = 0.478431373;

	//#0D3C05 Verde Oscuro
	rgb9.rojo  = 0.050980392;
	rgb9.verde = 0.235294118;
	rgb9.azul  = 0.019607843;

	//#019C01 Verde mas Claro pero unos grados mas oscuro
	rgb10.rojo  = 0.003921569;	
	rgb10.verde = 0.611764706;	
	rgb10.azul  = 0.003921569;	

	//#951515 Rojo Intenso oscuro
	rgb11.rojo  = 0.996078431;
	rgb11.verde = 0.180392157;
	rgb11.azul  = 0.180392157;

	//#CA6F0F Naranja Oscuro Mas Oscuro
	rgb12.rojo  =  0.792156863;	
	rgb12.verde =  0.435294118;	
	rgb12.azul  =  0.058823529;	

	//#EBB30A Amarillo Mostaza oscuro
	rgb13.rojo  = 0.921568627;		  
	rgb13.verde = 0.701960784; 	  
	rgb13.azul  = 0.039215686;

	//#00FF00 Blanco Intenso
	rgb14.rojo  = 0;		  
	rgb14.verde = 1; 	  
	rgb14.azul  = 0;

	//#FF00FF Negro Intenso
	rgb15.rojo  = 1;		  
	rgb15.verde = 0; 	  
	rgb15.azul  = 1;

	//#FFFF00 Amarrillo 1
	rgb16.rojo  = 1;		  
	rgb16.verde = 1; 	  
	rgb16.azul  = 0;

	//#F7FE2E Amarrillo 2
	rgb17.rojo  = 0.968627451;		  
	rgb17.verde = 0.996078431; 	  
	rgb17.azul  = 0.180392157;

	//#F4FA58 Amarrillo 3
	rgb18.rojo  = 0.956862745;		  
	rgb18.verde = 0.980392157; 	  
	rgb18.azul  = 0.345098039;

	//#F3F781 Amarrillo 4
	rgb19.rojo  = 0.952941176;		  
	rgb19.verde = 0.968627451; 	  
	rgb19.azul  = 0.505882353;

	memset(vpos,    '0',    (sizeof(POS_CEL_TABLERO_XY) * TAMANIO_MATRIZ * TAMANIO_MATRIZ));
	memset(vpiezas, '0',    (sizeof(IMAGEN_PIEZAS) * 12));

	bzero(strNombreJuego, 	LARGO_CAMPOS_STR);
	strcpy(strNombreJuego, 	"Humano Vs Mango Paola");

	bzero(strNombreBlancas, LARGO_CAMPOS_STR);
	strcpy(strNombreBlancas, "Blancas");

	bzero(strNombreNegras, 	LARGO_CAMPOS_STR);
	strcpy(strNombreNegras, "Negras");

	bzero(path_mma, 	LARGO_RUTAPIEZA);
	getcwd(path_mma, LARGO_RUTAPIEZA);

	numCeldasTablero = TAMANIO_MATRIZ - 1;
	numPosOrigen 	 = SIN_POS_VALIDAS;

	gtk_init (argc, &argv);
	g_type_class_unref (g_type_class_ref (GTK_TYPE_IMAGE_MENU_ITEM));
	g_object_set (gtk_settings_get_default (), "gtk-menu-images", TRUE, NULL);
//	g_object_set (gtk_settings_get_default (), "gtk-button-images", TRUE, NULL);

	window 		= gtk_window_new (GTK_WINDOW_TOPLEVEL);
	area   		= gtk_drawing_area_new();
	combolista	= gtk_combo_box_new_text();

	g_signal_connect(GTK_OBJECT(combolista),  "changed", G_CALLBACK(comboBoxCambio), NULL);

	primeroBoton 	= gtk_button_new();
	atrasBoton	= gtk_button_new();
	adelanteBoton 	= gtk_button_new();
	ultimoBoton 	= gtk_button_new();

	labelNotificacion1 = gtk_label_new("Titulo Notificación");
	labelNotificacion2 = gtk_label_new("Sub Titulo Notificación");
	iconNotificacion   = gtk_image_new_from_stock(GTK_STOCK_DIALOG_INFO, GTK_ICON_SIZE_DIALOG);

	labelTiempoBlancas = gtk_label_new("");
	labelTiempoNegras  = gtk_label_new("");
	labelMaterial	   = gtk_label_new("");

		strMaquillado = g_markup_printf_escaped(
		 "<span background=\"#0D3C05\" weight=\"bold\" size=\"large\"><span color=\"#7A7A7A\"> Eval:%d </span><span color=\"#000000\"> Mat:%d </span></span>",
	  	 evaluacionTablero(-INFINITO,INFINITO),
		 (juego.colorTurno?-juego.material_total:juego.material_total));
	gtk_label_set_markup(GTK_LABEL(labelMaterial), strMaquillado);

	gtk_misc_set_alignment(GTK_MISC(labelNotificacion1),0,1);
	gtk_misc_set_alignment(GTK_MISC(labelNotificacion2),0,0);

	gtk_button_set_image(GTK_BUTTON(primeroBoton),  gtk_image_new_from_stock(GTK_STOCK_GOTO_FIRST, GTK_ICON_SIZE_SMALL_TOOLBAR));
	gtk_button_set_image(GTK_BUTTON(atrasBoton),    gtk_image_new_from_stock(GTK_STOCK_GO_BACK,    GTK_ICON_SIZE_SMALL_TOOLBAR));
	gtk_button_set_image(GTK_BUTTON(adelanteBoton), gtk_image_new_from_stock(GTK_STOCK_GO_FORWARD, GTK_ICON_SIZE_SMALL_TOOLBAR));
	gtk_button_set_image(GTK_BUTTON(ultimoBoton),   gtk_image_new_from_stock(GTK_STOCK_GOTO_LAST,  GTK_ICON_SIZE_SMALL_TOOLBAR));
 
	barra     		= gtk_toolbar_new();
	box1      		= gtk_vbox_new(FALSE, 0);
	boxNotificacion		= gtk_vbox_new(FALSE, 0);
	boxPanelNotificacion	= gtk_hbox_new(FALSE, 0);
	boxPanelPractica	= gtk_vbox_new(FALSE, 0);
	box_bajo  		= gtk_hbox_new(FALSE, 0);
	box_combo 		= gtk_hbox_new(TRUE, 0);
	boxLabelTiempo		= gtk_hbox_new(TRUE, 0);

	cargarTituloVentana();
  	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_widget_set_size_request(window,   TAMANIO_MIN_RESOL_ALTO, TAMANIO_MIN_RESOL_ANCHO);
	gtk_window_resize(GTK_WINDOW(window), TAMANIO_MIN_RESOL_ALTO, TAMANIO_MIN_RESOL_ANCHO);

	bzero(strArmarRuta, MAX_RUTA_PATH);
	sprintf(strArmarRuta, "%s/imagenes/bandera-de-venezuela-ico.png",strRutaApp);
	gtk_window_set_icon_from_file(GTK_WINDOW(window),strArmarRuta, NULL);

	accel_group = gtk_accel_group_new();
	item_factory = gtk_item_factory_new(GTK_TYPE_MENU_BAR, "<main>", accel_group);
	gtk_item_factory_create_items(item_factory, nmenu_items, menu_items, NULL);
	gtk_window_add_accel_group(GTK_WINDOW(window), accel_group);
	menubar = gtk_item_factory_get_widget(item_factory, "<main>");


	gtk_toolbar_set_style(GTK_TOOLBAR(barra), GTK_TOOLBAR_BOTH);

	iconNuevoBoton 	= gtk_image_new_from_stock(GTK_STOCK_NEW, GTK_ICON_SIZE_SMALL_TOOLBAR);
	nuevoBoton 	= gtk_toolbar_append_item(GTK_TOOLBAR(barra), 	/* nuestra barra de herramientas */
                              "Nuevo", 			     		/* etiqueta del botón */
                              "Nueva Partida",	 			/* descripción de este botón */
                              "Privado", 				/* tooltip información privada */
                              iconNuevoBoton, 				/* icono del widget */
                              G_CALLBACK(nuevo),	 		/* señal */
                              NULL);

	iconAbrirBoton 	= gtk_image_new_from_stock(GTK_STOCK_OPEN, GTK_ICON_SIZE_SMALL_TOOLBAR);
	abrirBoton 	= gtk_toolbar_append_item(GTK_TOOLBAR(barra), 	
                              "Abrir", 			     	
                              "Abrir Partida en Archivo PGN", 		
                              "Privado", 				
                              iconAbrirBoton, 				
                              G_CALLBACK(abrir),	 		
                              NULL);

	iconGuardarBoton = gtk_image_new_from_stock(GTK_STOCK_SAVE, GTK_ICON_SIZE_SMALL_TOOLBAR);
	guardarBoton 	 = gtk_toolbar_append_item(GTK_TOOLBAR(barra), 	
                              "Guardar", 			     	
                              "Guardar Partida en Archivo PGN", 		
                              "Privado", 				
                              iconGuardarBoton, 				
                              G_CALLBACK(guardar),	 		
                              NULL);

	gtk_toolbar_append_space((GtkToolbar*)barra);

	iconoNumeracionTableBoton = gtk_image_new_from_stock(GTK_STOCK_SELECT_FONT, GTK_ICON_SIZE_SMALL_TOOLBAR);
	numeracionTableBoton 	  = gtk_toolbar_append_element(GTK_TOOLBAR(barra),
                    	GTK_TOOLBAR_CHILD_TOGGLEBUTTON, 
                    	NULL,                          
                    	"Notación",                        
                   	"Oculta o Muestra la Numeración Algebraica del Tablero",       
                    	"Private",                     
                      	iconoNumeracionTableBoton, 				
                      	G_CALLBACK(verNumeracion),	 		
                      	NULL);

	iconAyudaColorBoton = gtk_image_new_from_stock(GTK_STOCK_SELECT_COLOR, GTK_ICON_SIZE_SMALL_TOOLBAR);
	ayudaColorBoton     = gtk_toolbar_append_element(GTK_TOOLBAR(barra),
                    	GTK_TOOLBAR_CHILD_TOGGLEBUTTON, 
                    	NULL,                          
                        "Guia", 			     	
                        "Oculta o Muestra Escaques Resaltados de Colores como una Guia", 		
                        "Privado", 				
                        iconAyudaColorBoton, 				
                        G_CALLBACK(verAyudaColor),	 		
                        NULL);

	iconOirBoton = gtk_image_new_from_stock(GTK_STOCK_YES, GTK_ICON_SIZE_SMALL_TOOLBAR);
	oirBoton     = gtk_toolbar_append_element(GTK_TOOLBAR(barra),
                    	GTK_TOOLBAR_CHILD_TOGGLEBUTTON, 
                    	NULL,                          
                        "Sonido", 			     	
                        "Activa o Desactiva el Sonido del Juego", 		
                        "Privado", 				
                        iconOirBoton, 				
                        G_CALLBACK(sonidoJuego),	 		
                        NULL);

	gtk_toolbar_append_space((GtkToolbar*)barra);

	iconSugerirJugadaBoton =  gtk_image_new_from_stock(GTK_STOCK_DIALOG_INFO, GTK_ICON_SIZE_SMALL_TOOLBAR);
	sugerirJugadaBoton     =  gtk_toolbar_append_item(GTK_TOOLBAR(barra), 	
                              "Sugerir", 			     	
                              "Pedir a la Computadora una Sugerencia", 		
                              "Privado", 				
                              iconSugerirJugadaBoton, 				
                              G_CALLBACK(sugerirJugada),	 		
                              NULL);

	iconGirarTableroBoton  =  gtk_image_new_from_stock(GTK_STOCK_REFRESH, GTK_ICON_SIZE_SMALL_TOOLBAR);
	girarTableroBoton      =  gtk_toolbar_append_item(GTK_TOOLBAR(barra), 	
                              "Tablero", 			     	
                              "Girar la horientación del tablero", 		
                              "Privado", 				
                              iconGirarTableroBoton, 				
                              G_CALLBACK(cambiarLadoTablero),	 		
                              NULL);

	gtk_toolbar_append_space((GtkToolbar*)barra);

	iconRendirseBoton =  gtk_image_new_from_stock(GTK_STOCK_DIALOG_WARNING, GTK_ICON_SIZE_SMALL_TOOLBAR);
	rendirseBoton 	  =  gtk_toolbar_append_item(GTK_TOOLBAR(barra), 	/* nuestra barra de herramientas */
                              "Rendirse", 			     		/* etiqueta del botón */
                              "Rendirse y Aceptar la Derrota", 			/* descripción de este botón */
                              "Privado", 					/* tooltip información privada */
                              iconRendirseBoton, 				/* icono del widget */
                              G_CALLBACK(rendirse),	 			/* señal */
                              NULL);

	g_signal_connect(G_OBJECT(window),       "destroy"		,  G_CALLBACK(salir_destroy),		NULL);
	g_signal_connect(G_OBJECT(window),       "window_state_event"	,  G_CALLBACK(estadoWindow),		NULL);
	g_signal_connect(G_OBJECT(window), 	 "key_press_event"	,  G_CALLBACK(key_pressed_main),    	NULL);
	g_signal_connect(G_OBJECT(primeroBoton), "clicked"		,  G_CALLBACK(historialPrimero), 	NULL);
	g_signal_connect(G_OBJECT(atrasBoton),	 "clicked"		,  G_CALLBACK(historialAtras),    	NULL);
	g_signal_connect(G_OBJECT(adelanteBoton),"clicked"		,  G_CALLBACK(historialAdelante), 	NULL);
	g_signal_connect(G_OBJECT(ultimoBoton),  "clicked"		,  G_CALLBACK(historialUltimo), 	NULL);

//	GTK_WIDGET_SET_FLAGS (area, GTK_CAN_FOCUS);
 	gtk_widget_set_can_focus(area, TRUE);	 
	gtk_widget_add_events(area, GDK_BUTTON_PRESS_MASK  	 |
		                    GDK_BUTTON_MOTION_MASK 	 |
				    GDK_POINTER_MOTION_MASK 	 |
				    GDK_POINTER_MOTION_HINT_MASK |
				    GDK_LEAVE_NOTIFY_MASK	 |
				    GDK_CONFIGURE		 |
		                    GDK_KEY_PRESS_MASK);

	g_signal_connect(G_OBJECT(area), "configure_event",     G_CALLBACK(fconfigure),      NULL);
	g_signal_connect(G_OBJECT(area), "leave_notify_event",  G_CALLBACK(leave_notify),   NULL);
	g_signal_connect(G_OBJECT(area), "button_press_event",  G_CALLBACK(button_pressed), NULL);
	g_signal_connect(G_OBJECT(area), "motion_notify_event", G_CALLBACK(motion_notify),  NULL);
	g_signal_connect(G_OBJECT(area), "key_press_event",     G_CALLBACK(key_pressed),    NULL);
	g_signal_connect(G_OBJECT(area), "expose_event",        G_CALLBACK(expose_event),   NULL);
	
	gtk_box_pack_start(GTK_BOX(box1), menubar, FALSE, TRUE, 0);
	gtk_widget_show(menubar); 

	gtk_box_pack_start(GTK_BOX(box1), barra, FALSE, FALSE, 0);
	gtk_widget_show(barra); 

//Panel Notificacion
	gtk_box_pack_start(GTK_BOX(boxNotificacion), labelNotificacion1, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(boxNotificacion), labelNotificacion2, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(boxPanelNotificacion), iconNotificacion, FALSE,FALSE, 5);
	gtk_box_pack_start(GTK_BOX(boxPanelNotificacion), boxNotificacion, FALSE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(box1), boxPanelNotificacion, FALSE, FALSE, 0);

//Panel Practica

	botonAgregarPieza 	= gtk_button_new_from_stock(GTK_STOCK_ADD);
	botonComenzarPractica 	= gtk_button_new_from_stock(GTK_STOCK_APPLY);
	botonCancelarPractica	= gtk_button_new_from_stock(GTK_STOCK_CANCEL);
	botonBorrarPieza	= gtk_button_new_from_stock(GTK_STOCK_REMOVE);
	botonGirarPractica	= gtk_button_new_with_label("Tablero");
	imgenGirar 		= gtk_image_new_from_stock(GTK_STOCK_REFRESH, GTK_ICON_SIZE_BUTTON);
	gtk_button_set_image(GTK_BUTTON(botonGirarPractica), imgenGirar);

	g_signal_connect(G_OBJECT(botonGirarPractica), "clicked", G_CALLBACK(cambiarLadoTablero), NULL);

	labelTipoPieza			= gtk_label_new("Tipo Pieza: ");
	gtk_misc_set_alignment(GTK_MISC(labelTipoPieza),1,0);

	labelColorBando			= gtk_label_new("Color Pieza: ");
	gtk_misc_set_alignment(GTK_MISC(labelColorBando),1,0);

	labelUbicacion			= gtk_label_new("Ubicación Pieza: ");
	gtk_misc_set_alignment(GTK_MISC(labelUbicacion),1,0);

	labelBandoJugarPractica		= gtk_label_new("1ra Jugada: ");
	gtk_misc_set_alignment(GTK_MISC(labelBandoJugarPractica),1,0);

	labelTipoOponentePractica	= gtk_label_new("Oponente: ");
	gtk_misc_set_alignment(GTK_MISC(labelTipoOponentePractica),1,0);

	labelColorTuBando		= gtk_label_new("Tu Bando: ");
	gtk_misc_set_alignment(GTK_MISC(labelColorTuBando),1,0);

	labelAgregarPractica		= gtk_label_new("");

	comboTipoPieza		= gtk_combo_box_new_text();
	comboColorBando		= gtk_combo_box_new_text();
	comboUbicacion		= gtk_combo_box_new_text();
	comboOponentePractica   = gtk_combo_box_new_text();
	comboColorInicioPractica= gtk_combo_box_new_text();
	comboColorTuBando	= gtk_combo_box_new_text();

	vboxlabel1		= gtk_vbox_new(TRUE,  0);
	vboxlabel2		= gtk_vbox_new(TRUE,  0);
	vboxcombos1		= gtk_vbox_new(TRUE,  0);
	vboxcombos2		= gtk_vbox_new(TRUE,  0);
	hboxlabelcombo		= gtk_hbox_new(TRUE,  0);
	hboxbotones1		= gtk_hbox_new(TRUE,  0);
	boxTabla		= gtk_table_new(1,6, TRUE); 
	hseparador		= gtk_hseparator_new();

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoPieza), "Rey");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoPieza), "Peón");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoPieza), "Torre");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoPieza), "Caballo");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoPieza), "Alfil");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoPieza), "Dama");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoPieza), "Escaque Vacío");

	gtk_combo_box_set_active(GTK_COMBO_BOX(comboTipoPieza),0); 

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboColorBando), "Blanco");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboColorBando), "Negro");
	gtk_combo_box_set_active(GTK_COMBO_BOX(comboColorBando),0);

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboColorInicioPractica), "Blancas");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboColorInicioPractica), "Negras");
	gtk_combo_box_set_active(GTK_COMBO_BOX(comboColorInicioPractica),0);

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboColorTuBando), "Blancas");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboColorTuBando), "Negras");
	gtk_combo_box_set_active(GTK_COMBO_BOX(comboColorTuBando),0);

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboOponentePractica), "Humano");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboOponentePractica), "Juego Rapido");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboOponentePractica), "Facil");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboOponentePractica), "Medio");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboOponentePractica), "Fuerte");

	gtk_combo_box_set_active(GTK_COMBO_BOX(comboOponentePractica),0);

	int i=0;
	char arrayNotaAlg[3];
	bzero(arrayNotaAlg,sizeof(char)*3);

	for (;i<64;i++)
	{
		arrayNotaAlg[0] = NUM2ALG[i][0];
		arrayNotaAlg[1] = NUM2ALG[i][1];
		gtk_combo_box_append_text(GTK_COMBO_BOX(comboUbicacion), arrayNotaAlg);
	}

	gtk_combo_box_set_active(GTK_COMBO_BOX(comboUbicacion),0);
//panel 2
	gtk_box_pack_start(GTK_BOX(vboxlabel1), labelTipoPieza, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxlabel1), labelColorBando, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxlabel1), labelUbicacion, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxlabel1), labelAgregarPractica, FALSE, FALSE, 1);

	gtk_box_pack_start(GTK_BOX(vboxcombos1), comboTipoPieza, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxcombos1), comboColorBando, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxcombos1), comboUbicacion, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(hboxbotones1), botonAgregarPieza, TRUE, TRUE, 1);
	gtk_box_pack_start(GTK_BOX(hboxbotones1), botonBorrarPieza, TRUE, TRUE, 1);
	gtk_box_pack_start(GTK_BOX(vboxcombos1), hboxbotones1, FALSE, FALSE, 1);

	gtk_box_pack_start(GTK_BOX(vboxlabel2), labelColorTuBando, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxlabel2), labelTipoOponentePractica, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxlabel2), labelBandoJugarPractica, FALSE, FALSE, 1);

	gtk_box_pack_start(GTK_BOX(vboxcombos2), comboColorTuBando, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxcombos2), comboOponentePractica, FALSE, FALSE, 1);
	gtk_box_pack_start(GTK_BOX(vboxcombos2), comboColorInicioPractica, FALSE, FALSE, 1);

	gtk_box_pack_start(GTK_BOX(hboxlabelcombo), vboxlabel1, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(hboxlabelcombo), vboxcombos1, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(hboxlabelcombo), vboxlabel2, FALSE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(hboxlabelcombo), vboxcombos2, FALSE, FALSE, 0);

	gtk_table_set_col_spacing(GTK_TABLE(boxTabla),0,2);
	gtk_table_set_col_spacing(GTK_TABLE(boxTabla),4,2);
	gtk_table_set_col_spacing(GTK_TABLE(boxTabla),5,2);
	gtk_table_attach_defaults(GTK_TABLE(boxTabla),botonGirarPractica,0,1,0,1);
	gtk_table_attach_defaults(GTK_TABLE(boxTabla),botonComenzarPractica,4,5,0,1);
	gtk_table_attach_defaults(GTK_TABLE(boxTabla),botonCancelarPractica,5,6,0,1);
	
	gtk_box_pack_start(GTK_BOX(boxPanelPractica), hboxlabelcombo, TRUE, TRUE, 0);
	gtk_box_pack_start(GTK_BOX(boxPanelPractica), hseparador, TRUE, TRUE, 4);
	gtk_box_pack_start(GTK_BOX(boxPanelPractica), boxTabla, TRUE, TRUE, 2);

	gtk_box_pack_start(GTK_BOX(box1), boxPanelPractica, FALSE, FALSE, 0);

//Ensamblaje de Todo
	gtk_box_pack_start(GTK_BOX(box1), area, TRUE, TRUE, 0);
	gtk_widget_show(area); 

	gtk_box_pack_start(GTK_BOX(box_bajo), primeroBoton, FALSE, FALSE, 0);
	gtk_widget_show(primeroBoton); 

	gtk_box_pack_start(GTK_BOX(box_bajo), atrasBoton, FALSE, FALSE, 0);
	gtk_widget_show(atrasBoton); 

	gtk_box_pack_start(GTK_BOX(box_bajo), adelanteBoton, FALSE, FALSE, 0);
	gtk_widget_show(adelanteBoton); 

	gtk_box_pack_start(GTK_BOX(box_bajo), ultimoBoton, FALSE, FALSE, 0);
	gtk_widget_show(ultimoBoton); 

	gtk_box_pack_start(GTK_BOX(box_combo), combolista, TRUE, TRUE, 0);
	gtk_widget_show(combolista); 

	gtk_box_pack_start(GTK_BOX(box_bajo), box_combo, TRUE, TRUE, 0);
	gtk_widget_show(box_combo);

	gtk_box_pack_start(GTK_BOX(box_bajo), labelMaterial, FALSE, FALSE, 0);
	gtk_widget_show(labelMaterial); 

	gtk_box_pack_start(GTK_BOX(boxLabelTiempo), labelTiempoBlancas, FALSE, FALSE, 2);
	gtk_box_pack_start(GTK_BOX(boxLabelTiempo), labelTiempoNegras, FALSE, FALSE, 2);

 	gtk_box_pack_start(GTK_BOX(box_bajo), boxLabelTiempo, FALSE, FALSE, 1);

	gtk_box_pack_start(GTK_BOX(box1), box_bajo, FALSE, FALSE, 0);
	gtk_widget_show(box_bajo); 

	gtk_container_add(GTK_CONTAINER(window), box1);

	gtk_widget_show_all(window);  
	gtk_widget_hide(boxPanelNotificacion);
	gtk_widget_hide(boxLabelTiempo); 
	gtk_widget_hide(boxPanelPractica);

	gtk_combo_box_append_text(GTK_COMBO_BOX(combolista), "Inicio del Juego");
	gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), 0);

	bloqueado 		= FALSO;
	ultimaPosInicial	= SIN_POS_VALIDAS;
	ultimaPosFinal		= SIN_POS_VALIDAS;

	if (cargarUltimoEstado())
	{
		cargar_vpiezas_IG();
		cargar_vpiezas();

		if (objInterface.usarDiccionario)
		{
			objInterface.usarDiccionario = FALSO;
			gtk_check_menu_item_set_active(
				GTK_CHECK_MENU_ITEM(gtk_item_factory_get_item(item_factory,"/Juego/Diccionario")),TRUE);
		} else {
			usarLibroAperturas = FALSO;
		}

		if (objInterface.verBarraHerramientas)
		{
			objInterface.verBarraHerramientas = FALSO;
			gtk_check_menu_item_set_active(
				GTK_CHECK_MENU_ITEM(gtk_item_factory_get_item(item_factory,"/Ver/Barra Herramientas")),TRUE);
		} else {
			gtk_widget_hide(barra);
		}

		if (objInterface.verBarraHistorial)
		{
			objInterface.verBarraHistorial = FALSO;
			gtk_check_menu_item_set_active(
				GTK_CHECK_MENU_ITEM(gtk_item_factory_get_item(item_factory,"/Ver/Barra Historial")),TRUE);
		} else {
			gtk_widget_hide(box_bajo);
		}

		gtk_window_resize(GTK_WINDOW(window), objInterface.anchoVentana, objInterface.altoVentana);
		if (objInterface.verNotacion)
		{
			objInterface.verNotacion = FALSO;
			gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(numeracionTableBoton), VERDADERO);
		}

		if (objInterface.verAyuda)
		{
			objInterface.verAyuda = FALSO;
			gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(ayudaColorBoton), VERDADERO);
		}

		if (objInterface.oirSonido)
		{
			objInterface.oirSonido = FALSO;
			gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(oirBoton), VERDADERO);
		}

		if (objInterface.oirAccesibilidad)
		{
			objInterface.oirAccesibilidad = FALSO;
			gtk_check_menu_item_set_active(
				GTK_CHECK_MENU_ITEM(gtk_item_factory_get_item(item_factory,"/Ajustes/Voz Accesibilidad")),TRUE);
		}

		switch (objInterface.estadoWindow)
		{
			case GDK_WINDOW_STATE_FULLSCREEN: gtk_window_fullscreen(GTK_WINDOW(window));break;
			case GDK_WINDOW_STATE_MAXIMIZED : gtk_window_maximize(GTK_WINDOW(window));break;
		};

		objInterface.esPorTiempo = FALSO;

		if (objInterface.esCargaJuego)
		{
		    	abrirArchivoPGN(objInterface.nombreArchivoPGN);
			if (esFalloAbrir)
			{
				objInterface.esCargaJuego = FALSO;
				objInterface.indexJugada = 0;
				bzero(objInterface.nombreArchivoPGN, LARGO_RUTAPIEZA);
				objInterface.tipoJuego	= TIPO_JUEGO_HUMANO_HUMANO;

			}
		} else {
			objInterface.indexJugada = 0;
			bzero(objInterface.nombreArchivoPGN, LARGO_RUTAPIEZA);
		}

	} else {

		objInterface.numeroMagico1 		= 0xCAFE;
		objInterface.numeroMagico2 		= 0xB071;
		objInterface.estadoWindow		= 0;
		objInterface.indexJugada 		= 0;
		objInterface.tiempoBlancas		= 0;
		objInterface.tiempoNegras		= 0;
		objInterface.Lado2Jugar 		= LADO_BLANCO;
		objInterface.verBarraHerramientas 	= FALSO;
		objInterface.verBarraHistorial 		= FALSO;
		objInterface.Lado2JugarPreferencia	= LADO_BLANCO;
		objInterface.tipoJuego			= TIPO_JUEGO_HUMANO_PC;
		objInterface.tipoPiezas			= TIPO_PIEZA_NORMAL;
		objInterface.esVisiblePanelNotificacion	= FALSO;
		objInterface.esPorTiempo		= FALSO;
		objInterface.esCargaJuego		= FALSO;
		bzero(mensajePanel1,100);
		bzero(mensajePanel2,100);
		bzero(objInterface.nombreArchivoPGN, LARGO_RUTAPIEZA);
						 
		cargar_vpiezas_IG();
		cargar_vpiezas();

		gtk_check_menu_item_set_active(
			GTK_CHECK_MENU_ITEM(gtk_item_factory_get_item(item_factory,"/Ver/Barra Herramientas")),TRUE);
		gtk_check_menu_item_set_active(
			GTK_CHECK_MENU_ITEM(gtk_item_factory_get_item(item_factory,"/Ver/Barra Historial")),TRUE);
		gtk_check_menu_item_set_active(
			GTK_CHECK_MENU_ITEM(gtk_item_factory_get_item(item_factory,"/Juego/Diccionario")),TRUE);

		gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(oirBoton), 	      VERDADERO);
		gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(numeracionTableBoton), VERDADERO);
		gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(ayudaColorBoton),      VERDADERO);
	}

	if ((objInterface.tipoPiezas==TIPO_PIEZA_NORMAL) || (objInterface.tipoPiezas==TIPO_PIEZA_CLASICO))
		esMiniEstado = FALSO;
	else
		esMiniEstado = VERDADERO;

	menuConsejo(NULL,NULL);
	gtk_main ();
	return 0;
}

void cargarTituloVentana()
{
	int largoTitulo = LARGO_CAMPOS_STR+24;
	char temporal[largoTitulo];  
	bzero(temporal,largoTitulo);
	strcpy(temporal, "Mango Paola - ");
	strncat(temporal, strNombreJuego,LARGO_CAMPOS_STR-1);
	gtk_window_set_title(GTK_WINDOW(window), temporal);
}

static gboolean comboBoxCambio()
{
	int indexJugadaTemporal	= gtk_combo_box_get_active(GTK_COMBO_BOX(combolista));

	desplazamiento 	= objInterface.indexJugada - indexJugadaTemporal;
	objInterface.indexJugada   	= indexJugadaTemporal;

	if (objInterface.indexJugada==0)
	{
		gtk_widget_set_sensitive(primeroBoton, FALSE);
		gtk_widget_set_sensitive(atrasBoton,   FALSE);

	} 

	if (objInterface.indexJugada==juego.totalMov)
	{
		gtk_widget_set_sensitive(adelanteBoton, FALSE);
		gtk_widget_set_sensitive(ultimoBoton,   FALSE);
	}

	if (objInterface.indexJugada > 0)  
	{
		gtk_widget_set_sensitive(primeroBoton, TRUE);
		gtk_widget_set_sensitive(atrasBoton,   TRUE);
	}


	if (objInterface.indexJugada < juego.totalMov) 
	{
		gtk_widget_set_sensitive(adelanteBoton, TRUE);
		gtk_widget_set_sensitive(ultimoBoton,   TRUE);
	}

	if (numPosOrigen != SIN_POS_VALIDAS)
	{
		borrarAyudaColor();
		numPosOrigen = SIN_POS_VALIDAS;
	}
	
	if (!NOpintarTableroSelectivo)
	{
		pintarTableroSelectivo();
	}

	NOpintarTableroSelectivo = FALSO;

	return TRUE;
}

static gboolean historialPrimero()
{
	if (!bloqueado)
	{
		gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), 0);
		pintarTablero();
		dibujarPiezas();
	}

	return TRUE;

}

static gboolean historialAtras()
{
	if (!bloqueado)
	{
		bloqueado = TRUE;
		NOpintarTableroSelectivo = VERDADERO;
		direccionMovimiento = MOV_ATRAS;

		desplazarPieza(OBT_MOV_DESTINO(juego.historicoJuego[objInterface.indexJugada-1].mov), 
			       OBT_MOV_ORIGEN(juego.historicoJuego[objInterface.indexJugada-1].mov));
		gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), objInterface.indexJugada-1);

	}

	return TRUE;
}

static gboolean historialAdelante()
{
	if (!bloqueado)
	{
		bloqueado = TRUE;
		NOpintarTableroSelectivo = VERDADERO;
		desplazarPieza(OBT_MOV_ORIGEN(juego.historicoJuego[objInterface.indexJugada].mov), 
			       OBT_MOV_DESTINO(juego.historicoJuego[objInterface.indexJugada].mov));
		gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), objInterface.indexJugada+1);
	}

	return TRUE;
}

static gboolean historialUltimo()
{

	if (!bloqueado)
	{
		gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), juego.totalMov);
		pintarTablero();
		dibujarPiezas();
	}

	return TRUE;
}

void mostrarPanelNotificacion(char *titulo, char *antetitulo)
{
	char *markup;
	markup = g_markup_printf_escaped("<span weight=\"bold\" size=\"large\">%s</span>", titulo);
	gtk_label_set_markup(GTK_LABEL(labelNotificacion1), markup);

	markup = g_markup_printf_escaped("<span color=\"#8D0E0E\" style=\"italic\">%s</span>", antetitulo);
	gtk_label_set_markup(GTK_LABEL(labelNotificacion2), markup);
	g_free (markup);
	gtk_widget_show(boxPanelNotificacion); 

	objInterface.esVisiblePanelNotificacion = VERDADERO;
	strncpy(mensajePanel1,titulo,100);
	strncpy(mensajePanel2,antetitulo,100);
}

static gboolean procesarTiempoJuego()
{
	if (banderaFinalizarTiempoJuegoAUX)
	{
		banderaFinalizarTiempoJuegoAUX 	= FALSO;
		return FALSO;
	}

	if (banderaFinalizarTiempoJuego)
	{
		banderaFinalizarTiempoJuego    	= FALSO;
		return FALSO;
	}

	if (STATUS_FIN_JUEGO_TERMINADO)
	{
		return FALSO;
	}

	if (juego.colorTurno == BLANCO)
	{
	
		if (esTiempoForzado)
		{
			objInterface.tiempoBlancas -=((int)((obt_sysmsTiempo()-tinicial)/1000));
			esTiempoForzado = FALSO;
		} else {
			objInterface.tiempoBlancas--;	
		}

		if (objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO)
		{
			corregirMaxTiempo(objInterface.tiempoBlancas);
		}		

		tiempo = (time_t)objInterface.tiempoBlancas; 
		tmptr = localtime(&tiempo);
		strftime(tt,80,"%H:%M:%S",tmptr);

		strMaquillado = g_markup_printf_escaped("<span  background=\"white\" foreground=\"black\" weight=\"bold\" size=\"xx-large\">%s</span>",tt);
		gtk_label_set_markup(GTK_LABEL(labelTiempoBlancas), strMaquillado);
		if (objInterface.tiempoBlancas <= tiempoBase)
		{
			if (objInterface.oirSonido)
				resulSystem = system(strAplay_rendirse);

			statusFinJuego = STATUS_FIN_JUEGO_MATE_GANAN_N;
			mostrarPanelNotificacion("Ganan las Negras","El jugador con las blancas ha agotado su tiempo");

			return FALSO;
		}

	} else {

		if (esTiempoForzado)
		{
			objInterface.tiempoNegras -=((int)((obt_sysmsTiempo()-tinicial)/1000));
			esTiempoForzado = FALSO;
		} else {	
	
			objInterface.tiempoNegras--;
		}

		if (objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC)
		{
			corregirMaxTiempo(objInterface.tiempoNegras);
		}		

		tiempo = (time_t)objInterface.tiempoNegras; 
		tmptr = localtime(&tiempo);
		strftime(tt,80,"%H:%M:%S",tmptr);

		strMaquillado = g_markup_printf_escaped("<span  background=\"black\" foreground=\"white\" weight=\"bold\" size=\"xx-large\">%s</span>",tt);
		gtk_label_set_markup(GTK_LABEL(labelTiempoNegras), strMaquillado);
		if (objInterface.tiempoNegras <= tiempoBase)
		{
			if (objInterface.oirSonido)
				resulSystem = system(strAplay_rendirse);

			statusFinJuego = STATUS_FIN_JUEGO_MATE_GANAN_B;
			mostrarPanelNotificacion("Ganan las Blancas","El jugador con las negras ha agotado su tiempo");

			return FALSO;
		}
	}

	return VERDADERO;
}

void comenzarTiempoJuego(unsigned int tBlancas, unsigned int tNegras)
{
	if (objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC)
	{
		corregirMaxTiempo(tNegras-tiempoBase);

	} else if (objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO) {

		corregirMaxTiempo(tBlancas-tiempoBase);
	}

	objInterface.esPorTiempo			= VERDADERO;
	objInterface.tiempoNegras			= tNegras;
	objInterface.tiempoBlancas			= tBlancas;
	banderaFinalizarTiempoJuego 			= FALSO;

	gtk_widget_show(boxLabelTiempo); 

	tiempo = (time_t)objInterface.tiempoBlancas; 
	tmptr = localtime(&tiempo);
	strftime(tt,80,"%H:%M:%S",tmptr);

	strMaquillado = g_markup_printf_escaped("<span  background=\"white\" foreground=\"black\" weight=\"bold\" size=\"xx-large\">%s</span>",tt);
	gtk_label_set_markup(GTK_LABEL(labelTiempoBlancas), strMaquillado);

	
	tiempo = (time_t)objInterface.tiempoNegras; 
	tmptr = localtime(&tiempo);
	strftime(tt,80,"%H:%M:%S",tmptr);

	strMaquillado = g_markup_printf_escaped("<span  background=\"black\" foreground=\"white\" weight=\"bold\" size=\"xx-large\">%s</span>",tt);
	gtk_label_set_markup(GTK_LABEL(labelTiempoNegras), strMaquillado);
	
	g_timeout_add(1000, (GSourceFunc) procesarTiempoJuego, NULL);
}

void reDibujarTodo()
{
	pintarFondo();
	pintarTablero();

	if (numPosOrigen != SIN_POS_VALIDAS)
		mostrarAyudaColor(); 

	dibujarPiezas();
}

static void menuAcercaDe(GtkWidget *w, gpointer data)
{

	char *markup;

	GtkWidget *labelCreadoPor, *labelTituloT1, *labelDescripcion, *labelDescripcion2, *labelLicencia, *labelVacia,  
		  *labelVacia2, *labelContacto,*labelWeb, *imagenAcercaDe, *vboxGeneral,*content_area;

	labelVacia		= gtk_label_new ("");
	labelVacia2		= gtk_label_new ("");

	labelTituloT1 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"heavy\" size=\"x-large\" >MANGO PAOLA AJEDREZ 2.3</span>");
	gtk_label_set_markup(GTK_LABEL(labelTituloT1), markup);

	labelDescripcion 	= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span>Mango Paola es un excelente motor de ajedrez</span>");
	gtk_label_set_markup(GTK_LABEL(labelDescripcion), markup);

	labelDescripcion2 	= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span>tiene un nivel de ELO de aproximadamente 2500</span>");
	gtk_label_set_markup(GTK_LABEL(labelDescripcion2), markup);

	labelCreadoPor 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span> Copyright © 2011-2013 Morales Linares. José Andrés </span>");
	gtk_label_set_markup(GTK_LABEL(labelCreadoPor), markup);

	labelLicencia 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"bold\" color=\"#7A7A7A\">Licencia: GPLv3</span>");
	gtk_label_set_markup(GTK_LABEL(labelLicencia), markup);

	labelContacto 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"bold\" color=\"#7A7A7A\">comprasmangocomputer@gmail.com</span>");
	gtk_label_set_markup(GTK_LABEL(labelContacto), markup);

	labelWeb 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"bold\" color=\"#7A7A7A\">http://mangocomputerca.blogspot.com</span>");
	gtk_label_set_markup(GTK_LABEL(labelWeb), markup);


	bzero(strArmarRuta, MAX_RUTA_PATH);
	sprintf(strArmarRuta, "%s/imagenes/mangopaola.png",strRutaApp);
	imagenAcercaDe	= gtk_image_new_from_file(strArmarRuta);

	bzero(strArmarRuta, MAX_RUTA_PATH);
	sprintf(strArmarRuta, "%s/imagenes/bandera-de-venezuela.png",strRutaApp);
	vboxGeneral	= gtk_vbox_new(FALSE, 1);

	GtkWidget *ventanaAcercaDe = gtk_dialog_new_with_buttons ("Acerca de Mango Paola",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_OK,
				                 GTK_RESPONSE_OK,
				                 NULL);
	content_area = (GTK_DIALOG(ventanaAcercaDe))->vbox;

	gtk_box_pack_start(GTK_BOX(vboxGeneral), imagenAcercaDe, TRUE, TRUE, 5);
	gtk_widget_show(imagenAcercaDe);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelTituloT1, TRUE, TRUE, 5);
	gtk_widget_show(labelTituloT1);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelDescripcion, TRUE, TRUE, 1);
	gtk_widget_show(labelDescripcion);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelDescripcion2, TRUE, TRUE, 1);
	gtk_widget_show(labelDescripcion2);
	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelVacia, TRUE, TRUE, 1);
	gtk_widget_show(labelVacia);	
		
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelCreadoPor, TRUE, TRUE, 1);
	gtk_widget_show(labelCreadoPor);	

	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelVacia2, TRUE, TRUE, 1);
	gtk_widget_show(labelVacia2);	

	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelLicencia, TRUE, TRUE, 1);
	gtk_widget_show(labelLicencia);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelContacto, TRUE, TRUE, 1);
	gtk_widget_show(labelContacto);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelWeb, TRUE, TRUE, 1);
	gtk_widget_show(labelWeb);	

	gtk_container_add (GTK_CONTAINER(content_area), vboxGeneral);
	gtk_widget_show(vboxGeneral);	

	int respuesta = gtk_dialog_run(GTK_DIALOG(ventanaAcercaDe));
	respuesta++;
	gtk_widget_destroy(ventanaAcercaDe);
	g_free (markup);
}

int pieza2indexCombo(PIEZA pieza)
{
	switch (pieza)
	{
		case TORRE_BLANCO:
		case TORRE_NEGRO:	return 1;break;

		case CABALLO_BLANCO:
		case CABALLO_NEGRO: 	return 2;break;

		case ALFIL_BLANCO:
		case ALFIL_NEGRO: 	return 3;break;

		case DAMA_BLANCO:
		case DAMA_NEGRO: 	return 0;break;
	}

	return 0;
}

PIEZA indexCombo2pieza(int index, int color)
{

	switch (index)
	{
		case 0: return (color==BLANCO?	DAMA_BLANCO:	DAMA_NEGRO);	break;
		case 1: return (color==BLANCO?	TORRE_BLANCO:	TORRE_NEGRO);	break;
		case 2: return (color==BLANCO?	CABALLO_BLANCO:	CABALLO_NEGRO);	break;
		case 3: return (color==BLANCO?	ALFIL_BLANCO:	ALFIL_NEGRO);	break;
	}

	return (color==BLANCO?DAMA_BLANCO:DAMA_NEGRO);
}

static void menuPreferencias(GtkWidget *w, gpointer data)
{
	char *markup;

GtkWidget	*comboCoronacionNegras, *comboCoronacionBlancas, *comboLadoTablero, *labelCoronacionNegras, 
		*labelCoronacionBlancas, *labelLadoTablero, *labelTitulo, *imagenPreferencias, *vboxGeneral, 
		*content_area, *vboxc1,  *hboxcg1, *hboxd11, *hboxd12, *hboxd13;

	labelTitulo 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"heavy\" size=\"x-large\" style=\"italic\">Preferencias del Juego</span>");
	gtk_label_set_markup(GTK_LABEL(labelTitulo), markup);

	labelCoronacionBlancas 	= gtk_label_new("Coronación Blancas:");
	gtk_misc_set_alignment(GTK_MISC(labelCoronacionBlancas),0,1);

	labelCoronacionNegras	= gtk_label_new("Coronación Negras:");
	gtk_misc_set_alignment(GTK_MISC(labelCoronacionNegras),0,1);

	labelLadoTablero	= gtk_label_new("Lado del Tablero:");
	gtk_misc_set_alignment(GTK_MISC(labelLadoTablero),0,1);

	comboCoronacionBlancas	= gtk_combo_box_new_text();
	comboCoronacionNegras	= gtk_combo_box_new_text();
	comboLadoTablero	= gtk_combo_box_new_text();

	imagenPreferencias	= gtk_image_new_from_stock(GTK_STOCK_PREFERENCES, GTK_ICON_SIZE_DIALOG);

	vboxGeneral		= gtk_vbox_new(FALSE, 1);
	vboxc1			= gtk_vbox_new(TRUE,  1);
	hboxcg1			= gtk_hbox_new(FALSE, 1);
	hboxd11			= gtk_hbox_new(TRUE,  1);
	hboxd12			= gtk_hbox_new(TRUE,  1);
	hboxd13			= gtk_hbox_new(TRUE,  1);

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboCoronacionBlancas), "Dama");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboCoronacionBlancas), "Torre");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboCoronacionBlancas), "Caballo");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboCoronacionBlancas), "Alfil");
	gtk_combo_box_set_active(GTK_COMBO_BOX(comboCoronacionBlancas),pieza2indexCombo(PROMOCION[BLANCO])); 

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboCoronacionNegras), "Dama");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboCoronacionNegras), "Torre");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboCoronacionNegras), "Caballo");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboCoronacionNegras), "Alfil");
	gtk_combo_box_set_active(GTK_COMBO_BOX(comboCoronacionNegras),pieza2indexCombo(PROMOCION[NEGRO])); 

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboLadoTablero), "Cambio Automático");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboLadoTablero), "Lado Blanco");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboLadoTablero), "Lado Negro");
	gtk_combo_box_set_active(GTK_COMBO_BOX(comboLadoTablero),
		objInterface.Lado2JugarPreferencia==LADO_BLANCO?1:
		objInterface.Lado2JugarPreferencia==LADO_NEGRO?2:0);

	GtkWidget *ventanaPreferenciasJuego = gtk_dialog_new_with_buttons ("Preferencias del Juego",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_CANCEL,
				                 GTK_RESPONSE_CANCEL,
				                 NULL);
	gtk_dialog_add_button(GTK_DIALOG(ventanaPreferenciasJuego), GTK_STOCK_OK,GTK_RESPONSE_ACCEPT);
	content_area = (GTK_DIALOG(ventanaPreferenciasJuego))->vbox;
// Panel 1
	gtk_box_pack_start(GTK_BOX(hboxd11), labelCoronacionBlancas, TRUE, TRUE, 1);
	gtk_widget_show(labelCoronacionBlancas);	
	gtk_box_pack_start(GTK_BOX(hboxd11), comboCoronacionBlancas, TRUE, TRUE, 1);
	gtk_widget_show(comboCoronacionBlancas);	

	gtk_box_pack_start(GTK_BOX(hboxd12), labelCoronacionNegras, TRUE, TRUE, 1);
	gtk_widget_show(labelCoronacionNegras);	
	gtk_box_pack_start(GTK_BOX(hboxd12), comboCoronacionNegras, TRUE, TRUE, 1);
	gtk_widget_show(comboCoronacionNegras);	

	gtk_box_pack_start(GTK_BOX(hboxd13), labelLadoTablero, TRUE, TRUE, 1);
	gtk_widget_show(labelLadoTablero);	
	gtk_box_pack_start(GTK_BOX(hboxd13), comboLadoTablero, TRUE, TRUE, 1);
	gtk_widget_show(comboLadoTablero);	

	gtk_box_pack_start(GTK_BOX(vboxc1), hboxd11, FALSE, FALSE, 1);
	gtk_widget_show(hboxd11);	
	gtk_box_pack_start(GTK_BOX(vboxc1), hboxd12, FALSE, FALSE, 1);
	gtk_widget_show(hboxd12);	
	gtk_box_pack_start(GTK_BOX(vboxc1), hboxd13, FALSE, FALSE, 1);
	gtk_widget_show(hboxd13);	

	gtk_box_pack_start(GTK_BOX(hboxcg1), imagenPreferencias, FALSE, FALSE, 5);
	gtk_widget_show(imagenPreferencias);	
	gtk_box_pack_start(GTK_BOX(hboxcg1), vboxc1, TRUE, TRUE, 1);
	gtk_widget_show(vboxc1);	
//panel General
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelTitulo, TRUE, TRUE, 1);
	gtk_widget_show(labelTitulo);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), hboxcg1, TRUE, TRUE, 1);
	gtk_widget_show(hboxcg1);	
	gtk_container_add (GTK_CONTAINER(content_area), vboxGeneral);
	gtk_widget_show(vboxGeneral);	

	int respuesta = gtk_dialog_run(GTK_DIALOG(ventanaPreferenciasJuego));

	if (respuesta == GTK_RESPONSE_ACCEPT)
	{
		PROMOCION[BLANCO] = 
				indexCombo2pieza(gtk_combo_box_get_active(GTK_COMBO_BOX(comboCoronacionBlancas)), BLANCO);
		PROMOCION[NEGRO] = 
				indexCombo2pieza(gtk_combo_box_get_active(GTK_COMBO_BOX(comboCoronacionNegras)), NEGRO);

		objInterface.Lado2JugarPreferencia = gtk_combo_box_get_active(GTK_COMBO_BOX(comboLadoTablero));

		if (objInterface.Lado2JugarPreferencia != 0)
		{
			objInterface.Lado2Jugar = (objInterface.Lado2JugarPreferencia == 1 ? LADO_BLANCO : LADO_NEGRO);
			reDibujarTodo();
		}
	}

	gtk_widget_destroy(ventanaPreferenciasJuego);
	g_free (markup);

}

static gboolean nuevo()
{

	char *markup;
	int colorBando;
	int tipoOponente;
	int tiempoJuego;

	GtkWidget *labelTitulo, *labelSubTitulo1, *labelSubTitulo2, *labelNombreJuego, *labelNombreBlanco, 
		  *labelNombreNegro, *labelTipoOponente, *labelColorBando, *labelTiempo, *vboxGeneral, 
		  *comboColorBando, *comboTiempo,*comboTipoOponente, *textBoxNombreJuego,*textBoxNombreBlanco,
		  *textBoxNombreNegro, *imagen1, *imagen2, *content_area, *vboxc1, *vboxc2, *hboxcg1, *hboxcg2, 
		  *hboxd11, *hboxd12, *hboxd13, *hboxd21, *hboxd22, *hboxd23;

	labelTitulo 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"heavy\" size=\"x-large\" style=\"italic\">Crear un Nuevo Juego</span>");
	gtk_label_set_markup(GTK_LABEL(labelTitulo), markup);

	labelSubTitulo1		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"heavy\" size=\"large\" style=\"italic\">  Descripción</span>");
	gtk_label_set_markup(GTK_LABEL(labelSubTitulo1), markup);
	gtk_misc_set_alignment(GTK_MISC(labelSubTitulo1),0,1);

	labelSubTitulo2		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"heavy\" size=\"large\" style=\"italic\">  Preferencias</span>");
	gtk_label_set_markup(GTK_LABEL(labelSubTitulo2), markup);
	gtk_misc_set_alignment(GTK_MISC(labelSubTitulo2),0,1);

	labelNombreJuego 	= gtk_label_new("Nombre del Juego:");
	gtk_misc_set_alignment(GTK_MISC(labelNombreJuego),0,1);

	labelNombreBlanco	= gtk_label_new("Nombre Blancas:");
	gtk_misc_set_alignment(GTK_MISC(labelNombreBlanco),0,1);

	labelNombreNegro	= gtk_label_new("Nombre Negras:");
	gtk_misc_set_alignment(GTK_MISC(labelNombreNegro),0,1);

	labelTipoOponente	= gtk_label_new("Tipo Oponente:");
	gtk_misc_set_alignment(GTK_MISC(labelTipoOponente),0,1);

	labelColorBando		= gtk_label_new("Escoger tu Bando:");
	gtk_misc_set_alignment(GTK_MISC(labelColorBando),0,1);

	labelTiempo		= gtk_label_new("Tiempo de Juego:");
	gtk_misc_set_alignment(GTK_MISC(labelTiempo),0,1);

	comboTipoOponente	= gtk_combo_box_new_text();
	comboColorBando		= gtk_combo_box_new_text();
	comboTiempo		= gtk_combo_box_new_text();

	textBoxNombreJuego	= gtk_entry_new();
	textBoxNombreBlanco	= gtk_entry_new();
	textBoxNombreNegro	= gtk_entry_new();

	imagen1 		= gtk_image_new_from_stock(GTK_STOCK_PROPERTIES, GTK_ICON_SIZE_DIALOG);
	imagen2 		= gtk_image_new_from_stock(GTK_STOCK_PREFERENCES, GTK_ICON_SIZE_DIALOG);

	vboxGeneral		= gtk_vbox_new(FALSE, 1);
	vboxc1			= gtk_vbox_new(TRUE,  1);
	vboxc2			= gtk_vbox_new(TRUE,  1);
	hboxcg1			= gtk_hbox_new(FALSE, 1);
	hboxcg2			= gtk_hbox_new(FALSE, 1);
	hboxd11			= gtk_hbox_new(TRUE,  1);
	hboxd12			= gtk_hbox_new(TRUE,  1);
	hboxd13			= gtk_hbox_new(TRUE,  1);
	hboxd21			= gtk_hbox_new(TRUE,  1);
	hboxd22			= gtk_hbox_new(TRUE,  1);
	hboxd23			= gtk_hbox_new(TRUE,  1);


	gtk_entry_set_max_length(GTK_ENTRY(textBoxNombreJuego),  LARGO_CAMPOS_STR-1); 
	gtk_entry_set_max_length(GTK_ENTRY(textBoxNombreBlanco), LARGO_CAMPOS_STR-1); 
	gtk_entry_set_max_length(GTK_ENTRY(textBoxNombreNegro),  LARGO_CAMPOS_STR-1); 

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Vs Otro Humano");

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 1 Vs Paul Morphy");					// 1 capa
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 2 Vs Paola Morales");				// 2 capa
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 3 Vs Emanuel Lasker");				// 3 capas
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 4 Vs Alexander Alekhine");			// 4 capas
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 5 Vs Luisa Caceres de Arismendi");	// 5 capas
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 6 Vs Túpac Catari");					// 6 capas
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 7 Vs Viswanathan Anand(2seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 8 Vs Daniel Francisco O´Leary(3seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 9 Vs Atahualpa Yupanqui Capac(4seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 10 Vs Mikhail Botvinnik(5seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 11 Vs Zsuzsa Polgar(6seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 12 Vs Ezequiel Zamora(7seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 13 Vs Túpac Amaru(8seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 14 Vs Aleksandra Kosteniuk(9seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 15 Vs Cacique Tiuna(10seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 16 Vs Antonio Jose de Sucre(12seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 17 Vs Anatoly Karpov(14seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 18 Vs Cacique Guaicaipuro(16seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 19 Vs Francisco de Miranda(18seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 20 Vs Vera Menchik-Stevenson(20seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 21 Vs Cacique Catia(22seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 22 Vs Wilhelm Steinitz(24seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 23 Vs Xu Yuhua(26seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 24 Vs Ernesto Che Guevara(28seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 25 Vs Judit Polgar(30seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 26 Vs Rafael Urdaneta(31seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 27 Vs Bobby Fischer(32seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 28 Vs Gari Kaspárov(33seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 29 Vs Raul Capablanca(34seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 30 Vs Simón Bolívar(35seg)");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTipoOponente), "Nivel 31 Vs Dios(40seg)");

	gtk_combo_box_set_active(GTK_COMBO_BOX(comboTipoOponente),0); 

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboColorBando), "Blancas");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboColorBando), "Negras");
	gtk_combo_box_set_active(GTK_COMBO_BOX(comboColorBando),0);

	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "Sin Tiempo");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "5 Minutos");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "15 Minutos");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "30 Minutos");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "45 Minutos");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "1 Hora");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "2 Horas");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "5 Horas");
	gtk_combo_box_append_text(GTK_COMBO_BOX(comboTiempo), "10 Horas");
	gtk_combo_box_set_active(GTK_COMBO_BOX(comboTiempo),0);

	GtkWidget *ventanaNuevoJuego = gtk_dialog_new_with_buttons ("Nuevo Juego",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_CANCEL,
				                 GTK_RESPONSE_CANCEL,
				                 NULL);
	gtk_dialog_add_button(GTK_DIALOG(ventanaNuevoJuego), GTK_STOCK_NEW,GTK_RESPONSE_ACCEPT);
	content_area = (GTK_DIALOG(ventanaNuevoJuego))->vbox;
// Panel 1
	gtk_box_pack_start(GTK_BOX(hboxd11), labelNombreJuego, TRUE, TRUE, 1);
	gtk_widget_show(labelNombreJuego);	
	gtk_box_pack_start(GTK_BOX(hboxd11), textBoxNombreJuego, TRUE, TRUE, 1);
	gtk_widget_show(textBoxNombreJuego);	

	gtk_box_pack_start(GTK_BOX(hboxd12), labelNombreNegro, TRUE, TRUE, 1);
	gtk_widget_show(labelNombreNegro);	
	gtk_box_pack_start(GTK_BOX(hboxd12), textBoxNombreNegro, TRUE, TRUE, 1);
	gtk_widget_show(textBoxNombreNegro);	

	gtk_box_pack_start(GTK_BOX(hboxd13), labelNombreBlanco, TRUE, TRUE, 1);
	gtk_widget_show(labelNombreBlanco);	
	gtk_box_pack_start(GTK_BOX(hboxd13), textBoxNombreBlanco, TRUE, TRUE, 1);
	gtk_widget_show(textBoxNombreBlanco);	

	gtk_box_pack_start(GTK_BOX(vboxc1), hboxd11, FALSE, FALSE, 1);
	gtk_widget_show(hboxd11);	
	gtk_box_pack_start(GTK_BOX(vboxc1), hboxd12, FALSE, FALSE, 1);
	gtk_widget_show(hboxd12);	
	gtk_box_pack_start(GTK_BOX(vboxc1), hboxd13, FALSE, FALSE, 1);
	gtk_widget_show(hboxd13);	

	gtk_box_pack_start(GTK_BOX(hboxcg1), imagen1, FALSE, FALSE, 5);
	gtk_widget_show(imagen1);	
	gtk_box_pack_start(GTK_BOX(hboxcg1), vboxc1, TRUE, TRUE, 1);
	gtk_widget_show(vboxc1);	
//panel 2
	gtk_box_pack_start(GTK_BOX(hboxd21), labelColorBando, TRUE, TRUE, 1);
	gtk_widget_show(labelColorBando);	
	gtk_box_pack_start(GTK_BOX(hboxd21), comboColorBando, TRUE, TRUE, 1);
	gtk_widget_show(comboColorBando);	

	gtk_box_pack_start(GTK_BOX(hboxd22), labelTipoOponente, TRUE, TRUE, 1);
	gtk_widget_show(labelTipoOponente);	
	gtk_box_pack_start(GTK_BOX(hboxd22), comboTipoOponente, TRUE, TRUE, 1);
	gtk_widget_show(comboTipoOponente);	

	gtk_box_pack_start(GTK_BOX(hboxd23), labelTiempo, TRUE, TRUE, 1);
	gtk_widget_show(labelTiempo);	
	gtk_box_pack_start(GTK_BOX(hboxd23), comboTiempo, TRUE, TRUE, 1);
	gtk_widget_show(comboTiempo);	

	gtk_box_pack_start(GTK_BOX(vboxc2), hboxd21, FALSE, FALSE, 1);
	gtk_widget_show(hboxd21);	
	gtk_box_pack_start(GTK_BOX(vboxc2), hboxd22, FALSE, FALSE, 1);
	gtk_widget_show(hboxd22);	
	gtk_box_pack_start(GTK_BOX(vboxc2), hboxd23, FALSE, FALSE, 1);
	gtk_widget_show(hboxd23);	

	gtk_box_pack_start(GTK_BOX(hboxcg2), imagen2, FALSE, FALSE, 5);
	gtk_widget_show(imagen2);	
	gtk_box_pack_start(GTK_BOX(hboxcg2), vboxc2, TRUE, TRUE, 1);
	gtk_widget_show(vboxc2);	
//panel General
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelTitulo, TRUE, TRUE, 1);
	gtk_widget_show(labelTitulo);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelSubTitulo1, TRUE, TRUE, 5);
	gtk_widget_show(labelSubTitulo1);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), hboxcg1, TRUE, TRUE, 1);
	gtk_widget_show(hboxcg1);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelSubTitulo2, TRUE, TRUE, 5);
	gtk_widget_show(labelSubTitulo2);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), hboxcg2, TRUE, TRUE, 1);
	gtk_widget_show(hboxcg2);	

	gtk_container_add (GTK_CONTAINER(content_area), vboxGeneral);
	gtk_widget_show(vboxGeneral);	

	int respuesta = gtk_dialog_run(GTK_DIALOG(ventanaNuevoJuego));

//*********************************************************************************

	if (respuesta == GTK_RESPONSE_ACCEPT)
	{

		memset(juego.historicoJuego, 0, sizeof(DATAJUEGO)*MAX_BUFF_MOV);

		if (objInterface.esPorTiempo)
		{
			gtk_widget_hide(boxLabelTiempo);
			if (STATUS_FIN_JUEGO_NO_TERMINADO)
			{
				banderaFinalizarTiempoJuegoAUX = VERDADERO;
			}
		}

		int i, totalMovTmp = juego.totalMov;

		nuevo_juego();

		objInterface.indexJugada  = 0;
		objInterface.esCargaJuego = FALSO;
		objInterface.esPorTiempo  = FALSO;
		numPosOrigen 		  = SIN_POS_VALIDAS;
		ultimaPosInicial	  = SIN_POS_VALIDAS;
		ultimaPosFinal		  = SIN_POS_VALIDAS;

		colorBando 		  = gtk_combo_box_get_active(GTK_COMBO_BOX(comboColorBando));
		tipoOponente		  = gtk_combo_box_get_active(GTK_COMBO_BOX(comboTipoOponente));
		tiempoJuego		  = gtk_combo_box_get_active(GTK_COMBO_BOX(comboTiempo));

		objInterface.Lado2Jugar   = colorBando ? LADO_NEGRO: LADO_BLANCO; 
		objInterface.Lado2JugarPreferencia = objInterface.Lado2Jugar; 

		if (strlen(objInterface.nombreArchivoPGN))
		{
			bzero(objInterface.nombreArchivoPGN, LARGO_RUTAPIEZA);
		}

		if (objInterface.esVisiblePanelNotificacion)
		{
			objInterface.esVisiblePanelNotificacion = FALSO;
			gtk_widget_hide(boxPanelNotificacion);
		}

		if (tipoOponente == 0)
		{
			objInterface.tipoJuego	= TIPO_JUEGO_HUMANO_HUMANO;

		} else {

			if (colorBando==0)
			{
				objInterface.tipoJuego	= TIPO_JUEGO_HUMANO_PC;

			} else {

				objInterface.tipoJuego	= TIPO_JUEGO_PC_HUMANO;
			}
			//Establecer nivel de la pc
			if (tipoOponente==1)
			{
				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 1;
				nivelPC 			= PC_NIVEL_1;

			} else if (tipoOponente==2) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 2;
				nivelPC 			= PC_NIVEL_2;

			} else if (tipoOponente==3) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 3;
				nivelPC 			= PC_NIVEL_3;

			} else if (tipoOponente==4) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 4;
				nivelPC 			= PC_NIVEL_4;

			} else if (tipoOponente==5) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 5;
				nivelPC 			= PC_NIVEL_5;

			} else if (tipoOponente==6) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 6;
				nivelPC 			= PC_NIVEL_6;

			} else if (tipoOponente==7) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_7;

			} else if (tipoOponente==8) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_8;
			} else if (tipoOponente==9) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_9;

			} else if (tipoOponente==10) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_10;

			} else if (tipoOponente==11) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_11;

			} else if (tipoOponente==12) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_12;

			} else if (tipoOponente==13) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_13;

			} else if (tipoOponente==14) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_14;

			} else if (tipoOponente==15) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_15;

			} else if (tipoOponente==16) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_16;

			} else if (tipoOponente==17) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_17;
			} else if (tipoOponente==18) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_18;

			} else if (tipoOponente==19) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_19;

			} else if (tipoOponente==20) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_20;

			} else if (tipoOponente==21) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_21;

			} else if (tipoOponente==22) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_22;

			} else if (tipoOponente==23) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_23;

			} else if (tipoOponente==24) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_24;

			} else if (tipoOponente==25) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_25;

			} else if (tipoOponente==26) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_26;

			} else if (tipoOponente==27) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_27;

			} else if (tipoOponente==28) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_28;

			} else if (tipoOponente==29) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_29;

			} else if (tipoOponente==30) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_30;

			} else if (tipoOponente==31) {

				juego.maxTiempo 		= pcNivel2int[tipoOponente];
				juego.profundidadBusquedad	= 98;
				nivelPC 			= PC_NIVEL_31;
			}

		}

		strcpy(strNombreJuego,gtk_entry_get_text(GTK_ENTRY(textBoxNombreJuego))); 
		strcpy(strNombreBlancas,gtk_entry_get_text(GTK_ENTRY(textBoxNombreBlanco))); 
		strcpy(strNombreNegras,gtk_entry_get_text(GTK_ENTRY(textBoxNombreNegro))); 


		if (strlen(strNombreJuego) == 0)
		{
			char tnombre[256];
			bzero(tnombre,256);

			if (objInterface.tipoJuego==TIPO_JUEGO_HUMANO_PC)
			{
				if (strlen(strNombreBlancas))
				{
					sprintf(tnombre, "%s Vs %s",strNombreBlancas, nombresRivales[tipoOponente]);
				} else {
					sprintf(tnombre, "Humano Vs %s",nombresRivales[tipoOponente]);
				}
				strncpy(strNombreJuego,tnombre,LARGO_CAMPOS_STR-1);

			} else if (objInterface.tipoJuego==TIPO_JUEGO_PC_HUMANO) {

				if (strlen(strNombreNegras))
				{
					sprintf(tnombre, "%s Vs %s",nombresRivales[tipoOponente], strNombreNegras);

				} else {
					sprintf(tnombre, "%s Vs Humano",nombresRivales[tipoOponente]);
				}
				strncpy(strNombreJuego,tnombre,LARGO_CAMPOS_STR-1);

			} else if (objInterface.tipoJuego==TIPO_JUEGO_HUMANO_HUMANO) {

				strcpy(strNombreJuego,"Humano Vs Humano");
			}
		}		

		char temporal[LARGO_CAMPOS_STR+24];  
		strcpy(temporal, "Mango Paola - ");
		strncat(temporal,strNombreJuego,LARGO_CAMPOS_STR-1);
		gtk_window_set_title(GTK_WINDOW(window), temporal);

//		strcpy(strNombreBlancas,gtk_entry_get_text(GTK_ENTRY(textBoxNombreBlanco))); 
		if (strlen(strNombreBlancas) == 0)
		{
			if (objInterface.tipoJuego==TIPO_JUEGO_PC_HUMANO)
				strcpy(strNombreBlancas,nombresRivales[tipoOponente]);
			else
				strcpy(strNombreBlancas,"Blancas"); 
		}		

//		strcpy(strNombreNegras,gtk_entry_get_text(GTK_ENTRY(textBoxNombreNegro))); 
		if (strlen(strNombreNegras) == 0)
		{
			if (objInterface.tipoJuego==TIPO_JUEGO_HUMANO_PC)
				strcpy(strNombreNegras,nombresRivales[tipoOponente]);
			else
				strcpy(strNombreNegras,"Negras"); 
		}	

		gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), 0);
		for (i=0;i<totalMovTmp;i++)
			gtk_combo_box_remove_text(GTK_COMBO_BOX(combolista), 1); 

		gtk_widget_set_sensitive(primeroBoton, FALSE);
		gtk_widget_set_sensitive(atrasBoton,   FALSE);
		gtk_widget_set_sensitive(adelanteBoton, FALSE);
		gtk_widget_set_sensitive(ultimoBoton,   FALSE);

		reDibujarTodo();

		strMaquillado = g_markup_printf_escaped(
		 "<span background=\"#0D3C05\" weight=\"bold\" size=\"large\"><span color=\"#7A7A7A\"> Eval:%d </span><span color=\"#000000\"> Mat:%d </span></span>",
	  	 evaluacionTablero(-INFINITO,INFINITO),
		 (juego.colorTurno?-juego.material_total:juego.material_total));
		gtk_label_set_markup(GTK_LABEL(labelMaterial), strMaquillado);

		if (tiempoJuego != 0)
		{
			int tt 				= obtener_tiempoJuego(tiempoJuego);
			controlTiempo 			= tt;
			comenzarTiempoJuego(tiempoBase+tt,tiempoBase+tt);
		} 

		if (objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO) 
			crearJugadaPC();
	}

	gtk_widget_destroy(ventanaNuevoJuego);
	g_free (markup);


	return TRUE;
}

int obtener_tiempoJuego(int indexComboTiempo)
{
	switch(indexComboTiempo)
	{
		case 1:return 300;break;
		case 2:return 900;break;
		case 3:return 1800;break;
		case 4:return 2700;break;
		case 5:return 3600;break;
		case 6:return 7200;break;
		case 7:return 18000;break;
		case 8:return 36000;break;
	}
	
	return 0;
}

static gboolean abrir()
{
	GtkWidget *dialog;
	dialog = gtk_file_chooser_dialog_new ("Importar Juego",
				      NULL,
				      GTK_FILE_CHOOSER_ACTION_OPEN,
				      GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
				      GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT,
				      NULL);

	GtkFileFilter *filtro = gtk_file_filter_new ();
	gtk_file_filter_add_pattern (filtro, "*.pgn");
	gtk_file_filter_set_name(filtro, "Archivos PGN");
	gtk_file_chooser_add_filter(GTK_FILE_CHOOSER(dialog), filtro);

	if (esAbrirPGN)
	{
		bzero(strArmarRuta, MAX_RUTA_PATH);
		sprintf(strArmarRuta, "%s/partidasPGN",strRutaApp);
		gtk_file_chooser_set_current_folder(GTK_FILE_CHOOSER(dialog), strArmarRuta);
		esAbrirPGN = FALSO;

	} else {

		bzero(strArmarRuta, MAX_RUTA_PATH);
		sprintf(strArmarRuta, "%s/partidas",strRutaHomeDatos);
		gtk_file_chooser_set_current_folder(GTK_FILE_CHOOSER(dialog),strArmarRuta);// "/var/games/mangopaola/partidas");
	}

	if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_ACCEPT)
  	{
	    char *tt = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));
	    bzero(objInterface.nombreArchivoPGN, LARGO_RUTAPIEZA);
	    if (strlen(tt) > (LARGO_RUTAPIEZA-1))
	    {
	    	strncpy(objInterface.nombreArchivoPGN, tt, (LARGO_RUTAPIEZA-1));
	    } else {
	    	strncpy(objInterface.nombreArchivoPGN, tt, strlen(tt));
   	    }
	    g_free(tt);
	    tt = NULL;
	    abrirArchivoPGN(objInterface.nombreArchivoPGN);
	    esFaltaGrabar = FALSO;
	    objInterface.esCargaJuego = VERDADERO;
	}
	gtk_widget_destroy (dialog);

	return TRUE;
}


void abrirArchivoPGN(char *nombreArchivo)
{

	FILE *archivo = fopen(nombreArchivo,"r");
	if (!archivo)
	{
		char strMensajeError[512];
		sprintf(strMensajeError,"\nArchivo: %s\nCódigo error: %d\nDescripción error: %s\n",
									nombreArchivo,errno, strerror(errno));
		mostrarMensajeError("Error: No se ha podido abrir el juego", strMensajeError);

		esFalloAbrir = VERDADERO;

		return;
	}

	char letra;
	long c=0, maxBytes=KILOBYTES_64;
	archivoPGN = (char*) malloc(KILOBYTES_64); // 64Kbytes
	if (!archivoPGN)
	{
		char strMensajeError[512];
		sprintf(strMensajeError,"\nArchivo: %s\nCódigo error: %d\nDescripción error: %s\n",
									nombreArchivo,errno, strerror(errno));
		mostrarMensajeError("Error Memoria: No se ha podido abrir el juego", strMensajeError);
		return;
	}
	

	bzero(archivoPGN,KILOBYTES_64);
	while ((letra = fgetc(archivo)) != EOF)
	{
		if (maxBytes == c){
			maxBytes*=2;
			archivoPGN = (char *) realloc(archivoPGN, maxBytes);
		}
		archivoPGN[c++] = letra;
	}
	
	if (objInterface.esPorTiempo)
	{
		gtk_widget_hide(boxLabelTiempo);
		if (STATUS_FIN_JUEGO_NO_TERMINADO)
		{
			banderaFinalizarTiempoJuegoAUX = VERDADERO;
		}
	}

	objInterface.indexJugada = 0;
	objInterface.Lado2Jugar  = LADO_BLANCO;

	int i=0, total=juego.totalMov;

	gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), 0);
	for (;i<total;i++)
		gtk_combo_box_remove_text(GTK_COMBO_BOX(combolista), 1); 

	gtk_widget_set_sensitive(primeroBoton, FALSE);	
	gtk_widget_set_sensitive(atrasBoton,   FALSE);
	gtk_widget_set_sensitive(adelanteBoton, FALSE);
	gtk_widget_set_sensitive(ultimoBoton,   FALSE);


	nuevo_juego();
	reDibujarTodo();

	procesarPGN(archivoPGN, c);
	if (archivoPGN)
		free(archivoPGN);
	fclose(archivo);

		strMaquillado = g_markup_printf_escaped(
		 "<span background=\"#0D3C05\" weight=\"bold\" size=\"large\"><span color=\"#7A7A7A\"> Eval:%d </span><span color=\"#000000\"> Mat:%d </span></span>",
	  	 evaluacionTablero(-INFINITO,INFINITO),
		 (juego.colorTurno?-juego.material_total:juego.material_total));
		gtk_label_set_markup(GTK_LABEL(labelMaterial), strMaquillado);

}

void procesarPGN(char *cadenaBytes, long largo)
{
	enum FLAG_PGN flag_pgn = BANDERA_CERRAR;
	long i=0;	
	int index=0, esZonaMov=FALSE, movColor=BLANCO, contador=0;
	char etiqueta[80], movAlg[15];
	bzero(movAlg, 15);
	iniTiempoEnPGN = 0;

	for(;i<largo;i++)
	{
		if ((contador == MAX_BUFF_MOV) || (esZonaMov && (cadenaBytes[i] == '['))) break;

		if  ((cadenaBytes[i] == '[') && (!esZonaMov) && (flag_pgn == BANDERA_CERRAR))
		{
			flag_pgn = BANDERA_ABRIR;
			bzero(etiqueta,80);

		} else if ((cadenaBytes[i] != ']') && (!esZonaMov) && (flag_pgn == BANDERA_ABRIR)) {
			
			if (index<80)				
				etiqueta[index++] = cadenaBytes[i]; 

		} else if ((cadenaBytes[i] == ']') && (!esZonaMov) && (flag_pgn == BANDERA_ABRIR)) {

			procesarPGN_ETIQUETA(etiqueta,index);
			flag_pgn      = BANDERA_CERRAR;
			index = 0;

		} else  if ((cadenaBytes[i] != '[') && (cadenaBytes[i] != 10) && (cadenaBytes[i] != 13) && 
							(!esZonaMov) && (flag_pgn == BANDERA_CERRAR)) {
			esZonaMov = TRUE;
			index 	  = 0;
			i--;

		} else  if (esZonaMov){
			if (strrchr("abcdefgh12345678xO-+#=KQRBN", cadenaBytes[i])==NULL)
			{
				if (introMovAlgCorto(movColor,movAlg,index,contador))
				{
					sprintf(notacion,(movColor==BLANCO?"%d. %s":"%d. ... %s"),(contador+2)/2,
						juego.historicoJuego[contador].movAlg);
					gtk_combo_box_append_text(GTK_COMBO_BOX(combolista), notacion);
					movColor = !movColor;
					contador++;
				} 

				index=0;
				bzero(movAlg, 15);

			} else {
				if (index<15)
					movAlg[index++] = cadenaBytes[i];
			}
		} // fin if
	} // fin for

	if (!esTipoHumanBlanco_tagPGN && esTipoHumanNegro_tagPGN){

		objInterface.tipoJuego	= TIPO_JUEGO_PC_HUMANO;

	} else if (esTipoHumanBlanco_tagPGN && !esTipoHumanNegro_tagPGN){

		objInterface.tipoJuego	= TIPO_JUEGO_HUMANO_PC;

	} else {
		objInterface.tipoJuego	= TIPO_JUEGO_HUMANO_HUMANO;
	}

	if (iniTiempoEnPGN == 3)
	{
		comenzarTiempoJuego(iniTiempoEnPGNBlancas+tiempoBase,iniTiempoEnPGNNegras+tiempoBase);
	}

	gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), juego.totalMov);
}

void procesarPGN_ETIQUETA(char *cadenaBytes, int largo)
{

	int i=0, index=0, esValor = FALSE;
	char nombreEtiqueta[20], valorNombreEtiqueta[60];
	bzero(nombreEtiqueta,20);
	bzero(valorNombreEtiqueta, 60);
	for(;i<largo;i++)
	{
	
		if  ((cadenaBytes[i] != ' ') && (!esValor))
		{
			if (i<20)		
				nombreEtiqueta[i] = cadenaBytes[i];
 
		} else if ((cadenaBytes[i] == ' ') && (!esValor)) {
			
			esValor = TRUE;

		} else if ((cadenaBytes[i] != '\"') && (esValor)) {

			if (index<60)
				valorNombreEtiqueta[index++] = cadenaBytes[i];
		}
	}
	
	asignarValorEtiqueta(nombreEtiqueta, valorNombreEtiqueta);
}

void asignarValorEtiqueta(char *nombreEtiqueta, char *valorEtiqueta)
{

	if (!strcmp(nombreEtiqueta, "Event"))
	{
		strcpy(strNombreJuego,valorEtiqueta);
		cargarTituloVentana();

	} else if (!strcmp(nombreEtiqueta, "TimeControl")) {

		controlTiempo = atoi(valorEtiqueta);
		iniTiempoEnPGN++;

	} else if (!strcmp(nombreEtiqueta, "BlackTime")) {

		iniTiempoEnPGNNegras = (int)(atoi(valorEtiqueta)/1000);
		iniTiempoEnPGN++;

	} else if (!strcmp(nombreEtiqueta, "WhiteTime")) {

		iniTiempoEnPGNBlancas = (int)(atoi(valorEtiqueta)/1000);
		iniTiempoEnPGN++;

	} else if (!strcmp(nombreEtiqueta, "White")) {

		strcpy(strNombreBlancas,valorEtiqueta);

	} else if (!strcmp(nombreEtiqueta, "Black")) {

		strcpy(strNombreNegras,valorEtiqueta);

	} else if (!strcmp(nombreEtiqueta, "WhiteType")) {

		if (!strcmp(valorEtiqueta, "human") || !strcmp(valorEtiqueta, "humano"))
		{
			esTipoHumanBlanco_tagPGN = VERDADERO;
		} else {
			esTipoHumanBlanco_tagPGN = FALSO;
		}

	} else if (!strcmp(nombreEtiqueta, "BlackType")) {

		if (!strcmp(valorEtiqueta, "human") || !strcmp(valorEtiqueta, "humano"))
		{
			esTipoHumanNegro_tagPGN = VERDADERO;
		} else {
			esTipoHumanNegro_tagPGN = FALSO;
		}

	} else if (!strcmp(nombreEtiqueta, "BlackLevel") || !strcmp(nombreEtiqueta, "WhiteLevel")) {

		if (!strcmp(valorEtiqueta, "Nivel-01"))
		{
			juego.maxTiempo 		= pcNivel2int[1];
			juego.profundidadBusquedad	= 1;
			nivelPC 			= PC_NIVEL_1;

		} else if (!strcmp(valorEtiqueta, "Nivel-02")) {

			juego.maxTiempo 		= pcNivel2int[2];
			juego.profundidadBusquedad	= 2;
			nivelPC 			= PC_NIVEL_2;

		} else if (!strcmp(valorEtiqueta, "Nivel-03")) {

			juego.maxTiempo 		= pcNivel2int[3];
			juego.profundidadBusquedad	= 3;
			nivelPC 			= PC_NIVEL_3;

		} else if (!strcmp(valorEtiqueta, "Nivel-04")) {

			juego.maxTiempo 		= pcNivel2int[4];
			juego.profundidadBusquedad	= 4;
			nivelPC 			= PC_NIVEL_4;

		} else if (!strcmp(valorEtiqueta, "Nivel-05")) {

			juego.maxTiempo 		= pcNivel2int[5];
			juego.profundidadBusquedad	= 5;
			nivelPC 			= PC_NIVEL_5;

		} else if (!strcmp(valorEtiqueta, "Nivel-06")) {

			juego.maxTiempo 		= pcNivel2int[6];
			juego.profundidadBusquedad	= 6;
			nivelPC 			= PC_NIVEL_6;

		} else if (!strcmp(valorEtiqueta, "Nivel-07")) {

			juego.maxTiempo 		= pcNivel2int[7];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_7;

		} else if (!strcmp(valorEtiqueta, "Nivel-08")) {

			juego.maxTiempo 		= pcNivel2int[8];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_8;

		} else if (!strcmp(valorEtiqueta, "Nivel-09")) {

			juego.maxTiempo 		= pcNivel2int[9];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_9;

		} else if (!strcmp(valorEtiqueta, "Nivel-10")) {

			juego.maxTiempo 		= pcNivel2int[10];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_10;

		} else if (!strcmp(valorEtiqueta, "Nivel-11")) {

			juego.maxTiempo 		= pcNivel2int[11];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_11;

		} else if (!strcmp(valorEtiqueta, "Nivel-12")) {

			juego.maxTiempo 		= pcNivel2int[12];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_12;

		} else if (!strcmp(valorEtiqueta, "Nivel-13")) {

			juego.maxTiempo 		= pcNivel2int[13];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_13;

		} else if (!strcmp(valorEtiqueta, "Nivel-14")) {

			juego.maxTiempo 		= pcNivel2int[14];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_14;

		} else if (!strcmp(valorEtiqueta, "Nivel-15")) {

			juego.maxTiempo 		= pcNivel2int[15];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_15;

		} else if (!strcmp(valorEtiqueta, "Nivel-16")) {

			juego.maxTiempo 		= pcNivel2int[16];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_16;

		} else if (!strcmp(valorEtiqueta, "Nivel-17")) {

			juego.maxTiempo 		= pcNivel2int[17];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_17;

		} else if (!strcmp(valorEtiqueta, "Nivel-18")) {

			juego.maxTiempo 		= pcNivel2int[18];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_18;

		} else if (!strcmp(valorEtiqueta, "Nivel-19")) {

			juego.maxTiempo 		= pcNivel2int[19];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_19;

		} else if (!strcmp(valorEtiqueta, "Nivel-20")) {

			juego.maxTiempo 		= pcNivel2int[20];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_20;

		} else if (!strcmp(valorEtiqueta, "Nivel-21")) {

			juego.maxTiempo 		= pcNivel2int[21];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_21;

		} else if (!strcmp(valorEtiqueta, "Nivel-22")) {

			juego.maxTiempo 		= pcNivel2int[22];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_22;

		} else if (!strcmp(valorEtiqueta, "Nivel-23")) {

			juego.maxTiempo 		= pcNivel2int[23];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_23;

		} else if (!strcmp(valorEtiqueta, "Nivel-24")) {

			juego.maxTiempo 		= pcNivel2int[24];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_24;

		} else if (!strcmp(valorEtiqueta, "Nivel-25")) {

			juego.maxTiempo 		= pcNivel2int[25];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_25;

		} else if (!strcmp(valorEtiqueta, "Nivel-26")) {

			juego.maxTiempo 		= pcNivel2int[26];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_26;

		} else if (!strcmp(valorEtiqueta, "Nivel-27")) {

			juego.maxTiempo 		= pcNivel2int[27];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_27;

		} else if (!strcmp(valorEtiqueta, "Nivel-28")) {

			juego.maxTiempo 		= pcNivel2int[28];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_28;

		} else if (!strcmp(valorEtiqueta, "Nivel-29")) {

			juego.maxTiempo 		= pcNivel2int[29];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_29;

		} else if (!strcmp(valorEtiqueta, "Nivel-30")) {

			juego.maxTiempo 		= pcNivel2int[30];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_30;

		} else if (!strcmp(valorEtiqueta, "Nivel-31")) {

			juego.maxTiempo 		= pcNivel2int[31];
			juego.profundidadBusquedad	= 98;
			nivelPC 			= PC_NIVEL_31;
		}


	} else if (!strcmp(nombreEtiqueta, "Result")) {

		if (!strcmp(valorEtiqueta, "*"))
		{
			statusFinJuego = STATUS_FIN_JUEGO_SIN_ESTATUS; 
			gtk_widget_hide(boxPanelNotificacion); 

		} else if (!strcmp(valorEtiqueta, "1-0")) {

			statusFinJuego = STATUS_FIN_JUEGO_MATE_GANAN_B;
			mostrarPanelNotificacion(strNombreBlancas, "El Jugador con las Blancas ha Ganado...");
 
		} else if (!strcmp(valorEtiqueta, "0-1")) {

			statusFinJuego = STATUS_FIN_JUEGO_MATE_GANAN_N;
			mostrarPanelNotificacion(strNombreNegras, "El Jugador con las Negras ha Ganado...");

		} else if (!strcmp(valorEtiqueta, "1/2-1/2")) {

			statusFinJuego = STATUS_FIN_JUEGO_TABLAS;
			mostrarPanelNotificacion("TABLAS", "El juego ha terminado tablas...");
		}
	}

}

void notacion_espaniol2ingles(char cadenaEntrada[],char cadenaSalida[])
{
	int i=0;
	bzero(cadenaSalida,15);
	for (;i<15;i++)
	{
		if (cadenaEntrada[i]=='T')
		{
			cadenaSalida[i]= 'R';
		} else if (cadenaEntrada[i]=='C')
		{
			cadenaSalida[i]= 'N';
		} else if (cadenaEntrada[i]=='A')
		{
			cadenaSalida[i]= 'B';
		} else if (cadenaEntrada[i]=='D')
		{
			cadenaSalida[i]= 'Q';
		} else if (cadenaEntrada[i]=='R')
		{
			cadenaSalida[i]= 'K';
		} else if (cadenaEntrada[i]=='+' && cadenaEntrada[i+1]=='+')
		{
			cadenaSalida[i]= '#';
			i++;
		} else 
		{
			cadenaSalida[i]= cadenaEntrada[i];
		}	
	}
}

void notacion_ingles2espaniol(char cadenaEntrada[])
{
	int i=0;

	for (;i<15;i++)
	{
		if (cadenaEntrada[i]=='R')
		{
			cadenaEntrada[i]= 'T';
		} else if (cadenaEntrada[i]=='N')
		{
			cadenaEntrada[i]= 'C';
		} else if (cadenaEntrada[i]=='B')
		{
			cadenaEntrada[i]= 'A';
		} else if (cadenaEntrada[i]=='Q')
		{
			cadenaEntrada[i]= 'D';
		} else if (cadenaEntrada[i]=='K')
		{
			cadenaEntrada[i]= 'R';
		} else if (cadenaEntrada[i]=='#')
		{
			cadenaEntrada[i]   = '+';
			cadenaEntrada[i+1] = '+';
			i++;
		} 	
	}
}

char* obtener_tipoJuego_int2str(int tipoJuego)
{
	switch(tipoJuego)
	{
		case TIPO_JUEGO_HUMANO_HUMANO: return "Humano vs Humano";      break;
		case TIPO_JUEGO_PC_HUMANO:     return "Mango Paola vs Humano";break;
		case TIPO_JUEGO_HUMANO_PC:     return "Humano vs Mango Paola";break;
	};

	return "Humano vs Mango Paola";

}

char* obtenerSugerenciaNombreArchivo(char sugerenciaNomArchivo[], char *tipo)
{
	int largoTitulo=0, largoNombre=LARGO_SUGERENCIA_GUARDAR-5;
	bzero(sugerenciaNomArchivo,LARGO_SUGERENCIA_GUARDAR);
	largoTitulo = strlen(strNombreJuego); 
	strncpy(sugerenciaNomArchivo,strNombreJuego,largoTitulo>largoNombre?largoNombre:largoTitulo);
	strcat(sugerenciaNomArchivo,tipo);
	return sugerenciaNomArchivo;
}

static gboolean guardar()
{
 	char sugerenciaNomArchivo[LARGO_SUGERENCIA_GUARDAR];

	if (!strlen(objInterface.nombreArchivoPGN) || esGuardarComo)
	{
		obtenerSugerenciaNombreArchivo(sugerenciaNomArchivo, TIPO_PGN);
	
		GtkWidget *dialog;
		dialog = gtk_file_chooser_dialog_new("Guardar Juego en Formato PGN",
					      NULL,
					      GTK_FILE_CHOOSER_ACTION_SAVE,
					      GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
					      GTK_STOCK_SAVE, GTK_RESPONSE_ACCEPT,
					      NULL);
		gtk_file_chooser_set_do_overwrite_confirmation (GTK_FILE_CHOOSER (dialog), TRUE);
		GtkFileFilter *filtro = gtk_file_filter_new ();
		gtk_file_filter_add_pattern (filtro, "*.pgn");
		gtk_file_filter_set_name(filtro, "Archivos PGN");
		gtk_file_chooser_add_filter(GTK_FILE_CHOOSER(dialog), filtro);

		bzero(strArmarRuta, MAX_RUTA_PATH);
		sprintf(strArmarRuta, "%s/partidas",strRutaHomeDatos);
		gtk_file_chooser_set_current_folder(GTK_FILE_CHOOSER(dialog),strArmarRuta);  //"/var/games/mangopaola/partidas");

		gtk_file_chooser_set_current_name(GTK_FILE_CHOOSER (dialog), sugerenciaNomArchivo);

		if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_ACCEPT)
		{
			char *tt = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));
		        bzero(objInterface.nombreArchivoPGN, LARGO_RUTAPIEZA);
			if (strlen(tt) > (LARGO_RUTAPIEZA-1))
			{
				strncpy(objInterface.nombreArchivoPGN, tt, (LARGO_RUTAPIEZA-1));
			} else {
				strncpy(objInterface.nombreArchivoPGN, tt, strlen(tt));
			}
			g_free(tt);
			tt = NULL;
		}
		gtk_widget_destroy(dialog);
 	}

	if (strlen(objInterface.nombreArchivoPGN))
	{
		guardarArchivoPGN(objInterface.nombreArchivoPGN);
		esFaltaGrabar = FALSO;
		objInterface.esCargaJuego = VERDADERO;
	}

	if (esGuardarComo) esGuardarComo = FALSO;

	return TRUE;
}

void mostrarMensajeError(char *titulo, char strMensajeError[])
{
	GtkWidget *label, *content_area, *imagen, *hbox;
	label = gtk_label_new (strMensajeError);
	GtkWidget *aviso = gtk_dialog_new_with_buttons (titulo,
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_OK,
				                 GTK_RESPONSE_NONE,
				                 NULL);
	g_signal_connect_swapped(aviso, "response", G_CALLBACK(gtk_widget_destroy),  aviso);
	content_area = (GTK_DIALOG(aviso))->vbox;
	imagen = gtk_image_new_from_stock(GTK_STOCK_STOP, GTK_ICON_SIZE_DIALOG);
	hbox  = gtk_hbox_new(FALSE, 5);
	gtk_box_pack_start(GTK_BOX(hbox), imagen, FALSE, FALSE, 5);
	gtk_box_pack_start(GTK_BOX(hbox), label, FALSE, FALSE, 5);
	gtk_container_add (GTK_CONTAINER(content_area), hbox);
	gtk_widget_show_all(aviso);
}

void guardarArchivoPGN(char *nombreArchivo)
{

	FILE *archivo = fopen(nombreArchivo,"w");
	if (!archivo)
	{

		char strMensajeError[512];
		sprintf(strMensajeError,"\nArchivo: %s\nCódigo error: %d\nDescripción error: %s\n",
									nombreArchivo,errno, strerror(errno));
		mostrarMensajeError("Error: No se ha podido Exportar el juego", strMensajeError);
		return;
	}

	time_t tiempo;
	char cad[80], resultado[10];
	struct tm *tmPtr;
	tiempo = time(NULL);
	tmPtr = localtime(&tiempo);
	strftime( cad, 80, "%Y.%m.%d", tmPtr );

	switch (statusFinJuego)
	{
		case STATUS_FIN_JUEGO_MATE_GANAN_B		:strcpy(resultado,"1-0");	break;
		case STATUS_FIN_JUEGO_MATE_GANAN_N		:strcpy(resultado,"0-1");	break;
		case STATUS_FIN_JUEGO_TABLAS 			:strcpy(resultado,"1/2-1/2");	break;
		case STATUS_FIN_JUEGO_SIN_ESTATUS 		:strcpy(resultado,"*");	break;
		default				 		:strcpy(resultado,"*");	break;

	}

	fprintf(archivo, "[Event \"%s\"]\n",strNombreJuego);
	fprintf(archivo, "[Site \"?\"]\n");
	fprintf(archivo, "[Date \"%s\"]\n", cad);
	fprintf(archivo, "[Round \"?\"]\n");
	fprintf(archivo, "[White \"%s\"]\n", strNombreBlancas);
	fprintf(archivo, "[Black \"%s\"]\n", strNombreNegras);
	fprintf(archivo, "[Result \"%s\"]\n", resultado);
	fprintf(archivo, "[WhiteType \"%s\"]\n", objInterface.tipoJuego == TIPO_JUEGO_HUMANO_HUMANO || 
						 objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC     ?
						 "human" : "program");
	fprintf(archivo, "[BlackType \"%s\"]\n", objInterface.tipoJuego == TIPO_JUEGO_HUMANO_HUMANO || 
						 objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO     ?
						 "human" : "program");

	if (objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC)
	{
		fprintf(archivo, "[BlackLevel \"%s\"]\n",pcNivel2str[nivelPC]);

	}

	if (objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO)
	{
		fprintf(archivo, "[WhiteLevel \"%s\"]\n", pcNivel2str[nivelPC]);
	}

	if (objInterface.esPorTiempo)
	{
		fprintf(archivo, "[TimeControl \"%d\"]\n", controlTiempo);
		fprintf(archivo, "[BlackTime \"%d\"]\n",   (objInterface.tiempoNegras-tiempoBase)  * 1000);
		fprintf(archivo, "[WhiteTime \"%d\"]\n",   (objInterface.tiempoBlancas-tiempoBase) * 1000);
	}
	fprintf(archivo, "\n");

	int i,c=0, final;
	char notacionBlancas[15], notacionNegras[15];

	if (juego.totalMov)
	{
		final = juego.totalMov-1;

		for (i=0;i<=final;i+=2,c++)
		{
			notacion_espaniol2ingles(juego.historicoJuego[i].movAlg,   notacionBlancas);
			if ((i+1) > final)
				bzero(notacionNegras,15);
			else
				notacion_espaniol2ingles(juego.historicoJuego[i+1].movAlg, notacionNegras);

			if (c<6)
			{
				fprintf(archivo,"%d. %s %s ",((i+2)/2), notacionBlancas, notacionNegras);	

			} else {
				fprintf(archivo,"%d. %s %s\n",((i+2)/2), notacionBlancas, notacionNegras);	
				c=0;
			}
		}
	}
	fprintf(archivo,"%s\n",resultado);
	fclose(archivo);
}

static gboolean rendirse()
{
	char *markup;

	if (STATUS_FIN_JUEGO_TERMINADO)
		return VERDADERO;

	GtkWidget *labelMensaje, *imagen, *hbox, *vbox, *content_area;


	GtkWidget *ventanaConfirmar = gtk_dialog_new_with_buttons ("Confirmar Rendición",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_CANCEL,
				                 GTK_RESPONSE_CANCEL,
				                 NULL);
	gtk_dialog_add_button(GTK_DIALOG(ventanaConfirmar), GTK_STOCK_OK,GTK_RESPONSE_OK);
	content_area = (GTK_DIALOG(ventanaConfirmar))->vbox;
	labelMensaje = gtk_label_new("");
	markup = g_markup_printf_escaped(
	"<span size=\"x-large\">¿ Desea realmente <span weight=\"heavy\" size=\"xx-large\" style=\"italic\"> Rendirse </span> ?</span>");
	gtk_label_set_markup(GTK_LABEL(labelMensaje), markup);

	imagen = gtk_image_new_from_stock(GTK_STOCK_DIALOG_WARNING, GTK_ICON_SIZE_DIALOG);
	hbox  = gtk_hbox_new(FALSE, 5);
	vbox  = gtk_vbox_new(FALSE, 5);

	gtk_box_pack_start(GTK_BOX(hbox), imagen, FALSE, FALSE, 5);
	gtk_box_pack_start(GTK_BOX(hbox), labelMensaje, FALSE, FALSE, 5);
	gtk_box_pack_start(GTK_BOX(vbox), hbox, FALSE, FALSE, 15);

	gtk_container_add(GTK_CONTAINER(content_area), vbox);
	gtk_widget_show_all(ventanaConfirmar);

	if (gtk_dialog_run(GTK_DIALOG(ventanaConfirmar)) == GTK_RESPONSE_OK)
    	{
		if (!bloqueado)
		{
			if (objInterface.oirSonido)
				resulSystem = system(strAplay_rendirse);

			if (juego.colorTurno == BLANCO)
			{
				statusFinJuego = STATUS_FIN_JUEGO_MATE_GANAN_N;
				mostrarPanelNotificacion("Ganan las Negras","El jugador con las blancas se ha rendido");
			} else 
			{
				statusFinJuego = STATUS_FIN_JUEGO_MATE_GANAN_B;
				mostrarPanelNotificacion("Ganan las Blancas","El jugador con las negras se ha rendido");
			}
		}
	}

	if (ventanaConfirmar)
	{
		g_free(markup);
		gtk_widget_destroy(ventanaConfirmar);
	}
	return TRUE;
}

static gboolean sugerirJugada()
{

	int posActual;
	posActual = numPosOrigen;
	int maxTiempo_salvado, profundidadBusquedad_salvado;
	BOOLEANO usoLibroSalvado;

	MOVIMIENTO m;

	if (STATUS_FIN_JUEGO_NO_TERMINADO && (posActual == SIN_POS_VALIDAS) && 
            (juego.totalMov==objInterface.indexJugada) && !bloqueado) 
	{

		maxTiempo_salvado		= juego.maxTiempo;
		profundidadBusquedad_salvado	= juego.profundidadBusquedad;

		juego.maxTiempo 		= 3000;
		juego.profundidadBusquedad	= 98;

		usoLibroSalvado 		= usarLibroAperturas;
		usarLibroAperturas 		= VERDADERO;

		mostrarMensajeEnTablero(vpos[26].pos_x,vpos[56].pos_y,"Espera...",(int)(tamanio_cuadro*0.6));
		mostrarMensajeEnTablero(vpos[26].pos_x,vpos[56].pos_y,"Espera...",(int)(tamanio_cuadro*0.6));

		m = pensarRapido();
		usarLibroAperturas = usoLibroSalvado; 		

		posAccesibilidad = OBT_MOV_DESTINO(m);
		if (objInterface.oirAccesibilidad)
		{
			resulSystem = system(strAplay_sugieroMover);
			reproducirSonidoPiezaEscaque(OBT_MOV_ORIGEN(m));
			resulSystem = system(strAplay_de);
			reproducirSonidoDesEscaque(OBT_MOV_ORIGEN(m));
			resulSystem = system(strAplay_hasta);
			reproducirSonidoDesEscaque(OBT_MOV_DESTINO(m));
			if (ES_MOV_CAPTURA(m))
			{
				resulSystem = system(strAplay_piezaCapturada);
				reproducirSonidoPiezaEscaque(OBT_MOV_DESTINO(m));
			}

			if (ES_MOV_PROMOCION(m))
			{
				resulSystem = system(strAplay_vozPromocion);
		
			} else if (ES_MOV_OO(m)) {

				resulSystem = system(strAplay_vozEnroqueCorto);
		
			} else if (ES_MOV_OOO(m)) {

				resulSystem = system(strAplay_vozEnroqueLargo);
			}
		}
		
		pintarFondo();
		pintarTablero();
		dibujarPiezas();		

		juego.maxTiempo 		= maxTiempo_salvado;
		juego.profundidadBusquedad	= profundidadBusquedad_salvado;

		numPosOrigen = OBT_MOV_ORIGEN(m);
		cairo_t *cr;
		cr = gdk_cairo_create(area->window);
		resaltarPosTablero(cr, &rgb14,OBT_MOV_DESTINO(m));
		resaltarPosTablero(cr, &rgb3,OBT_MOV_ORIGEN(m));
		dibujarPieza(cr, TRANSFORMAR_POS(OBT_MOV_DESTINO(m)));
		dibujarPieza(cr, TRANSFORMAR_POS(OBT_MOV_ORIGEN(m)));
		cairo_destroy(cr);
	}

	return TRUE;
}

static gboolean verAyudaColor()
{
	if (!bloqueado)
	{
		objInterface.verAyuda = !objInterface.verAyuda; 
		reDibujarTodo();
	}
	return TRUE;
}

static gboolean verNumeracion()
{
	if (!bloqueado)
	{
		objInterface.verNotacion = !objInterface.verNotacion; 
		reDibujarTodo();
	}
	return TRUE;
}

static gboolean sonidoJuego()
{
	objInterface.oirSonido = !objInterface.oirSonido; 
	return TRUE;
}

void pintarFondo()
{
	cairo_t *cr;
	cr = gdk_cairo_create(area->window);
	char *letra;


	cairo_set_source_rgb(cr, rgb9.rojo, rgb9.verde, rgb9.azul);
	cairo_rectangle(cr,0,0,area->allocation.width,area->allocation.height);
	cairo_fill_preserve (cr);


	if (objInterface.verNotacion)
	{
		cairo_text_extents_t te;
		cairo_set_source_rgb (cr, rgb8.rojo, rgb8.verde, rgb8.azul);
		cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
		cairo_set_font_size (cr, (int)(tamanio_cuadro/2));


		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "8" :"1");
		cairo_text_extents (cr, letra, &te);
		int relacion = ((tamanio_cuadro-te.width)/2);
		int ladoIzqx = (vpos[48].pos_x-tamanio_cuadro)+relacion,ejey,ejex, ladoDerX=vpos[7].pos_x+tamanio_cuadro+relacion;
		

		ejey = vpos[48].pos_y-te.height;
		cairo_move_to(cr, ladoIzqx,ejey);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ladoDerX,ejey);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "7" :"2");
		cairo_text_extents (cr, letra, &te);
		ejey = vpos[40].pos_y-te.height;
		cairo_move_to(cr, ladoIzqx,ejey);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ladoDerX,ejey);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "6" :"3");
		cairo_text_extents(cr, letra, &te);
		ejey = vpos[32].pos_y-te.height;
		cairo_move_to (cr, ladoIzqx,ejey);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ladoDerX,ejey);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "5" :"4");
		cairo_text_extents(cr, letra, &te);
		ejey = vpos[24].pos_y-te.height;
		cairo_move_to(cr, ladoIzqx,ejey);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ladoDerX,ejey);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "4" :"5");
		cairo_text_extents(cr, letra, &te);
		ejey = vpos[16].pos_y-te.height;
		cairo_move_to(cr, ladoIzqx,ejey);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ladoDerX,ejey);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "3" :"6");
		cairo_text_extents (cr, letra, &te);
		ejey = vpos[8].pos_y-te.height;
		cairo_move_to(cr, ladoIzqx,ejey);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ladoDerX,ejey);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "2" :"7");
		cairo_text_extents (cr, letra, &te);
		ejey = vpos[0].pos_y-te.height;
		cairo_move_to(cr, ladoIzqx,ejey);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ladoDerX,ejey);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "1" :"8");
		cairo_text_extents (cr, letra, &te);
		ejey = vpos[0].pos_y+tamanio_cuadro-te.height;
		cairo_move_to(cr, ladoIzqx, ejey);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ladoDerX,ejey);
		cairo_show_text(cr, letra);


		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "a" :"h");
		cairo_text_extents (cr, letra, &te);
		relacion = ((tamanio_cuadro-te.height)/2);
		int ladoSupy= vpos[63].pos_y - relacion/2, ladoInfy=vpos[0].pos_y+tamanio_cuadro+relacion;

		ejex = vpos[0].pos_x+((tamanio_cuadro-te.width)/2);
		cairo_move_to(cr, ejex, ladoSupy);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ejex, ladoInfy);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "b" :"g");
		cairo_text_extents (cr, letra, &te);
		ejex = vpos[1].pos_x+((tamanio_cuadro-te.width)/2);
		cairo_move_to(cr, ejex, ladoSupy);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ejex, ladoInfy);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "c" :"f");
		cairo_text_extents (cr, letra, &te);
		ejex = vpos[2].pos_x+((tamanio_cuadro-te.width)/2);
		cairo_move_to(cr, ejex, ladoSupy);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ejex, ladoInfy);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "d" :"e");
		cairo_text_extents (cr, letra, &te);
		ejex = vpos[3].pos_x+((tamanio_cuadro-te.width)/2);
		cairo_move_to(cr, ejex, ladoSupy);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ejex, ladoInfy);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "e" :"d");
		cairo_text_extents (cr, letra, &te);
		ejex = vpos[4].pos_x+((tamanio_cuadro-te.width)/2);
		cairo_move_to(cr, ejex, ladoSupy);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ejex, ladoInfy);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "f" :"c");
		cairo_text_extents (cr, letra, &te);
		ejex = vpos[5].pos_x+((tamanio_cuadro-te.width)/2);
		cairo_move_to(cr, ejex, ladoSupy);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ejex, ladoInfy);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "g" :"b");
		cairo_text_extents (cr, letra, &te);
		ejex = vpos[6].pos_x+((tamanio_cuadro-te.width)/2);
		cairo_move_to(cr, ejex, ladoSupy);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ejex, ladoInfy);
		cairo_show_text(cr, letra);

		letra = (objInterface.Lado2Jugar == LADO_BLANCO ? "h" :"a");
		cairo_text_extents (cr, letra, &te);
		ejex = vpos[7].pos_x+((tamanio_cuadro-te.width)/2);
		cairo_move_to(cr, ejex, ladoSupy);
		cairo_show_text(cr, letra);
		cairo_move_to(cr, ejex, ladoInfy);
		cairo_show_text(cr, letra);

	}
	cairo_destroy(cr);
}

static gboolean mostrarBarra()
{
	if (!bloqueado)
	{
		gtk_widget_show(barra);
	}
	return TRUE;
}

static gboolean ocultarBarra()
{
	if (!bloqueado)
	{
		gtk_widget_hide(barra);
	}
	return TRUE;
}

static gboolean ocultarBarraInferior()
{
	if (!bloqueado)
	{
		gtk_widget_hide(box_bajo);
	}
	return TRUE;
}

static gboolean fconfigure(GtkWidget *area, GdkEventConfigure *event, gpointer data)
{
	objInterface.altoVentana  = window->allocation.height;
	objInterface.anchoVentana = window->allocation.width;
	tamanio_cuadro = (area->allocation.width > area->allocation.height ?
				area-> allocation.height/TAMANIO_MATRIZ:area-> allocation.width/TAMANIO_MATRIZ);

	int ancho=area->allocation.width-tamanio_cuadro, alto=area-> allocation.height-tamanio_cuadro;
	
	tamanio_cuadro = (ancho > alto ? (alto/TAMANIO_MATRIZ):(ancho/TAMANIO_MATRIZ));

	if (tamanio_cuadro > 51)
	{
		if (esMiniEstado)
		{
			objInterface.tipoPiezas++;
			esMiniEstado = FALSO;		
			cargar_vpiezas_IG();
			cargar_vpiezas();
		} 
	} else {

		if (!esMiniEstado)
		{
			objInterface.tipoPiezas--;
			esMiniEstado = VERDADERO;
			cargar_vpiezas_IG();
			cargar_vpiezas();
		} 
	}

	largoTablero  = tamanio_cuadro * TAMANIO_MATRIZ;
	ajusteCelda   = (tamanio_cuadro-tamanio_pieza)/2;
	ajuste_x      = (area->allocation.width  - largoTablero)/2;  
	ajuste_y      = (area->allocation.height - largoTablero)/2;  
	
	ini_POS_CEL_TABLERO_XY();
	return TRUE;
}


static gboolean leave_notify(GtkWidget *area, GdkEventCrossing *event, gpointer data)
{
	PIEZA piezapivo;

	if ((objInterface.verAyuda) && (numPosOrigen == SIN_POS_VALIDAS) && 
			(juego.totalMov==objInterface.indexJugada) && !bloqueado )
	{
		piezapivo = juego.historicoJuego[objInterface.indexJugada].vistaTablero[motionPos].pieza;
		if ((motionPos != SIN_POS_VALIDAS) && (piezapivo != VACIO)) 
		{
			cairo_t *cr;
			cr = gdk_cairo_create(area->window);

			if ((motionPos != SIN_POS_VALIDAS) && (piezapivo != VACIO) && (OBT_COLOR_PIEZA(piezapivo)== juego.colorTurno))
			{
				resaltarPosTablero(cr, obtener_ColorCelda(
				juego.historicoJuego[objInterface.indexJugada].vistaTablero[motionPos].estado,motionPos), motionPos);
				dibujarPieza(cr, TRANSFORMAR_POS(motionPos));
				motionPos = SIN_POS_VALIDAS;
			}
			cairo_destroy(cr);
		} 
	}

	return FALSE;
}


static gboolean expose_event(GtkWidget *area, GdkEventExpose *event, gpointer data)
{
	reDibujarTodo();
	return TRUE;
}

static gboolean button_pressed (GtkWidget *area, GdkEventButton *event, gpointer data)
{
#define VV juego.historicoJuego[objInterface.indexJugada].vistaTablero[numPosOrigen]

	gint x = event->x, y = event->y;
	x -=ajuste_x;
	y -=ajuste_y;
	
	int pos = XY2POS(x,y);
	int i, largo;
	MOVIMIENTO movv;
	BOOLEANO destinoValido = FALSO;
	pos = TRANSFORMAR_POS(pos);

	
  if  ((juego.totalMov == objInterface.indexJugada) && !bloqueado && STATUS_FIN_JUEGO_NO_TERMINADO)
  {	
	if ((x > 0 && x <largoTablero) && (y > 0 && y <largoTablero))
	{
		if (((objInterface.tipoJuego == TIPO_JUEGO_HUMANO_HUMANO || 
		      objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC     || 
		      objInterface.tipoJuego == TIPO_JUEGO_HUMANO_RED)   &&   (juego.colorTurno == BLANCO))	||
	     	    ((objInterface.tipoJuego == TIPO_JUEGO_HUMANO_HUMANO || 
		      objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO     || 
		      objInterface.tipoJuego == TIPO_JUEGO_RED_HUMANO)   &&   (juego.colorTurno == NEGRO)))
		{

			if (pos == numPosOrigen){

				borrarAyudaColor();
				numPosOrigen 	= SIN_POS_VALIDAS;

			} else if (numPosOrigen == SIN_POS_VALIDAS) { 

#define	VVV juego.historicoJuego[objInterface.indexJugada].vistaTablero[pos]
				if (ES_PIEZA(VVV.pieza)) //(VVV.pieza != VACIO)
				{
					if ((OBT_COLOR_PIEZA(VVV.pieza) == juego.colorTurno) && (VVV.numPosValidas))
					{
						numPosOrigen = pos;
						mostrarAyudaColor();
					}
				}
		
			} else if (VV.numPosValidas) {

				for (i=0;i < VV.numPosValidas;i++)
				{
					if (pos == VV.posValidas[i])
					{
						destinoValido = VERDADERO;
					}
				}
				
				if (destinoValido)
				{
					movv = pos2movimiento(numPosOrigen, pos);
					if (movv)
					{
						hacerMovimiento(movv);
						borrarAyudaColor();
						NOpintarTableroSelectivo = VERDADERO;
						juego.Buffer_MOV_INDEXCAPAS[1] = generarTodosMov(0);
						cargarVistaTablero();
						largo=mov2alg(movv, pngmov);
						bzero(&juego.historicoJuego[objInterface.indexJugada].movAlg[0],15);
						strncpy(&juego.historicoJuego[objInterface.indexJugada].movAlg[0],pngmov,largo);
						bloqueado = VERDADERO;
						esFaltaGrabar = VERDADERO;
						desplazarPieza(numPosOrigen, pos);
						numPosOrigen 	= SIN_POS_VALIDAS;

						sprintf(notacion,"%d. %s%s", (juego.totalMov+1)/2, 
										(juego.colorTurno==NEGRO?"":"... "),
							  juego.historicoJuego[objInterface.indexJugada].movAlg);

						gtk_combo_box_append_text(GTK_COMBO_BOX(combolista), notacion);
						gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), objInterface.indexJugada+1);
					}
				}
			}

		} 

		if (statusFinJuego==STATUS_FIN_JUEGO_INDETERMINADO)
		{
			mostrarMensajeError("Estado indeterminado", "El programa se cerrará");
			exit(0);
		}
	}

  }

  return FALSE;
}


static gboolean motion_notify(GtkWidget *area, GdkEventMotion *event, gpointer data)
{


if ((objInterface.verAyuda) && (juego.totalMov == objInterface.indexJugada) && !bloqueado && STATUS_FIN_JUEGO_NO_TERMINADO)
{
	gint x = event->x, y = event->y;

	x -=ajuste_x;
	y -=ajuste_y;
	int pos = XY2POS(x,y); 
	PIEZA piezapivo;

	pos = TRANSFORMAR_POS(pos);

	if ((numPosOrigen == SIN_POS_VALIDAS) && (x > 0 && x <largoTablero) && (y > 0 && y <largoTablero))
	{
		if (motionPos != pos && (
			juego.historicoJuego[objInterface.indexJugada].vistaTablero[pos].pieza		!= VACIO ||
			juego.historicoJuego[objInterface.indexJugada].vistaTablero[motionPos].pieza	!= VACIO))
		{
			cairo_t *cr;
			cr = gdk_cairo_create(area->window);
			piezapivo = juego.historicoJuego[objInterface.indexJugada].vistaTablero[pos].pieza; 
			if ((piezapivo != VACIO) && (OBT_COLOR_PIEZA(piezapivo) == juego.colorTurno))
			{
				if (juego.historicoJuego[objInterface.indexJugada].vistaTablero[pos].numPosValidas) 
					resaltarPosTablero(cr, &rgb3, pos);
				else 
					resaltarPosTablero(cr, &rgb8, pos);

				dibujarPieza(cr, TRANSFORMAR_POS(pos));
			}

			piezapivo = juego.historicoJuego[objInterface.indexJugada].vistaTablero[motionPos].pieza; 

			if ((motionPos != SIN_POS_VALIDAS) && 
				(piezapivo != VACIO) && (OBT_COLOR_PIEZA(piezapivo) == juego.colorTurno))
			{
				resaltarPosTablero(cr, obtener_ColorCelda(
				juego.historicoJuego[objInterface.indexJugada].vistaTablero[motionPos].estado,motionPos), motionPos);
				dibujarPieza(cr, TRANSFORMAR_POS(motionPos));
			}

			cairo_destroy(cr);
		} 

		if (pos < 0 || pos > 63)
		   pos = 0;
		motionPos = pos;
	}
 }

	return FALSE;
}

void reproduccionInfoEscaque(int posAccesibilidad)
{
	int i;

	if (!objInterface.oirAccesibilidad) return;

	reproducirSonidoDesEscaque(posAccesibilidad);
	reproducirSonidoPiezaEscaque(posAccesibilidad);
	
	if ((posAccesibilidad != numPosOrigen) && (numPosOrigen != SIN_POS_VALIDAS) && (AC.numPosValidas)) 
	{
		for (i=0;i < AC.numPosValidas;i++)
		{
			if (posAccesibilidad == AC.posValidas[i])
			{
				resulSystem = system(strAplay_escaqueDestinoEscaque);	
			}
		}
	}

	if ((juego.historicoJuego[objInterface.indexJugada].vistaTablero[posAccesibilidad].estado==
		CODESTADO_PIEZA_AMIGA_ATACADA) ||
	   (juego.historicoJuego[objInterface.indexJugada].vistaTablero[posAccesibilidad].estado==
	   	CODESTADO_PIEZA_ENEMIGA_ATACADA))
	{
		resulSystem = system(strAplay_escaqueAtacado);	
	}	
}

static gboolean key_pressed_main(GtkWidget *area, GdkEventKey *event, gpointer data)
{
	if (event->keyval==65307) 
	{
		salir();
		return VERDADERO;
	}

	return FALSE;
}


static gboolean key_pressed(GtkWidget *area, GdkEventKey *event, gpointer data)
{
	int i, largo, posTemporal = posAccesibilidad;
	MOVIMIENTO movv;
	BOOLEANO destinoValido = FALSO;

	if (event->keyval==65307) 
	{
		salir();
		return VERDADERO;
	}

	if  ((juego.totalMov == objInterface.indexJugada) && !bloqueado && STATUS_FIN_JUEGO_NO_TERMINADO)
	{	
		if ((event->keyval > 65360) && (event->keyval<65365))
		{
			if (event->keyval==65362) // Flecha Arriba
		 	{
		 		if (objInterface.Lado2Jugar == LADO_BLANCO)
		 			posAccesibilidad += 8;
		 		 else
		 			posAccesibilidad -= 8;
		 	
		 	} else if (event->keyval==65363) { // Flecha  Derecha

		 		if (objInterface.Lado2Jugar == LADO_BLANCO)
		 			posAccesibilidad++;
		 		 else
		 			posAccesibilidad--;
	
		 	} else if (event->keyval==65364) { // Flecha Abajo
		 
		 		if (objInterface.Lado2Jugar == LADO_BLANCO)
		 			posAccesibilidad -= 8;
		 		 else
		 			posAccesibilidad += 8;

		 	} else if (event->keyval==65361) { // Flecha Izquierda

		 		if (objInterface.Lado2Jugar == LADO_BLANCO)
		 			posAccesibilidad--;
		 		 else
		 			posAccesibilidad++;
			}

	 		if (posAccesibilidad<0 || posAccesibilidad>63) posAccesibilidad = 0; 

			if (posTemporal != posAccesibilidad)
			{
				reproduccionInfoEscaque(posAccesibilidad);
				cairo_t *cr;
				cr = gdk_cairo_create(area->window);

				if (objInterface.verAyuda)
					resaltarPosTablero(cr, 
					obtener_ColorCelda(
					juego.historicoJuego[
					objInterface.indexJugada].vistaTablero[posTemporal].estado,posTemporal), posTemporal);
				else
					resaltarPosTablero(cr, 
					obtener_ColorCelda(((
					ESCAQUES_NEGROS & BITSET[posTemporal]) ? NEGRO:BLANCO),posTemporal), posTemporal);

				dibujarPieza(cr,DES_TRANSFORMAR_POS(posTemporal));

				mostrarAyudaColor();

				dibujarBordeRectanguloCursor(
					cr, vpos[TRANSFORMAR_POS(posAccesibilidad)].pos_x, 
					    vpos[TRANSFORMAR_POS(posAccesibilidad)].pos_y,tamanio_cuadro-1, tamanio_cuadro-1);	
				cairo_destroy(cr);
			}

			return VERDADERO;

	 	} else if ((event->keyval==112) || (event->keyval==80)) { // P,p  oir posicion donde estoy ?

			reproduccionInfoEscaque(posAccesibilidad);

			return VERDADERO;

	 	} else if ((event->keyval==97) || (event->keyval==65)) { //A,a (ir comando)

			if (!irComandoActivado)
			{
				
			} else {

				cont_irComando++;
				if (cont_irComando==1)
				{
					escaqueIrComando = 0;
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

			return VERDADERO;


	 	} else if ((event->keyval==98) || (event->keyval==66)) { //B,b (ir comando)

			if (!irComandoActivado)
			{
				
			} else {

				cont_irComando++;
				if (cont_irComando==1)
				{
					escaqueIrComando = 1;
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

			return VERDADERO;

	 	} else if ((event->keyval==99) || (event->keyval==67)) { //C,c (ir comando)

			if (!irComandoActivado)
			{
				
			} else {

				cont_irComando++;
				if (cont_irComando==1)
				{
					escaqueIrComando = 2;
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

			return VERDADERO;

	 	} else if ((event->keyval==100) || (event->keyval==68)) { // D,d (comando ir)

			if (!irComandoActivado)
			{
		 		
			} else {
			
				cont_irComando++;
				if (cont_irComando==1)
				{
					escaqueIrComando = 3;
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

			return VERDADERO;

	 	} else if ((event->keyval==101) || (event->keyval==69)) { //E,e (ir comando)

			if (!irComandoActivado)
			{
				
			} else {

				cont_irComando++;
				if (cont_irComando==1)
				{
					escaqueIrComando = 4;
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

			return VERDADERO;

	 	} else if ((event->keyval==102) || (event->keyval==70)) { //F,f (ir comando)

			if (!irComandoActivado)
			{
				
			} else {

				cont_irComando++;
				if (cont_irComando==1)
				{
					escaqueIrComando = 5;
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

			return VERDADERO;

	 	} else if ((event->keyval==103) || (event->keyval==71)) { // G,g (comando ir)

			if (!irComandoActivado)
			{
				
			} else {

				cont_irComando++;
				if (cont_irComando==1)
				{
					escaqueIrComando = 6;
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

	 	} else if ((event->keyval==104) || (event->keyval==72)) { //H,h (ir comando)

			if (!irComandoActivado)
			{
				
			} else {

				cont_irComando++;
				if (cont_irComando==1)
				{
					escaqueIrComando = 7;
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

			return VERDADERO;

	 	} else if (event->keyval==65379) { // insercion (Notacion)

			if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(numeracionTableBoton)))
			{
				gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(numeracionTableBoton), FALSO);
			} else {
				gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(numeracionTableBoton), VERDADERO);
			}

			return VERDADERO;

	 	} else if (event->keyval==65360) { // inicio (Guia)

			if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(ayudaColorBoton)))
			{
				gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(ayudaColorBoton), FALSO);
			} else {
				gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(ayudaColorBoton), VERDADERO);
			}

			return VERDADERO;

	 	} else if (event->keyval==65365) { // pagina arriba (Sonido)

			if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(oirBoton)))
			{
				gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(oirBoton), FALSO);
			} else {
				gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(oirBoton), VERDADERO);
			}

			return VERDADERO;

	 	} else if (event->keyval==65535) { // suprimir (Sugerir)

			if (objInterface.oirAccesibilidad)
				resulSystem = system(strAplay_pensandoSugerencia);	
			sugerirJugada();			

			return VERDADERO;

	 	} else if (event->keyval==65366) { // pagina abajo (Rendirse)

			rendirse();			

			return VERDADERO;

	 	} else if (event->keyval==65367) { // fin (Voltear Tablero)

			cambiarLadoTablero();			

			return VERDADERO;

	 	} else if ((event->keyval==116) || (event->keyval==84)) { // T,t (Describir Tablero)

			if (objInterface.oirAccesibilidad)
			{
				for (i=0;i<64;i++)
				{
					if (ES_PIEZA(juego.historicoJuego[objInterface.indexJugada].vistaTablero[i].pieza))
					{
						reproducirSonidoDesEscaque(i);
				 		reproducirSonidoPiezaEscaque(i);
				 		if ((juego.historicoJuego[objInterface.indexJugada].vistaTablero[i].estado==
				 			CODESTADO_PIEZA_AMIGA_ATACADA) ||
				 		   (juego.historicoJuego[objInterface.indexJugada].vistaTablero[i].estado==
				 		   	CODESTADO_PIEZA_ENEMIGA_ATACADA))
				 		{
							resulSystem = system(strAplay_escaqueAtacado);	
				 		}	
					}
				}	
			}
			return VERDADERO;

	 	} else if ((event->keyval==105) || (event->keyval==73)) { // I, i (ir Comando)

			if (objInterface.oirAccesibilidad)
				resulSystem = system(strAplay_comandoIrActivado);	
			irComandoActivado = VERDADERO;
			cont_irComando = 0;

			return VERDADERO;
	 		
	 	} else if (((event->keyval > 48) && (event->keyval < 57)) || 
	 		   ((event->keyval > 65456) && (event->keyval < 65465))) { //Numeros comando ir Escaque

			if (irComandoActivado)
			{
				cont_irComando++;
				
				if (cont_irComando==2)
				{
					if (event->keyval < 57)
					{
						escaqueIrComando += ((event->keyval-49)*8); 
					} else {
						escaqueIrComando += ((event->keyval-65457)*8);
					}
			 		posAccesibilidad = escaqueIrComando; 
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;

					reproduccionInfoEscaque(posAccesibilidad);
					
				} else {
					irComandoActivado = FALSO;
					cont_irComando = 0;
					escaqueIrComando=0;
				}
			}

			return VERDADERO;

	 	} else if ((event->keyval==115) || (event->keyval==83) || 
	 		   (event->keyval==65293) || (event->keyval==65421) || (event->keyval==32)) { // S,s seleccionar escaque

	 		//Seleccion 
		if (((objInterface.tipoJuego == TIPO_JUEGO_HUMANO_HUMANO || 
		      objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC     || 
		      objInterface.tipoJuego == TIPO_JUEGO_HUMANO_RED)   &&   (juego.colorTurno == BLANCO))	||
	     	    ((objInterface.tipoJuego == TIPO_JUEGO_HUMANO_HUMANO || 
		      objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO     || 
		      objInterface.tipoJuego == TIPO_JUEGO_RED_HUMANO)   &&   (juego.colorTurno == NEGRO)))
		{

			if (posAccesibilidad == numPosOrigen){

				if (objInterface.oirAccesibilidad)
				{
					resulSystem = system(strAplay_quitar);	
					resulSystem = system(strAplay_seleccion);
					reproduccionInfoEscaque(posAccesibilidad);	
				}
				borrarAyudaColor();
				numPosOrigen 	= SIN_POS_VALIDAS;

			} else if (numPosOrigen == SIN_POS_VALIDAS) { 

				if (ES_PIEZA(VAC.pieza)) 
				{
					if ((OBT_COLOR_PIEZA(VAC.pieza) == juego.colorTurno) && (VAC.numPosValidas))
					{
						if (objInterface.oirAccesibilidad)
						{
							resulSystem = system(strAplay_seleccion);	
							reproduccionInfoEscaque(posAccesibilidad);
						}
						numPosOrigen = posAccesibilidad;
						mostrarAyudaColor();
					}
				}
		
			} else if (AC.numPosValidas) {

				for (i=0;i < AC.numPosValidas;i++)
				{
					if (posAccesibilidad == AC.posValidas[i])
					{
						destinoValido = VERDADERO;
					}
				}
				
				if (destinoValido)
				{
					movv = pos2movimiento(numPosOrigen, posAccesibilidad);
					if (movv)
					{
						//Accesibilidad
						if (objInterface.oirAccesibilidad)
						{
							resulSystem = system(strAplay_moverPiezaDe);
							reproducirSonidoPiezaEscaque(numPosOrigen);
							resulSystem = system(strAplay_de);
							reproducirSonidoDesEscaque(numPosOrigen);
							resulSystem = system(strAplay_hasta);
							reproducirSonidoDesEscaque(posAccesibilidad);
							
							if (ES_MOV_CAPTURA(movv))
							{
								resulSystem = system(strAplay_piezaCapturada);
								reproducirSonidoPiezaEscaque(posAccesibilidad);
							} 
							
							if (ES_MOV_PROMOCION(movv))
							{
								resulSystem = system(strAplay_vozPromocion);
							
							} else if (ES_MOV_OO(movv)) {

								resulSystem = system(strAplay_vozEnroqueCorto);
							
							} else if (ES_MOV_OOO(movv)) {

								resulSystem = system(strAplay_vozEnroqueLargo);
							}
						}

						esAccesibilidad = VERDADERO;
						hacerMovimiento(movv);
						if (objInterface.oirAccesibilidad)
						{
							if (ES_ESTADO_JUEGO_JAQUE)
							{
								resulSystem = system(strAplay_vozJaque);
							}
						}
						
						borrarAyudaColor();
						NOpintarTableroSelectivo = VERDADERO;
						juego.Buffer_MOV_INDEXCAPAS[1] = generarTodosMov(0);
						cargarVistaTablero();
						largo=mov2alg(movv, pngmov);
						bzero(&juego.historicoJuego[objInterface.indexJugada].movAlg[0],15);
						strncpy(&juego.historicoJuego[objInterface.indexJugada].movAlg[0],pngmov,largo);
						bloqueado = VERDADERO;
						esFaltaGrabar = VERDADERO;
						desplazarPieza(numPosOrigen, posAccesibilidad);
						numPosOrigen 	= SIN_POS_VALIDAS;

						sprintf(notacion,"%d. %s%s", (juego.totalMov+1)/2, 
										(juego.colorTurno==NEGRO?"":"... "),
							  juego.historicoJuego[objInterface.indexJugada].movAlg);

						gtk_combo_box_append_text(GTK_COMBO_BOX(combolista), notacion);
						gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), objInterface.indexJugada+1);
					}
				}
			}

		} 
			return VERDADERO;
		}
	}
	
	return FALSE;
}

void ini_POS_CEL_TABLERO_XY()
{

	int y=ajuste_y,x=ajuste_x, pivo=55, pivotmp=0,largoTableroX=largoTablero+ajuste_x,largoTableroY=largoTablero+ajuste_y;

	for (;x<largoTableroX;x+=tamanio_cuadro){
		pivo++;
		pivotmp = pivo;
		for (;y<largoTableroY;y+=tamanio_cuadro){
			vpos[pivotmp].pos_x = x;
			vpos[pivotmp].pos_y = y;
			pivotmp -=TAMANIO_MATRIZ;
		}
		y=ajuste_y;
	}
}

RGB* obtener_ColorCelda(uint8 posVista, int pos)
{

	int CuadroNegro = (tableroVista2[pos] == 'n');
	switch(posVista)
	{
		case CODESTADO_PIEZA_AMIGA_ATACADA:
			if (CuadroNegro)
				return &rgb11;
			else
				return &rgb5;

			break;
		case CODESTADO_PIEZA_ENEMIGA_ATACADA:

			if (CuadroNegro)
				return &rgb12;
			else
				return &rgb6;

			break;
		case BLANCO	:return &rgb2;break;
		case NEGRO	:return &rgb1;break;
	}

	return &rgb11;
}

static gboolean cambiarLadoTablero()
{

	if (!bloqueado)
	{
		objInterface.Lado2Jugar = (objInterface.Lado2Jugar == LADO_BLANCO ? LADO_NEGRO : LADO_BLANCO);
		if (objInterface.oirSonido)
			resulSystem = system(strAplay_girarTablero);
		reDibujarTodo();
	}	
	return TRUE;
}

static gboolean girarTablero()
{

	if (!bloqueado)
	{
		if (((juego.colorTurno == BLANCO) && (objInterface.Lado2Jugar == LADO_NEGRO)) ||
		    ((juego.colorTurno == NEGRO) &&  (objInterface.Lado2Jugar == LADO_BLANCO)))
		{
			objInterface.Lado2Jugar = (juego.colorTurno == BLANCO ? LADO_BLANCO : LADO_NEGRO);
			reDibujarTodo();
		}	
	}

	return FALSE;
}


static gboolean animacionPieza()
{

	int pos 		= 0; 
	int pos1 		= 0; 
	int pos2 		= 0; 
	int pos3 		= 0; 
	int posTransformada 	= 0; 
	int pos1Transformada 	= 0; 
	int pos2Transformada 	= 0; 
	int pos3Transformada 	= 0; 
	int origenTransformada 	= 0; 
	int destinoTransformada = 0;

	if (datosAnimacion.pasos > datosAnimacion.pasosTotal)
	{
		cairo_destroy(datosAnimacion.cr);
		pintarTableroSelectivo();

		bloqueado = FALSO;
		numPosOrigen = SIN_POS_VALIDAS;
		statusFinJuego = obtEstadoJuego();

		strMaquillado = g_markup_printf_escaped(
		 "<span background=\"#0D3C05\" weight=\"bold\" size=\"large\"><span color=\"#7A7A7A\"> Eval:%d </span><span color=\"#000000\"> Mat:%d </span><span color=\"#87CEFA\"> R.50:%d </span></span>",
	  	 evaluacionTablero(-INFINITO,INFINITO),
		 (juego.colorTurno?-juego.material_total:juego.material_total),juego.reglaCincuentaMov);
		gtk_label_set_markup(GTK_LABEL(labelMaterial), strMaquillado);
		if ((objInterface.oirSonido) && (objInterface.indexJugada > 0) && (juego.totalMov == objInterface.indexJugada))
		{
		
			if (ES_MOV_CAPTURA(juego.historicoJuego[objInterface.indexJugada-1].mov))
			{
				if ((OBT_MOV_CAPTURA(
					juego.historicoJuego[objInterface.indexJugada-1].mov)==DAMA_BLANCO) 
				   ||(OBT_MOV_CAPTURA(
				   	juego.historicoJuego[objInterface.indexJugada-1].mov)==DAMA_NEGRO))
				{
					resulSystem = system(strAplay_mover_dama);
					
				} else if ((rand()%10) < 4) {
				
					resulSystem = system(strAplay_capturar);
					
				} else {
				
					resulSystem = system(strAplay_capturar2);
				}
			}

			if (statusFinJuego == STATUS_FIN_JUEGO_JAQUE)
			{	
				resulSystem = system(strAplay_jaque);

			} else if ((statusFinJuego == STATUS_FIN_JUEGO_MATE_GANAN_B) ||
				    (statusFinJuego == STATUS_FIN_JUEGO_MATE_GANAN_N)) 
			{
				resulSystem = system(strAplay_jaqueMate);

			} else if (statusFinJuego == STATUS_FIN_JUEGO_TABLAS)
			{
				resulSystem = system(strAplay_ahogado);

			} else if (statusFinJuego == STATUS_FIN_JUEGO_TABLAS_REPETICION) {

				resulSystem = system(strAplay_empateGeneral);

			} else if (statusFinJuego == STATUS_FIN_JUEGO_TABLAS_INSUFI_MATERIAL) {

				resulSystem = system(strAplay_empateGeneral);

			} else if (statusFinJuego == STATUS_FIN_JUEGO_TABLAS_REGLA_50MOV) {

				resulSystem = system(strAplay_empateGeneral);
			}
		}

		if (statusFinJuego == STATUS_FIN_JUEGO_MATE_GANAN_B)
		{
			mostrarPanelNotificacion("Ganan las blancas", "El oponente está en jaque y no puede mover (Jaque Mate)");
			if (objInterface.oirAccesibilidad)
			{
				resulSystem = system(strAplay_vozJaqueMate);
				resulSystem = system(strAplay_vozGananBlancas);
			}

		} else if (statusFinJuego == STATUS_FIN_JUEGO_MATE_GANAN_N){

			mostrarPanelNotificacion("Ganan las negras", "El oponente está en jaque y no puede mover (Jaque Mate)");
			if (objInterface.oirAccesibilidad)
			{
				resulSystem = system(strAplay_vozJaqueMate);
				resulSystem = system(strAplay_vozGananNegras);
			}

		} else if (statusFinJuego == STATUS_FIN_JUEGO_TABLAS){

			mostrarPanelNotificacion("TABLAS", "El juego está ahogado...");
			if (objInterface.oirAccesibilidad)
			{
				resulSystem = system(strAplay_vozAhogado);
			}

		} else if (statusFinJuego == STATUS_FIN_JUEGO_TABLAS_REPETICION) {

			mostrarPanelNotificacion("TABLAS", "El estado del tablero se ha repetido 3 veces...");
			if (objInterface.oirAccesibilidad)
			{
				resulSystem = system(strAplay_vozRepeticion);
			}

		} else if (statusFinJuego == STATUS_FIN_JUEGO_TABLAS_INSUFI_MATERIAL) {

			mostrarPanelNotificacion("TABLAS", "No hay suficientes piezas para poder hacer Jaque Mate...");
			if (objInterface.oirAccesibilidad)
			{
				resulSystem = system(strAplay_vozInsuficienciaMaterial);
			}

		} else if (statusFinJuego == STATUS_FIN_JUEGO_TABLAS_REGLA_50MOV) {

			mostrarPanelNotificacion("TABLAS", "Regla de 50 Movimientos...");
			if (objInterface.oirAccesibilidad)
			{
				resulSystem = system(strAplay_vozReglaCincuenta);
			}

		} else if (((objInterface.tipoJuego == TIPO_JUEGO_HUMANO_HUMANO || 
		      objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC     || 
		      objInterface.tipoJuego == TIPO_JUEGO_HUMANO_RED)   &&   (juego.colorTurno == BLANCO))	||
	     	    ((objInterface.tipoJuego == TIPO_JUEGO_HUMANO_HUMANO || 
		      objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO     || 
		      objInterface.tipoJuego == TIPO_JUEGO_RED_HUMANO)   &&   (juego.colorTurno == NEGRO)))
		 {
			if ((objInterface.indexJugada == juego.totalMov) && (objInterface.Lado2JugarPreferencia==0) &&
					STATUS_FIN_JUEGO_NO_TERMINADO)
				g_timeout_add(100, (GSourceFunc) girarTablero, NULL);

		} else if ((objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO &&  (juego.colorTurno == BLANCO)) ||
		    	   (objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC &&  (juego.colorTurno == NEGRO))  || 
		     	    objInterface.tipoJuego == TIPO_JUEGO_PC_PC)
		{
			crearJugadaPC();		
		}

		direccionMovimiento=-1;
		return FALSE;		
	}

	int comodin=53, x=0,y=0, posVista;

	if (direccionMovimiento == MOV_ATRAS)
	{
		posVista=objInterface.indexJugada;
	 } else {
		posVista=objInterface.indexJugada-1;
	}

	if (posVista < 0) posVista = 0;
	if (datosAnimacion.posX < 1) datosAnimacion.posX = 1;
	if (datosAnimacion.posY < 1) datosAnimacion.posY = 1;



	pos = XY2POS(datosAnimacion.posX,datosAnimacion.posY);
  if ((pos > -1) && (pos < 64))
  {

	posTransformada 	= DES_TRANSFORMAR_POS(pos);
	origenTransformada 	= TRANSFORMAR_POS(datosAnimacion.posOrigen);
	destinoTransformada 	= TRANSFORMAR_POS(datosAnimacion.posFinal);
	if ((objInterface.verAyuda) && (posTransformada != origenTransformada))
	{
		resaltarPosTablero(datosAnimacion.cr, obtener_ColorCelda(
				   juego.historicoJuego[posVista].vistaTablero[posTransformada].estado,posTransformada),
				   posTransformada);
	} else {
		resaltarPosTablero(datosAnimacion.cr, obtener_ColorCelda(((ESCAQUES_NEGROS & BITSET[posTransformada]) ? NEGRO:BLANCO),
 						posTransformada),posTransformada);
	}
	if ((posTransformada != origenTransformada) && (posTransformada != destinoTransformada))
	{
		dibujarPieza(datosAnimacion.cr, pos);
	}
  } 
	x = datosAnimacion.posX+comodin;
	pos1 = XY2POS(x,datosAnimacion.posY);
  if ((pos1 > -1) && (pos1 < 64))
  {
	pos1Transformada = DES_TRANSFORMAR_POS(pos1); 
	if (pos1Transformada != posTransformada)
	{
		if ((objInterface.verAyuda) && (pos1Transformada != origenTransformada))
		{
			resaltarPosTablero(datosAnimacion.cr, obtener_ColorCelda(
			juego.historicoJuego[posVista].vistaTablero[pos1Transformada].estado,pos1Transformada), pos1Transformada);
		} else {
			resaltarPosTablero(datosAnimacion.cr, obtener_ColorCelda(((ESCAQUES_NEGROS & BITSET[pos1Transformada]) ?
					NEGRO:BLANCO), pos1Transformada), pos1Transformada);
		}
		if ((pos1Transformada != origenTransformada) && (pos1Transformada != destinoTransformada))
		{
			dibujarPieza(datosAnimacion.cr, pos1);
		}
	}
  } 

	y = datosAnimacion.posY+comodin;
	pos2 = XY2POS(datosAnimacion.posX,y);
  if ((pos2 > -1) && (pos2 < 64))
  {
	pos2Transformada = DES_TRANSFORMAR_POS(pos2); 
	if ((pos2Transformada != pos1Transformada) && (pos2Transformada != posTransformada))
	{
		if ((objInterface.verAyuda) && (pos2Transformada != origenTransformada))
		{
			resaltarPosTablero(datosAnimacion.cr, obtener_ColorCelda(
			juego.historicoJuego[posVista].vistaTablero[pos2Transformada].estado,pos2Transformada), pos2Transformada);
		} else {
			resaltarPosTablero(datosAnimacion.cr, obtener_ColorCelda(((ESCAQUES_NEGROS & BITSET[pos2Transformada]) ?
					NEGRO:BLANCO), pos2Transformada), pos2Transformada);
		}
		if ((pos2Transformada != origenTransformada) && (pos2Transformada != destinoTransformada))
		{
			dibujarPieza(datosAnimacion.cr, pos2);
		}
	}
  } 

	pos3 = XY2POS(x,y);
  if ((pos3 > -1) && (pos3 < 64))
  {
	pos3Transformada = DES_TRANSFORMAR_POS(pos3); 
	if ((pos3Transformada != pos2Transformada) && (pos3Transformada != pos1Transformada) && 
		(pos3Transformada != posTransformada)) 
	{
		if ((objInterface.verAyuda) && (pos3Transformada != origenTransformada))
		{
			resaltarPosTablero(datosAnimacion.cr, obtener_ColorCelda(
			juego.historicoJuego[posVista].vistaTablero[pos3Transformada].estado,pos3Transformada), pos3Transformada);
		} else {
			resaltarPosTablero(datosAnimacion.cr, obtener_ColorCelda(((ESCAQUES_NEGROS & BITSET[pos3Transformada]) ?
					NEGRO:BLANCO), pos3Transformada), pos3Transformada);
		}
		if ((pos3Transformada != origenTransformada) && (pos3Transformada != destinoTransformada))
		{
			dibujarPieza(datosAnimacion.cr, pos3);
		}
	}
   } 

		cairo_set_source_surface(datosAnimacion.cr, 
				vpiezas[datosAnimacion.indiceImagen].image, datosAnimacion.pivoX, datosAnimacion.pivoY);
	  	cairo_paint(datosAnimacion.cr);

	datosAnimacion.pivoX += datosAnimacion.largoSaltoX;
	datosAnimacion.pivoY += datosAnimacion.largoSaltoY;
	datosAnimacion.posX  += datosAnimacion.largoSaltoX;
	datosAnimacion.posY  += datosAnimacion.largoSaltoY;
	datosAnimacion.pasos++;

	if ((datosAnimacion.largoSaltoX > 0) && (datosAnimacion.pivoX > datosAnimacion.destinoX))
	{
		datosAnimacion.pivoX = datosAnimacion.destinoX;
	} else if ((datosAnimacion.largoSaltoX < 0) && (datosAnimacion.pivoX < datosAnimacion.destinoX))
	{
		datosAnimacion.pivoX = datosAnimacion.destinoX;
	}

	if ((datosAnimacion.largoSaltoY > 0) && (datosAnimacion.pivoY > datosAnimacion.destinoY))
	{
		datosAnimacion.pivoY = datosAnimacion.destinoY;
	} else if ((datosAnimacion.largoSaltoY < 0) && (datosAnimacion.pivoY < datosAnimacion.destinoY))
	{
		datosAnimacion.pivoY = datosAnimacion.destinoY;
	}

	return TRUE;

}

void desplazarPieza(int posOrigen, int posDestino)
{

	datosAnimacion.pasos     = 0;
	datosAnimacion.posOrigen = TRANSFORMAR_POS(posOrigen);
	datosAnimacion.posFinal  = TRANSFORMAR_POS(posDestino);
	ultimaPosInicial	 = posOrigen;
	ultimaPosFinal	 	 = posDestino;

	PIEZA pieza = juego.historicoJuego[objInterface.indexJugada].vistaTablero[posOrigen].pieza;

	if (objInterface.oirSonido)
	{
		switch (pieza)
		{
			case PEON_BLANCO	:
			case PEON_NEGRO		: resulSystem = system(strAplay_mover_peon);	break;    
			case ALFIL_BLANCO	:
			case ALFIL_NEGRO 	: resulSystem = system(strAplay_mover_alfil);	break;  
			case DAMA_BLANCO	:
			case DAMA_NEGRO 	: resulSystem = system(strAplay_mover_dama);	break;   
			case REY_BLANCO		:
			case REY_NEGRO		: 

				if (ES_MOV_OO(juego.historicoJuego[objInterface.indexJugada].mov) ||
				    ES_MOV_OOO(juego.historicoJuego[objInterface.indexJugada].mov)) {
	
					resulSystem = system(strAplay_enroque);break;	     
				    }	

				resulSystem = system(strAplay_mover_rey);break;	     

			case TORRE_BLANCO	:
			case TORRE_NEGRO	: resulSystem = system(strAplay_mover_torre);	break;
			case CABALLO_BLANCO	:
			case CABALLO_NEGRO 	: resulSystem = system(strAplay_mover_caballo);	break;
		}
	}
	datosAnimacion.indiceImagen = pieza;

	datosAnimacion.pivoX = datosAnimacion.posX = datosAnimacion.origenX = vpos[datosAnimacion.posOrigen].pos_x+ajusteCelda;
	datosAnimacion.pivoY = datosAnimacion.posY = datosAnimacion.origenY = vpos[datosAnimacion.posOrigen].pos_y+ajusteCelda;

	datosAnimacion.destinoX = vpos[datosAnimacion.posFinal].pos_x+ajusteCelda;
	datosAnimacion.destinoY = vpos[datosAnimacion.posFinal].pos_y+ajusteCelda;

	int largoX,largoY;


	largoX = abs((datosAnimacion.destinoX-datosAnimacion.origenX)/5);
	largoY = abs((datosAnimacion.destinoY-datosAnimacion.origenY)/5);

	datosAnimacion.pasosTotal = (largoX>largoY ? largoX : largoY);

	if (datosAnimacion.destinoX == datosAnimacion.origenX)
		datosAnimacion.largoSaltoX = 0;
	else
		datosAnimacion.largoSaltoX = (datosAnimacion.destinoX > datosAnimacion.origenX ? 5:-5);	


	if (datosAnimacion.destinoY == datosAnimacion.origenY)
		datosAnimacion.largoSaltoY = 0;
	else
		datosAnimacion.largoSaltoY = (datosAnimacion.destinoY > datosAnimacion.origenY ? 5:-5);


	datosAnimacion.pivoX+=datosAnimacion.largoSaltoX;
	datosAnimacion.pivoY+=datosAnimacion.largoSaltoY;

	datosAnimacion.posX -=(ajuste_x-1);
	datosAnimacion.posY -=(ajuste_y-1);

	datosAnimacion.cr  = gdk_cairo_create(area->window);
	g_timeout_add(20, (GSourceFunc) animacionPieza, NULL);

}

void pintarTableroSelectivo()
{
	int cel=0, ultimoCel=-1,  indexJuagadaAnterior= objInterface.indexJugada+desplazamiento;
	cairo_t *cr;
	cr = gdk_cairo_create(area->window);

	for (;cel < 64;cel++)
	{
		if ((juego.historicoJuego[indexJuagadaAnterior].vistaTablero[cel].pieza != 
			juego.historicoJuego[objInterface.indexJugada].vistaTablero[cel].pieza) || 
		    (juego.historicoJuego[indexJuagadaAnterior].vistaTablero[cel].estado != 
			juego.historicoJuego[objInterface.indexJugada].vistaTablero[cel].estado))
		{
			if (objInterface.verAyuda)
				resaltarPosTablero(cr, obtener_ColorCelda(
					juego.historicoJuego[objInterface.indexJugada].vistaTablero[cel].estado,cel), cel);
			else
				resaltarPosTablero(cr, obtener_ColorCelda(((ESCAQUES_NEGROS & BITSET[cel]) ? NEGRO:BLANCO),cel), cel);

			dibujarPieza(cr,DES_TRANSFORMAR_POS(cel));
			ultimoCel = cel;
		} 
	}

	if (ultimoCel > 0)
		dibujarPieza(cr,DES_TRANSFORMAR_POS(ultimoCel));

	if (objInterface.verAyuda)
		resaltarUltimoMovimiento(cr);

	cairo_destroy(cr);

}

static void pintarNotacionTablero(gpointer callback_data, guint callback_action, GtkWidget *menu_item)
{
	espintarNotacionTablero = !espintarNotacionTablero;
	reDibujarTodo();	
}

void pintarTablero()
{
	char notacion[3];
	bzero(notacion,3);

	int cel=0;
	cairo_t *cr;
	cr = gdk_cairo_create(area->window);

	if (objInterface.verAyuda)
	{
		for (;cel<LARGO_POS_TABLERO;cel++)
		{
			resaltarPosTablero(cr, obtener_ColorCelda(
				juego.historicoJuego[objInterface.indexJugada].vistaTablero[cel].estado,cel), cel);

		}
		resaltarUltimoMovimiento(cr);		
	
	} else {
		for (;cel<LARGO_POS_TABLERO;cel++)
		{
			resaltarPosTablero(cr, obtener_ColorCelda(((ESCAQUES_NEGROS & BITSET[cel]) ? NEGRO:BLANCO),cel), cel);
		}
	}

	cairo_destroy(cr);
}

void resaltarPosTablero(cairo_t *cr, RGB *rgb, int numPos)
{
	char notacionT[3];
	bzero(notacionT,3);

	if (numPos<0 || numPos>63) return;

	int posTransformada = TRANSFORMAR_POS(numPos);
	dibujarRectangulo(cr, vpos[posTransformada].pos_x , vpos[posTransformada].pos_y, tamanio_cuadro, tamanio_cuadro,rgb);
	if (espintarNotacionTablero && ESCAQUES[numPos]==VACIO)
	{
		notacionT[0] = NUM2ALG[numPos][0];
		notacionT[1] = NUM2ALG[numPos][1];
		mostrarMensajeEnTableroRGB(rgb,
			vpos[posTransformada].pos_x+(tamanio_cuadro*0.10),
			vpos[posTransformada].pos_y+(tamanio_cuadro*0.80),
			notacionT,(int)(tamanio_cuadro*0.6));
	}
}

void resaltarUltimoMovimiento(cairo_t *cr)
{

	if ((juego.totalMov == objInterface.indexJugada) && objInterface.verAyuda && !noResaltarUltimaPos) 
	{

		if ((ultimaPosInicial > -1 && ultimaPosInicial < 64) && (ultimaPosFinal > -1 && ultimaPosFinal < 64))
		{
			dibujarBordeRectangulo(
				cr, vpos[TRANSFORMAR_POS(ultimaPosInicial)].pos_x, 
				    vpos[TRANSFORMAR_POS(ultimaPosInicial)].pos_y,tamanio_cuadro-1, tamanio_cuadro-1);	
			dibujarBordeRectangulo(
				cr, vpos[TRANSFORMAR_POS(ultimaPosFinal)].pos_x,	
				    vpos[TRANSFORMAR_POS(ultimaPosFinal)].pos_y,tamanio_cuadro-1, tamanio_cuadro-1);	
		}
	}
}

void dibujarRectangulo(cairo_t *cr, int x, int y, int ancho, int alto, RGB *rgb)
{
	cairo_set_source_rgb(cr, rgb->rojo, rgb->verde, rgb->azul);
	cairo_rectangle(cr,x,y,ancho,alto);
	cairo_fill(cr);
}

void dibujarBordeRectangulo(cairo_t *cr, int x, int y, int ancho, int alto)
{

	cairo_set_source_rgb(cr, rgb19.rojo, rgb19.verde, rgb19.azul);
	cairo_rectangle(cr,x+4,y+4,ancho-8,alto-8);
	cairo_set_line_width(cr, 1);
	cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER); 
	cairo_stroke(cr);

	cairo_set_source_rgb(cr, rgb18.rojo, rgb18.verde, rgb18.azul);
	cairo_rectangle(cr,x+3,y+3,ancho-6,alto-6);
	cairo_set_line_width(cr, 1);
	cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER); 
	cairo_stroke(cr);

	cairo_set_source_rgb(cr, rgb17.rojo, rgb17.verde, rgb17.azul);
	cairo_rectangle(cr,x+2,y+2,ancho-4,alto-4);
	cairo_set_line_width(cr, 1);
	cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER); 
	cairo_stroke(cr);

	cairo_set_source_rgb(cr, rgb16.rojo, rgb16.verde, rgb16.azul);
	cairo_rectangle(cr,x+1,y+1,ancho-2,alto-2);
	cairo_set_line_width(cr, 2);
	cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER); 
	cairo_stroke(cr);
}

void dibujarBordeRectanguloCursor(cairo_t *cr, int x, int y, int ancho, int alto)
{

	double dashes[] = {1,  /* lleno */
        	           1.5,  /* vacio */
        	           1,  /* lleno */
        	           1.5   /* vacio*/
        			          };
	int    ndash  = sizeof (dashes)/sizeof(dashes[0]);
	double offset = -10.0;

	cairo_set_dash (cr, dashes, ndash, offset);

	cairo_set_source_rgb(cr, 0, 0, 0);
	cairo_rectangle(cr,x+1,y+1,ancho-1,alto-1);
	cairo_set_line_width(cr, 1);
	cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER); 
	cairo_stroke(cr);
}


void dibujarPieza(cairo_t *cr, int pos)
{
	char ponderacion[6];
	int pos_ponderada=0;

	int posTransformada = TRANSFORMAR_POS(pos);	
	PIEZA pieza = juego.historicoJuego[objInterface.indexJugada].vistaTablero[posTransformada].pieza;

	if (ES_PIEZA(pieza))
	{
		cairo_set_source_surface(cr, vpiezas[pieza].image, 
				vpos[pos].pos_x+ajusteCelda, vpos[pos].pos_y+ajusteCelda);
	  	cairo_paint(cr);

		if (objInterface.verAyuda)
		{
			pos_ponderada = EETPOS(posTransformada, juego.colorTurno);

			if (juego.colorTurno)
			{
				pos_ponderada = -pos_ponderada;
			}

			if (pos_ponderada != 0)
			{
				bzero(ponderacion,6);
				sprintf(ponderacion,"%d",pos_ponderada);

				if (pos_ponderada > 0)
				{			
					mostrarMensajeEnTablero_cr(cr, vpos[pos].pos_x,vpos[pos].pos_y,
						ponderacion,(int)(tamanio_cuadro*0.2), &rgb4, ALINEACION_AABAJO);
				} else {
					mostrarMensajeEnTablero_cr(cr, vpos[pos].pos_x,vpos[pos].pos_y,
						ponderacion,(int)(tamanio_cuadro*0.2), &rgb11, ALINEACION_AABAJO);
				}
			}
			//Dibujar si es la pieza esta clavada
			if (juego.historicoJuego[objInterface.indexJugada].vistaTablero[posTransformada].esClavada)
			{	
				cairo_set_source_surface(cr,imagen_clavada, vpos[pos].pos_x+2, vpos[pos].pos_y+2);
			  	cairo_paint(cr);

			} else if (juego.historicoJuego[objInterface.indexJugada].vistaTablero[posTransformada].esClavadaRey) {

				cairo_set_source_surface(cr,imagen_clavada2, vpos[pos].pos_x+2, vpos[pos].pos_y+2);
			  	cairo_paint(cr);
			}

		}
	}
}


void dibujarPiezas()
{
	int pos=0;
	cairo_t *cr;
	cr = gdk_cairo_create(area->window);

	for (;pos<LARGO_POS_TABLERO;pos++)
		dibujarPieza(cr, TRANSFORMAR_POS(pos));
	
	cairo_destroy(cr);
}

int obtener_indice(int id)
{
	switch (id)
	{
		case REY_NEGRO		: return 0;  break;
		case PEON_NEGRO		: return 1;  break;
		case TORRE_NEGRO	: return 2;  break;
		case CABALLO_NEGRO	: return 3;  break;
		case ALFIL_NEGRO	: return 4;  break;
		case DAMA_NEGRO		: return 5;  break;
		case REY_BLANCO		: return 6;  break;
		case PEON_BLANCO	: return 7;  break;
		case TORRE_BLANCO	: return 8;  break;
		case CABALLO_BLANCO	: return 9;  break;
		case ALFIL_BLANCO	: return 10; break;
		case DAMA_BLANCO	: return 11; break;
	}

	return 12;
} 

void cargar_vpiezas_IG()
{
	char rutacorta[LARGO_TIPO_PIEZA_RUTA_CHAR];
	char temporal[LARGO_RUTAPIEZA];

	switch (objInterface.tipoPiezas)
	{
		case TIPO_PIEZA_NORMAL: 
			strcpy(rutacorta, TIPO_PIEZA_NORMAL_RUTA); 
			tamanio_pieza	= TAMANIO_PIEZA;  		
			break;

		case TIPO_PIEZAMINI_NORMAL: 
			strcpy(rutacorta, TIPO_PIEZAMINI_NORMAL_RUTA); 	
			tamanio_pieza	= TAMANIO_PIEZA_MINI;  		
			break;

		case TIPO_PIEZA_CLASICO: 
			strcpy(rutacorta, TIPO_PIEZA_CLASICO_RUTA); 		
			tamanio_pieza	= TAMANIO_PIEZA;  		
			break;

		case TIPO_PIEZAMINI_CLASICO: 
			strcpy(rutacorta, TIPO_PIEZAMINI_CLASICO_RUTA);	
			tamanio_pieza	= TAMANIO_PIEZA_MINI;  		
			break;

		case TIPO_PIEZA_ANIMADOS: 
			strcpy(rutacorta, TIPO_PIEZA_ANIMADOS_RUTA); 		
			tamanio_pieza	= TAMANIO_PIEZA;  		
			break;

		case TIPO_PIEZAMINI_ANIMADOS: 
			strcpy(rutacorta, TIPO_PIEZAMINI_ANIMADOS_RUTA);	
			tamanio_pieza	= TAMANIO_PIEZA_MINI;  		
			break;

		default: 
			strcpy(rutacorta, TIPO_PIEZA_NORMAL_RUTA);
			tamanio_pieza	= TAMANIO_PIEZA;  		
	} 

	//Piezas Blancas
	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, ALFIL_BLANCO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[ALFIL_BLANCO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, CABALLO_BLANCO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[CABALLO_BLANCO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, DAMA_BLANCO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[DAMA_BLANCO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, PEON_BLANCO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[PEON_BLANCO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, TORRE_BLANCO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[TORRE_BLANCO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, REY_BLANCO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[REY_BLANCO].rutaPieza, temporal);	

	//piezas Negras
	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, ALFIL_NEGRO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[ALFIL_NEGRO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, CABALLO_NEGRO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[CABALLO_NEGRO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, DAMA_NEGRO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[DAMA_NEGRO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, PEON_NEGRO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[PEON_NEGRO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, TORRE_NEGRO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[TORRE_NEGRO].rutaPieza, temporal);	

	bzero(temporal, LARGO_RUTAPIEZA);
	sprintf(temporal, "%s/%s%s", strRutaApp, rutacorta, REY_NEGRO_NOMBRE_ARCHIVO);
	strcpy(vpiezasIG[REY_NEGRO].rutaPieza, temporal);	
}

void cargar_vpiezas()
{
	vpiezas[REY_NEGRO].image 	= cairo_image_surface_create_from_png(vpiezasIG[REY_NEGRO].rutaPieza);
	vpiezas[PEON_NEGRO].image 	= cairo_image_surface_create_from_png(vpiezasIG[PEON_NEGRO].rutaPieza);
	vpiezas[TORRE_NEGRO].image 	= cairo_image_surface_create_from_png(vpiezasIG[TORRE_NEGRO].rutaPieza);
	vpiezas[CABALLO_NEGRO].image 	= cairo_image_surface_create_from_png(vpiezasIG[CABALLO_NEGRO].rutaPieza);
	vpiezas[ALFIL_NEGRO].image 	= cairo_image_surface_create_from_png(vpiezasIG[ALFIL_NEGRO].rutaPieza);
	vpiezas[DAMA_NEGRO].image 	= cairo_image_surface_create_from_png(vpiezasIG[DAMA_NEGRO].rutaPieza);

	vpiezas[REY_BLANCO].image 	= cairo_image_surface_create_from_png(vpiezasIG[REY_BLANCO].rutaPieza);
	vpiezas[PEON_BLANCO].image 	= cairo_image_surface_create_from_png(vpiezasIG[PEON_BLANCO].rutaPieza);
	vpiezas[TORRE_BLANCO].image 	= cairo_image_surface_create_from_png(vpiezasIG[TORRE_BLANCO].rutaPieza);
	vpiezas[CABALLO_BLANCO].image 	= cairo_image_surface_create_from_png(vpiezasIG[CABALLO_BLANCO].rutaPieza);
	vpiezas[ALFIL_BLANCO].image 	= cairo_image_surface_create_from_png(vpiezasIG[ALFIL_BLANCO].rutaPieza);
	vpiezas[DAMA_BLANCO].image 	= cairo_image_surface_create_from_png(vpiezasIG[DAMA_BLANCO].rutaPieza);
}


void borrarAyudaColor()
{
	cairo_t *cr;
	int i, posDestino;
	cr = gdk_cairo_create(area->window);

	resaltarPosTablero(cr, obtener_ColorCelda(
		juego.historicoJuego[objInterface.indexJugada].vistaTablero[numPosOrigen].estado,numPosOrigen), numPosOrigen);
	dibujarPieza(cr,DES_TRANSFORMAR_POS(numPosOrigen));

	for (i=0;i < juego.historicoJuego[objInterface.indexJugada].vistaTablero[numPosOrigen].numPosValidas; i++)
	{

		posDestino = juego.historicoJuego[objInterface.indexJugada].vistaTablero[numPosOrigen].posValidas[i]; 

		if (objInterface.verAyuda)
			resaltarPosTablero(cr, obtener_ColorCelda(
				juego.historicoJuego[objInterface.indexJugada].vistaTablero[posDestino].estado, 
					posDestino),posDestino);
		else
			resaltarPosTablero(cr, obtener_ColorCelda(((ESCAQUES_NEGROS & BITSET[posDestino]) ?
			NEGRO:BLANCO),posDestino), posDestino);

		if (juego.historicoJuego[objInterface.indexJugada].vistaTablero[posDestino].pieza != VACIO)
			dibujarPieza(cr,DES_TRANSFORMAR_POS(posDestino));

	}

	resaltarUltimoMovimiento(cr);
	cairo_destroy(cr);
}

void mostrarAyudaColor()
{

	cairo_t *cr;
	int  i, posValDestino;
	MOVIMIENTO movv;
	int pos_ponderada	= 0;
	int posTransformada	= 0;
	char ponderacion[6];
	BOOLEANO cuadroNegro;

	cr = gdk_cairo_create(area->window);

	if (numPosOrigen == SIN_POS_VALIDAS) return;

	resaltarPosTablero(cr, &rgb3,numPosOrigen);
	dibujarPieza(cr,DES_TRANSFORMAR_POS(numPosOrigen));

	if (objInterface.verAyuda) 
	{
		for (i=0;i < juego.historicoJuego[objInterface.indexJugada].vistaTablero[numPosOrigen].numPosValidas; i++)
		{

			posValDestino = juego.historicoJuego[objInterface.indexJugada].vistaTablero[numPosOrigen].posValidas[i];
			cuadroNegro   = ((ESCAQUES_NEGROS & BITSET[posValDestino]) ? VERDADERO:FALSO);

			resaltarPosTablero(cr,(
			juego.historicoJuego[objInterface.indexJugada].vistaTablero[posValDestino].pieza != VACIO ?
			 (cuadroNegro ? &rgb13: &rgb7) : (cuadroNegro ? &rgb10:&rgb4)),posValDestino);
			dibujarPieza(cr,DES_TRANSFORMAR_POS(posValDestino));

			movv = pos2movimiento(numPosOrigen, posValDestino);
			if (movv)
			{
				
				if (ES_MOV_CAPTURA(movv))
				{
					pos_ponderada = EET(movv);
				} else {

					hacerMovimiento(movv);
					pos_ponderada = EETPOS(posValDestino,juego.colorTurno);
					desHacerMovimiento(movv);
					if (juego.colorTurno)
					{
						pos_ponderada = -pos_ponderada;
					}
				}


				if (pos_ponderada != 0)
				{
					bzero(ponderacion,6);
					sprintf(ponderacion,"%d",pos_ponderada);
					posTransformada = TRANSFORMAR_POS(posValDestino);
					if (pos_ponderada > 0)
					{			
						mostrarMensajeEnTablero_cr(cr, vpos[posTransformada].pos_x,vpos[posTransformada].pos_y,
							ponderacion,(int)(tamanio_cuadro*0.2), &rgb4, ALINEACION_AARIBA);
					} else {
						mostrarMensajeEnTablero_cr(cr, vpos[posTransformada].pos_x,vpos[posTransformada].pos_y,
							ponderacion,(int)(tamanio_cuadro*0.2), &rgb11, ALINEACION_AARIBA);
					}
				}
			}
		}

		resaltarUltimoMovimiento(cr);

	}
	cairo_destroy(cr);

}

static gboolean salir_destroy()
{
	
	if (bloqueado)
	{
		EJECUTAR_SALIDA;
	} 

	if (esFaltaGrabar)
	{
		esCerradoVentana = VERDADERO;	
		salir();
	} else {

		EJECUTAR_SALIDA;
	}

	return TRUE;
	
}

static gboolean salir()
{


	char *markup;
	GtkWidget *labelMensaje, *imagen, *hbox, *vbox, *content_area;
	GtkWidget *ventanaConfirmar;
	int respuesta = 0;


	if (bloqueado) return FALSE;

	ventanaConfirmar = gtk_dialog_new_with_buttons ("Desea Cerrar Mango Paola Ajedrez",
					         NULL,
					         GTK_DIALOG_DESTROY_WITH_PARENT,
					         GTK_STOCK_QUIT,
					         GTK_RESPONSE_NO,
					         NULL);
	if (esFaltaGrabar)
		gtk_dialog_add_button(GTK_DIALOG(ventanaConfirmar), GTK_STOCK_SAVE,GTK_RESPONSE_YES);

	if (!esCerradoVentana)
		gtk_dialog_add_button(GTK_DIALOG(ventanaConfirmar), GTK_STOCK_CANCEL,GTK_RESPONSE_CANCEL);

	content_area = (GTK_DIALOG(ventanaConfirmar))->vbox;
	labelMensaje = gtk_label_new("");
	markup = g_markup_printf_escaped(
			(esFaltaGrabar?"<span size=\"x-large\">¿ Desea grabar el juego antes de salir ?</span>":
				       "<span size=\"x-large\">¿ Desea salir del juego ?</span>"));

	gtk_label_set_markup(GTK_LABEL(labelMensaje), markup);

	imagen = gtk_image_new_from_stock(GTK_STOCK_DIALOG_WARNING, GTK_ICON_SIZE_DIALOG);
	hbox  = gtk_hbox_new(FALSE, 5);
	vbox  = gtk_vbox_new(FALSE, 5);

	gtk_box_pack_start(GTK_BOX(hbox), imagen, FALSE, FALSE, 5);
	gtk_box_pack_start(GTK_BOX(hbox), labelMensaje, FALSE, FALSE, 5);
	gtk_box_pack_start(GTK_BOX(vbox), hbox, FALSE, FALSE, 15);

	gtk_container_add(GTK_CONTAINER(content_area), vbox);
	gtk_widget_show_all(ventanaConfirmar);

	respuesta = gtk_dialog_run(GTK_DIALOG(ventanaConfirmar));

	g_free(markup);
	gtk_widget_destroy(ventanaConfirmar);

	if (respuesta == GTK_RESPONSE_YES)
    	{
		guardar();
		EJECUTAR_SALIDA;

	} else if (respuesta == GTK_RESPONSE_CANCEL) {

		if (esCerradoVentana)
		{
			EJECUTAR_SALIDA;

		} else {
			return FALSE;
		}
	
	} else if (respuesta == GTK_RESPONSE_NO) {

		EJECUTAR_SALIDA;
	}

	
	return TRUE;
}

int obtenerBASETIEMPO()
{
	char h[80], m[80], s[80];
	time_t tiempo	 = (time_t)0;
	struct tm *tmptr = localtime(&tiempo);
	strftime(h,80,"%H",tmptr);
	strftime(m,80,"%M",tmptr);
	strftime(s,80,"%S",tmptr);
	return 86400-((atoi(h)*3600)+(atoi(m)*60)+atoi(s));
}


void cargarComboHistorial()
{

	int i;

	for (i=0; i <= juego.totalMov; i++)
	{
		sprintf(notacion,"%d. %s%s", (i+1)/2, (i%2?"":"... "), juego.historicoJuego[i].movAlg);
		gtk_combo_box_append_text(GTK_COMBO_BOX(combolista), notacion);
	}
	gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), objInterface.indexJugada);


}


int cargarUltimoEstado()
{
	bzero(strArmarRuta, MAX_RUTA_PATH);
	sprintf(strArmarRuta, "%s/ultimoestado.obj",strRutaHomeDatos);

	FILE *archivo = fopen(strArmarRuta,"r");
//	FILE *archivo = fopen("/var/games/mangopaola/ultimoestado.obj","r");

	if (!archivo)
	{
		printf("No se ha podido cargar el archivo ultimoestado.obj\n");
		return FALSO;
	}

	while (fread(&objInterface, sizeof(objInterface), 1,archivo));
	fclose(archivo);

	return (objInterface.numeroMagico1==0xCAFE && objInterface.numeroMagico2==0xB071);

}

int guardarUltimoEstado()
{
//*
	bzero(strArmarRuta, MAX_RUTA_PATH);
	sprintf(strArmarRuta, "%s/ultimoestado.obj",strRutaHomeDatos);
	FILE *archivo = fopen(strArmarRuta,"w");
//*/
//	FILE *archivo = fopen("/var/games/mangopaola/ultimoestado.obj","w");

	if (!archivo)
	{
		printf("No se ha podido guardar el archivo ultimoestado.obj\n");
		return FALSO;
	}


	if (objInterface.esCargaJuego)
	{
		if (!strlen(objInterface.nombreArchivoPGN))
		{
			objInterface.esCargaJuego = FALSO;
		}
	}

	fwrite(&objInterface, sizeof(objInterface), 1,archivo);
	return VERDADERO;
	fclose(archivo);

}

void mostrarMensajeEnTablero_cr(cairo_t *cr, int x, int y, char *mensaje, int tamanio, RGB *rgb, int alineacion)
{

	x = x +(tamanio_cuadro*0.1);
	if (alineacion == ALINEACION_AARIBA)
	{
		y = (y + tamanio);

	} else {

		y = y + (tamanio_cuadro-(tamanio/2));
	}

	cairo_set_source_rgb (cr, 0.0, 0.0, 0.0);
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, tamanio);
	cairo_move_to(cr, x,y);
	cairo_show_text(cr, mensaje);

	cairo_set_source_rgb (cr, rgb->rojo, rgb->verde, rgb->azul);
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, tamanio);
	cairo_move_to(cr, x+1,y-1);
	cairo_show_text(cr, mensaje);
}

void mostrarMensajeEnTablero(int x, int y, char *mensaje, int tamanio)
{

	cairo_t *cr;
	cr = gdk_cairo_create(area->window);

	cairo_set_source_rgb (cr, 0.0, 0.0, 0.0);
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, tamanio);
	cairo_move_to(cr, x,y);
	cairo_show_text(cr, mensaje);

	cairo_set_source_rgb (cr, rgb17.rojo, rgb17.verde, rgb17.azul);
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, tamanio);
	cairo_move_to(cr, x+5,y-5);
	cairo_show_text(cr, mensaje);

	dibujarPieza(cr, TRANSFORMAR_POS(OBT_MOV_DESTINO(juego.historicoJuego[juego.totalMov-1].mov)));
	cairo_destroy(cr);

}

void mostrarMensajeEnTableroRGB(RGB *rgb, int x, int y, char *mensaje, int tamanio)
{

	cairo_t *cr;
	cr = gdk_cairo_create(area->window);

	cairo_set_source_rgb (cr, 0.0, 0.0, 0.0);
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, tamanio);
	cairo_move_to(cr, x,y);
	cairo_show_text(cr, mensaje);

	cairo_set_source_rgb (cr, rgb->rojo, rgb->verde, rgb->azul);
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, tamanio);
	cairo_move_to(cr, x+4,y-4);
	cairo_show_text(cr, mensaje);

	cairo_destroy(cr);

}


void crearJugadaPC()
{
	if (objInterface.esPorTiempo)
	{
		esTiempoForzado = VERDADERO; 
		tinicial = obt_sysmsTiempo();
	}		 

	mostrarMensajeEnTablero(vpos[50].pos_x,vpos[56].pos_y,"!! PENSANDO !!",(int)(tamanio_cuadro*0.5));
	mostrarMensajeEnTablero(vpos[50].pos_x,vpos[56].pos_y,"!! PENSANDO !!",(int)(tamanio_cuadro*0.5));

	if (esAccesibilidad && objInterface.oirAccesibilidad)
	{
		resulSystem = system(strAplay_mangoPaolaPensando);
	}

	MOVIMIENTO m = pensarRapido();

	if (!m)
	{
		printf("\nNo se encontró ningún movimiento valido\n");
		mostrarPanelNotificacion("Mensaje desde el motor","Mango Paola no ha encontrado ningún movimiento valido");
		statusFinJuego = STATUS_FIN_JUEGO_INDETERMINADO;
		return;     
	}

	if (objInterface.esPorTiempo)
	{ 
		procesarTiempoJuego();
		esTiempoForzado = FALSO; 
	}		 

	if (esAccesibilidad && objInterface.oirAccesibilidad)
	{
		resulSystem = system(strAplay_moverPiezaDe);
		reproducirSonidoPiezaEscaque(OBT_MOV_ORIGEN(m));
		resulSystem = system(strAplay_de);
		reproducirSonidoDesEscaque(OBT_MOV_ORIGEN(m));
		resulSystem = system(strAplay_hasta);
		reproducirSonidoDesEscaque(OBT_MOV_DESTINO(m));
		
		if (ES_MOV_CAPTURA(m))
		{
			resulSystem = system(strAplay_piezaCapturada);
			reproducirSonidoPiezaEscaque(OBT_MOV_DESTINO(m));
		}

		if (ES_MOV_PROMOCION(m))
		{
			resulSystem = system(strAplay_vozPromocion);
		
		} else if (ES_MOV_OO(m)) {

			resulSystem = system(strAplay_vozEnroqueCorto);
		
		} else if (ES_MOV_OOO(m)) {

			resulSystem = system(strAplay_vozEnroqueLargo);
		}

		if (ES_ESTADO_JUEGO_JAQUE)
		{
			resulSystem = system(strAplay_vozJaque);
		}
	}

	esFaltaGrabar = VERDADERO;
	hacerMovimiento(m);

	if (esAccesibilidad && objInterface.oirAccesibilidad)
	{
		if (ES_ESTADO_JUEGO_JAQUE)
		{
			resulSystem = system(strAplay_vozJaque);
		}
	}
	
	if (esAccesibilidad) esAccesibilidad = FALSO;
	
	juego.Buffer_MOV_INDEXCAPAS[1] = generarTodosMov(0);
	cargarVistaTablero();
	int largo=mov2alg(m, pngmov);
	bzero(&juego.historicoJuego[objInterface.indexJugada].movAlg[0],15);
	strncpy(&juego.historicoJuego[objInterface.indexJugada].movAlg[0],pngmov,largo);
	
	NOpintarTableroSelectivo = VERDADERO;
	bloqueado = VERDADERO;
	desplazarPieza(OBT_MOV_ORIGEN(m), OBT_MOV_DESTINO(m));
	pintarFondo();
	pintarTablero();
	dibujarPiezas();

	numPosOrigen 	= SIN_POS_VALIDAS;

	sprintf(notacion,"%d. %s%s", (juego.totalMov+1)/2, 
					(juego.colorTurno==NEGRO?"":"... "),
		  juego.historicoJuego[objInterface.indexJugada].movAlg);

	gtk_combo_box_append_text(GTK_COMBO_BOX(combolista), notacion);
	gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), objInterface.indexJugada+1);

}

static void salirDesdeMenu(GtkWidget *w, gpointer data)
{
	salir();
}

static void verBarHistorial(gpointer callback_data, guint callback_action, GtkWidget *menu_item)
{

	if (!bloqueado)
	{
		objInterface.verBarraHistorial = !objInterface.verBarraHistorial; 
		if (objInterface.verBarraHistorial)
			gtk_widget_show(box_bajo);
		else 
			gtk_widget_hide(box_bajo);
	}
}

static void verBarHerramientas(gpointer callback_data, guint callback_action, GtkWidget *menu_item)
{
	if (!bloqueado)
	{
		objInterface.verBarraHerramientas = !objInterface.verBarraHerramientas; 
		if (objInterface.verBarraHerramientas)
			gtk_widget_show(barra);
		else 
			gtk_widget_hide(barra);
	}
}

static void menuNuevo(GtkWidget *w, gpointer data)
{
	nuevo();
}

static void menuAbrir(GtkWidget *w, gpointer data)
{
	abrir();
}

static void menuAbrirPGN(GtkWidget *w, gpointer data)
{
	esAbrirPGN = VERDADERO;
	abrir();
}


static void menuGuardar(GtkWidget *w, gpointer data)
{
	guardar();
}

static void menuGuardarComo(GtkWidget *w, gpointer data)
{
	esGuardarComo = VERDADERO;
	guardar();
}

static void menuAyuda(GtkWidget *w, gpointer data)
{
	bzero(strArmarRuta, MAX_RUTA_PATH);
	sprintf(strArmarRuta, "evince %s/ayuda/MangoPaolaAjedrezAyuda.pdf &",strRutaApp);

	resulSystem = system(strArmarRuta);
}

static void menuAccesibilidad(GtkWidget *w, gpointer data)
{
	char *markup;
	char msm[] = "Con el foco en el tablero usted podrá hacer lo siguiente:\n\nTeclas Fechas	: Mover el cursor entre los escaques\nTecla I		: Activa el comando ir a escaque, luego podrá escribir en modo\n		          algebraico el escaque destino,  ejemplo: H6.\nTecla P		: Reproduce una voz que informa donde ésta el cursor.\nTecla T		: Reproduce una voz informando los escaques ocupados por piezas,\n		          uno por uno sin interrupción\n\nTeclas S, Espaciadora, Enter: Selecciona/Des-selecciona el escaque actual.\nNota: Debe estar activa la casilla (Voz Accesibilidad) del\nmenu Ajustes - Voz Accesibilidad\ntambién, con la combinación de teclas control y la V";

	GtkWidget 	*labelTitulo, *vboxGeneral,*content_area, *consola, *ventanaConsola, *frameTexto;
	GtkTextBuffer 	*buffer;
	GtkTextIter 	iter;
	GdkPixbuf       *picBufImagen; 
	int		indexImagen = rand() % 16;

	if (indexImagen==0 || indexImagen==4 || indexImagen==8 || indexImagen==12) indexImagen = PEON_BLANCO;

	labelTitulo	= gtk_label_new ("");
	markup 		= g_markup_printf_escaped(
			"<span weight=\"bold\" size=\"large\">Ayuda para Garantizar el Acceso a Todos y Todas</span>");
	gtk_label_set_markup(GTK_LABEL(labelTitulo), markup);

	vboxGeneral	= gtk_vbox_new(FALSE, 1);
	consola		= gtk_text_view_new();
	buffer		= gtk_text_view_get_buffer(GTK_TEXT_VIEW(consola));
	picBufImagen	= gdk_pixbuf_new_from_file(vpiezasIG[indexImagen].rutaPieza, NULL);
	frameTexto 	= gtk_frame_new(NULL);

	gtk_text_view_set_editable(GTK_TEXT_VIEW(consola),FALSE); 

	ventanaConsola = gtk_dialog_new_with_buttons ("Mango Paola Ajedrez",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_OK,
				                 GTK_RESPONSE_OK,
				                 NULL);

	gtk_window_resize(GTK_WINDOW(ventanaConsola), TAMANIO_MIN_RESOL_ANCHO, TAMANIO_MIN_RESOL_ALTO/2);
	GTK_WINDOW(ventanaConsola)->allow_shrink = TRUE;

	content_area = (GTK_DIALOG(ventanaConsola))->vbox;

	gtk_container_add (GTK_CONTAINER(content_area), vboxGeneral);
	gtk_widget_show(vboxGeneral);	

	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelTitulo, FALSE, FALSE, 1);
	gtk_widget_show(labelTitulo);	

	gtk_container_add (GTK_CONTAINER(frameTexto), consola);
	gtk_box_pack_start(GTK_BOX(vboxGeneral), frameTexto, TRUE, TRUE, 1);
	gtk_widget_show(frameTexto);	
	gtk_widget_show(consola);	


	//Las propiedades vienen de GtkTextTag
	gtk_text_buffer_create_tag(buffer, "bold", "weight", PANGO_WEIGHT_BOLD, NULL);
	gtk_text_buffer_create_tag(buffer, "centrar","justification", GTK_JUSTIFY_CENTER, NULL);
	gtk_text_buffer_create_tag(buffer, "justificado","justification", GTK_JUSTIFY_FILL, NULL);

	gtk_text_buffer_create_tag(buffer, "color-azul","foreground", "blue", NULL);
	gtk_text_buffer_create_tag(buffer, "color-negro","foreground", "black", NULL);

	gtk_text_buffer_get_iter_at_offset(buffer, &iter, 0);

	gtk_text_buffer_insert_with_tags_by_name (buffer, &iter, msm, -1, 
			 "justificado", "color-negro", NULL);

	int respuesta = gtk_dialog_run(GTK_DIALOG(ventanaConsola));
	respuesta++;
	gtk_widget_destroy(ventanaConsola);
	g_free (markup);
}


static gboolean estadoWindow(GtkWidget 	 *area, GdkEventWindowState *event, gpointer data)
{
	objInterface.estadoWindow = (event->new_window_state & event->changed_mask);
	return TRUE;
}

static void menuPantallaCompleta(GtkWidget *w, gpointer data)
{

	if (!bloqueado)
	{
		if (objInterface.estadoWindow != GDK_WINDOW_STATE_FULLSCREEN)
			gtk_window_fullscreen(GTK_WINDOW(window));
		else if	(objInterface.estadoWindow == GDK_WINDOW_STATE_FULLSCREEN)
			gtk_window_unfullscreen(GTK_WINDOW(window));
	}
}


static void menuRegresar(GtkWidget *w, gpointer data)
{
	int temporalIndex = juego.totalMov;

	if (bloqueado || (juego.totalMov != objInterface.indexJugada) || (STATUS_FIN_JUEGO_TERMINADO)) return;

	if (objInterface.tipoJuego == TIPO_JUEGO_HUMANO_PC)
	{
		if (!objInterface.indexJugada || !juego.indiceHJuego || !juego.totalMov) return;

	} else if (objInterface.tipoJuego == TIPO_JUEGO_PC_HUMANO) {

		if (objInterface.indexJugada < 2 || juego.indiceHJuego < 2 || juego.totalMov < 2) return;
			
	} else return;

	numPosOrigen = SIN_POS_VALIDAS;

	bzero(juego.historicoJuego[juego.indiceHJuego].vistaTablero, sizeof(VISTATABLERO)*64);
	desHacerMovimiento(juego.historicoJuego[juego.indiceHJuego-1].mov);
	bzero(juego.historicoJuego[juego.indiceHJuego].vistaTablero, sizeof(VISTATABLERO)*64);
	desHacerMovimiento(juego.historicoJuego[juego.indiceHJuego-1].mov);

	gtk_combo_box_remove_text(GTK_COMBO_BOX(combolista), temporalIndex); 
	gtk_combo_box_remove_text(GTK_COMBO_BOX(combolista), temporalIndex-1); 
	gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), juego.totalMov);

	if (objInterface.esVisiblePanelNotificacion)
	{
		objInterface.esVisiblePanelNotificacion = FALSO;
		gtk_widget_hide(boxPanelNotificacion);
	}	

	if (STATUS_FIN_JUEGO_TERMINADO)
	{
		statusFinJuego = STATUS_FIN_JUEGO_SIN_ESTATUS;
	}

	juego.Buffer_MOV_INDEXCAPAS[1] 	= generarTodosMov(0);
	ultimaPosInicial 		= SIN_POS_VALIDAS;
	noResaltarUltimaPos 		= VERDADERO;
	pintarTablero();
	mostrarAyudaColor(); 
	dibujarPiezas();
	noResaltarUltimaPos 		= FALSO;
	esFaltaGrabar 			= VERDADERO;
	esActivoLibro 			= VERDADERO;
}

static void menuDiccionario(GtkWidget *w, gpointer data)
{
	
	if (esCompLibroInstalado)
	{
		objInterface.usarDiccionario = !objInterface.usarDiccionario; 
		usarLibroAperturas 	     = objInterface.usarDiccionario;

	} else {

		// mostrar mensaje complemento no instalado
		mostrarMensaje("<span size=\"x-large\">El complemento (comp-mangopaola-libro) no está instaldo</span>","Complemento no instalado");
	}
}

static void menuPonderacionPiezas(GtkWidget *w, gpointer data)
{
	char *markup;

	GtkWidget *frameTexto, *labelTituloT1, *imagenAcercaDe, *vboxGeneral,*content_area;

	frameTexto 	= gtk_frame_new(NULL);

	labelTituloT1 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"heavy\" size=\"x-large\" >Ponderación de las Piezas</span>");
	gtk_label_set_markup(GTK_LABEL(labelTituloT1), markup);

	bzero(strArmarRuta, MAX_RUTA_PATH);
	sprintf(strArmarRuta, "%s/imagenes/ponderacion.png",strRutaApp);
	imagenAcercaDe	= gtk_image_new_from_file(strArmarRuta);

	vboxGeneral	= gtk_vbox_new(FALSE, 1);
	GtkWidget *ventanaAcercaDe = gtk_dialog_new_with_buttons ("Valor de las Piezas",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_OK,
				                 GTK_RESPONSE_OK,
				                 NULL);
	content_area = (GTK_DIALOG(ventanaAcercaDe))->vbox;

	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelTituloT1, TRUE, TRUE, 5);
	gtk_widget_show(labelTituloT1);	

	gtk_container_add (GTK_CONTAINER(frameTexto), imagenAcercaDe);
	gtk_widget_show(imagenAcercaDe);	

	gtk_box_pack_start(GTK_BOX(vboxGeneral), frameTexto, TRUE, TRUE, 1);
	gtk_widget_show(frameTexto);	

	gtk_container_add (GTK_CONTAINER(content_area), vboxGeneral);
	gtk_widget_show(vboxGeneral);	

	int respuesta = gtk_dialog_run(GTK_DIALOG(ventanaAcercaDe));
	respuesta++;
	gtk_widget_destroy(ventanaAcercaDe);
	g_free (markup);

}

static void menuConsejo(GtkWidget *w, gpointer data)
{
	char *markup;

	GtkWidget 	*labelTitulo, *vboxGeneral,*content_area, *consola, *ventanaConsola, *frameTexto;
	GtkTextBuffer 	*buffer;
	GtkTextIter 	iter;
	GdkPixbuf       *picBufImagen; 
	int		indexImagen = rand() % 16;

	if (indexImagen==0 || indexImagen==4 || indexImagen==8 || indexImagen==12) indexImagen = PEON_BLANCO;

	labelTitulo	= gtk_label_new ("");
	markup 		= g_markup_printf_escaped(
			"<span weight=\"bold\" size=\"large\">Consejos de Mango Paola Ajedrez</span>");
	gtk_label_set_markup(GTK_LABEL(labelTitulo), markup);

	vboxGeneral	= gtk_vbox_new(FALSE, 1);
	consola		= gtk_text_view_new();
	buffer		= gtk_text_view_get_buffer(GTK_TEXT_VIEW(consola));
	picBufImagen	= gdk_pixbuf_new_from_file(vpiezasIG[indexImagen].rutaPieza, NULL);
	frameTexto 	= gtk_frame_new(NULL);

	gtk_text_view_set_editable(GTK_TEXT_VIEW(consola),FALSE); 

	ventanaConsola = gtk_dialog_new_with_buttons ("Mango Paola Ajedrez",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_OK,
				                 GTK_RESPONSE_OK,
				                 NULL);

	gtk_window_resize(GTK_WINDOW(ventanaConsola), TAMANIO_MIN_RESOL_ANCHO, TAMANIO_MIN_RESOL_ALTO/2);
	GTK_WINDOW(ventanaConsola)->allow_shrink = TRUE;

	content_area = (GTK_DIALOG(ventanaConsola))->vbox;

	gtk_container_add (GTK_CONTAINER(content_area), vboxGeneral);
	gtk_widget_show(vboxGeneral);	

	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelTitulo, FALSE, FALSE, 1);
	gtk_widget_show(labelTitulo);	

	gtk_container_add (GTK_CONTAINER(frameTexto), consola);
	gtk_box_pack_start(GTK_BOX(vboxGeneral), frameTexto, TRUE, TRUE, 1);
	gtk_widget_show(frameTexto);	
	gtk_widget_show(consola);	


	//Las propiedades vienen de GtkTextTag
	gtk_text_buffer_create_tag(buffer, "bold", "weight", PANGO_WEIGHT_BOLD, NULL);
	gtk_text_buffer_create_tag(buffer, "centrar","justification", GTK_JUSTIFY_CENTER, NULL);
	gtk_text_buffer_create_tag(buffer, "justificado","justification", GTK_JUSTIFY_FILL, NULL);

	gtk_text_buffer_create_tag(buffer, "color-azul","foreground", "blue", NULL);
	gtk_text_buffer_create_tag(buffer, "color-negro","foreground", "black", NULL);

	gtk_text_buffer_get_iter_at_offset(buffer, &iter, 0);

	gtk_text_buffer_insert_with_tags_by_name (buffer, &iter, listaTips[generarTips()], -1, 
			 "justificado", "color-negro", NULL);

	gtk_text_buffer_insert_with_tags_by_name (buffer, &iter, "\n\n ", -1, 
			"centrar", NULL);

	gtk_text_buffer_insert_pixbuf(buffer, &iter, picBufImagen); 

	gtk_text_buffer_insert_with_tags_by_name (buffer, &iter, "\nMango Paola Ajedrez\n", -1, 
			"bold", "centrar", "color-azul", NULL);

	int respuesta = gtk_dialog_run(GTK_DIALOG(ventanaConsola));
	respuesta++;
	gtk_widget_destroy(ventanaConsola);
	g_free (markup);
}

static void menuVideo(GtkWidget *w, gpointer data)
{

	if (esCompVideoInstalado)
	{
		bzero(strArmarRuta, MAX_RUTA_PATH);
		sprintf(strArmarRuta, "totem %s/video/MangoPaolaAnimacion.mp4 &",strRutaApp);
		resulSystem = system(strArmarRuta);
	} else {

		// mostrar mensaje complemento no instalado
		mostrarMensaje("<span size=\"x-large\">El paquete complemento (mango-paola-video) no está instaldo</span>","Paquete Complemento no instalado");
	}
}

void mostrarMensaje(char *msj, char *titulo)
{
		char *markup;
		GtkWidget *labelMensaje, *imagen, *hbox, *vbox, *content_area;
		GtkWidget *ventanaConfirmar;

		ventanaConfirmar = gtk_dialog_new_with_buttons (titulo,
						         NULL,
						         GTK_DIALOG_DESTROY_WITH_PARENT,
						         GTK_STOCK_OK,
						         GTK_RESPONSE_CANCEL,
						         NULL);
		content_area = (GTK_DIALOG(ventanaConfirmar))->vbox;
		//labelMensaje = gtk_label_new("");
		markup = g_markup_printf_escaped(msj);
		gtk_label_set_markup(GTK_LABEL(labelMensaje), markup);

		imagen = gtk_image_new_from_stock(GTK_STOCK_DIALOG_WARNING, GTK_ICON_SIZE_DIALOG);
		hbox  = gtk_hbox_new(FALSE, 5);
		vbox  = gtk_vbox_new(FALSE, 5);

		gtk_box_pack_start(GTK_BOX(hbox), imagen, FALSE, FALSE, 5);
		gtk_box_pack_start(GTK_BOX(hbox), labelMensaje, FALSE, FALSE, 5);
		gtk_box_pack_start(GTK_BOX(vbox), hbox, FALSE, FALSE, 15);

		gtk_container_add(GTK_CONTAINER(content_area), vbox);
		gtk_widget_show_all(ventanaConfirmar);

		if (gtk_dialog_run(GTK_DIALOG(ventanaConfirmar)) == GTK_RESPONSE_OK)
	    	{
			
		}

		g_free(markup);
		gtk_widget_destroy(ventanaConfirmar);

}


static void menuPiezasNormales(GtkWidget *w, gpointer data)
{

	if (esMiniEstado)
	{
		if (objInterface.tipoPiezas != TIPO_PIEZAMINI_NORMAL) 
		{
			objInterface.tipoPiezas = TIPO_PIEZAMINI_NORMAL;
			cargar_vpiezas_IG();
			cargar_vpiezas();

			pintarTablero();

			if (numPosOrigen != SIN_POS_VALIDAS)
				mostrarAyudaColor(); 

			dibujarPiezas();
		}

	} else {

		if (objInterface.tipoPiezas != TIPO_PIEZA_NORMAL) 
		{
			objInterface.tipoPiezas = TIPO_PIEZA_NORMAL;
			cargar_vpiezas_IG();
			cargar_vpiezas();

			pintarTablero();

			if (numPosOrigen != SIN_POS_VALIDAS)
				mostrarAyudaColor(); 

			dibujarPiezas();
		}
	}

}

static void menuPiezasClasicas(GtkWidget *w, gpointer data)
{

	if (esMiniEstado)
	{
		if (objInterface.tipoPiezas != TIPO_PIEZAMINI_CLASICO)
		{
			objInterface.tipoPiezas = TIPO_PIEZAMINI_CLASICO;
			cargar_vpiezas_IG();
			cargar_vpiezas();

			pintarTablero();

			if (numPosOrigen != SIN_POS_VALIDAS)
				mostrarAyudaColor();
		 
			dibujarPiezas();
		}

	} else {

		if (objInterface.tipoPiezas != TIPO_PIEZA_CLASICO)
		{
			objInterface.tipoPiezas = TIPO_PIEZA_CLASICO;
			cargar_vpiezas_IG();
			cargar_vpiezas();

			pintarTablero();

			if (numPosOrigen != SIN_POS_VALIDAS)
				mostrarAyudaColor();
		 
			dibujarPiezas();
		}
	}

}

static void menuPiezasComicas(GtkWidget *w, gpointer data)
{

	if (esMiniEstado)
	{
		if (objInterface.tipoPiezas != TIPO_PIEZAMINI_ANIMADOS)
		{
			objInterface.tipoPiezas = TIPO_PIEZAMINI_ANIMADOS;
			cargar_vpiezas_IG();
			cargar_vpiezas();

			pintarTablero();

			if (numPosOrigen != SIN_POS_VALIDAS)
				mostrarAyudaColor();
		 
			dibujarPiezas();
		}

	} else {

		if (objInterface.tipoPiezas != TIPO_PIEZA_ANIMADOS)
		{
			objInterface.tipoPiezas = TIPO_PIEZA_ANIMADOS;
			cargar_vpiezas_IG();
			cargar_vpiezas();

			pintarTablero();

			if (numPosOrigen != SIN_POS_VALIDAS)
				mostrarAyudaColor();
		 
			dibujarPiezas();
		}
	}

}

void localizarPosPieza(PIEZA pieza, int *index, int *posEncontrada)
{
	*posEncontrada = SIN_POS_VALIDAS;

	for (;*index<64;(*index)++)
	{
		if (ESCAQUES[*index] == pieza)
		{
			*posEncontrada = *index;
			(*index)++;
			return;
		}
	}

	*index = SIN_POS_VALIDAS;
}

void localizarPeon(COLOR color, int *posCol, int *posEncontrada)
{
	*posEncontrada 		= SIN_POS_VALIDAS;
	PIEZA piezaBuscar	= (color==BLANCO?PEON_BLANCO:PEON_NEGRO);
	int pasos  		= 8 * (color==BLANCO?1:-1);

	while ((*posCol>-1) && (*posCol<64))
	{
		if (ESCAQUES[*posCol]==piezaBuscar)
		{
			*posEncontrada = *posCol;
			*posCol+=pasos;
			return;
		}
		*posCol+=pasos;
	}

	*posCol = SIN_POS_VALIDAS;  
}


BOOLEANO introMovAlgCorto(COLOR color, char *movAlg, int largo, int pos)
{

	PIEZA piezaOrigen = algNotaPieza2Pieza(movAlg[0], color);

	int pivo=0, posEncontrada;
	BOOLEANO resul = FALSO;
	int posDestino = SIN_POS_VALIDAS, posEnroquePivo=0;
	int i=0, posEsComerInstruccion=0;
	BOOLEANO esComerInstruccion=FALSO, esAmbigua= FALSO, banderaTodoOk=FALSO;
	MOVIMIENTO m;
	BOOLEANO esJaque;

	posEnroquePivo = (!strcmp(movAlg, "O-O")?2:(!strcmp(movAlg, "O-O-O")?-2:0));

	if (posEnroquePivo != 0)
	{
		if (color)
		{

			if (((posEnroquePivo==2) && !juego.OON) || ((posEnroquePivo==-2) && !juego.OOON))
			{
				return FALSO;
			}

			piezaOrigen 	= REY_NEGRO;
			posEncontrada 	= ESCAQUES[60]==REY_NEGRO?60:SIN_POS_VALIDAS;
		} else {

			if (((posEnroquePivo==2) && !juego.OOB) || ((posEnroquePivo==-2) && !juego.OOOB))
			{
				return FALSO;
			}

			piezaOrigen 	= REY_BLANCO;
			posEncontrada 	= ESCAQUES[4]==REY_BLANCO?4:SIN_POS_VALIDAS;
		}

		if (posEncontrada != SIN_POS_VALIDAS)
		{
			posDestino = posEncontrada+posEnroquePivo;
			m = pos2movimiento(posEncontrada, posDestino);

			if (m)
			{
				hacerMovimiento(m);
			} else {
				return FALSO;				
			}

			if (juego.colorTurno) // Le toca al negro, se chequea que el rey blanco no haya quedado en jaque
			{
				esJaque = esAtacadoPor(juego.tablero[BLANCO][REY], NEGRO);
			} else {
				esJaque = esAtacadoPor(juego.tablero[NEGRO][REY], BLANCO);
			}
			
			if (!esJaque)
			{
				juego.Buffer_MOV_INDEXCAPAS[1] = generarTodosMov(0);
				cargarVistaTablero();
				largo=mov2alg(m, pngmov);
				bzero(&juego.historicoJuego[pos].movAlg[0],15);
				strncpy(&juego.historicoJuego[pos].movAlg[0],pngmov,largo);
				return VERDADERO;
			} else {

				desHacerMovimiento(m);
				return FALSO;
			}
		}
	}

	for (;i<largo;i++)
	{
		if (movAlg[i] == 'x')
		{
			esComerInstruccion 	= VERDADERO;
			posEsComerInstruccion 	= i;
			esAmbigua		= (i != 1);
			i			= largo;
		}
	}

	if (!esAmbigua && ((piezaOrigen!=PEON_BLANCO) || (piezaOrigen!=PEON_NEGRO)))
	{
		esAmbigua = (ESNOTAALGCOL(movAlg[1]) && ESNOTAALGCOL(movAlg[2])) || 
						(ESNOTAALGFIL(movAlg[1]) && ESNOTAALGCOL(movAlg[2]));
	}
	
	if (((piezaOrigen==PEON_BLANCO) || (piezaOrigen==PEON_NEGRO)) && !esComerInstruccion)
	{
		posDestino = MOV2POS(movAlg[0],movAlg[1]);

	} else if (((piezaOrigen==PEON_BLANCO) || (piezaOrigen==PEON_NEGRO)) && esComerInstruccion) {

		posDestino = MOV2POS(movAlg[2],movAlg[3]);

	} else if (((piezaOrigen != PEON_BLANCO) || (piezaOrigen != PEON_NEGRO)) && !esComerInstruccion && !esAmbigua) {

		posDestino = MOV2POS(movAlg[1],movAlg[2]);

	} else if (((piezaOrigen!=PEON_BLANCO) || (piezaOrigen!=PEON_NEGRO)) && esComerInstruccion && !esAmbigua) {

		posDestino = MOV2POS(movAlg[2],movAlg[3]);

	} else if (((piezaOrigen!=PEON_BLANCO) || (piezaOrigen!=PEON_NEGRO)) && !esComerInstruccion && esAmbigua) {

		posDestino = MOV2POS(movAlg[2],movAlg[3]);

	} else if (((piezaOrigen!=PEON_BLANCO) || (piezaOrigen!=PEON_NEGRO)) && esComerInstruccion && esAmbigua) {

		posDestino = MOV2POS(movAlg[3],movAlg[4]);
	} 

	if ((piezaOrigen != PEON_BLANCO) && (piezaOrigen != PEON_NEGRO))
	{
		pivo = 0;
		banderaTodoOk = FALSO;
		while (pivo != SIN_POS_VALIDAS)
		{
			localizarPosPieza(piezaOrigen, &pivo, &posEncontrada);

			if (esAmbigua)
			{
				if ((movAlg[1]>=97) && (movAlg[1]<=104)) // Ambigua por columna
				{
					if (movAlg[1] != POS2COLUMNAC[posEncontrada])
						posEncontrada = SIN_POS_VALIDAS;
				} else {				 //Ambigua por Fila
					if (movAlg[1] != POS2FILAC[posEncontrada])
						posEncontrada = SIN_POS_VALIDAS;
				}
			}

			if (posEncontrada != SIN_POS_VALIDAS)
			{
				m = pos2movimiento(posEncontrada, posDestino);
				if (m)
				{
					banderaTodoOk = VERDADERO;
					break;
				}
			}
		}

		if (banderaTodoOk)
		{

			hacerMovimiento(m);
			if (juego.colorTurno) // Le toca al negro, se chequea que el rey blanco no haya quedado en jaque
			{
				esJaque = esAtacadoPor(juego.tablero[BLANCO][REY], NEGRO);
			} else {
				esJaque = esAtacadoPor(juego.tablero[NEGRO][REY], BLANCO);
			}
			
			if (!esJaque)
			{
				juego.Buffer_MOV_INDEXCAPAS[1] = generarTodosMov(0);
				cargarVistaTablero();
				largo=mov2alg(m, pngmov);
				bzero(&juego.historicoJuego[pos].movAlg[0],15);
				strncpy(&juego.historicoJuego[pos].movAlg[0],pngmov,largo);
				resul = VERDADERO;
			} else {

				desHacerMovimiento(m);
				resul = FALSO;
			}
		} 
	} else { // es un peon
		
		banderaTodoOk = FALSO;
		pivo 	= (esComerInstruccion?movAlg[0]:POS2COLUMNAC[posDestino]) - 97;
		pivo    = (color==BLANCO?pivo:pivo+56);

		while (pivo != SIN_POS_VALIDAS)
		{
			localizarPeon(color,&pivo,&posEncontrada);
			if (posEncontrada != SIN_POS_VALIDAS)
			{
				m = pos2movimiento(posEncontrada, posDestino);
				if (m)
				{
					banderaTodoOk = VERDADERO;
					break;
				}
			}
		} 

		if (banderaTodoOk)
		{
			hacerMovimiento(m);
			if (juego.colorTurno) // Le toca al negro, se chequea que el rey blanco no haya quedado en jaque
			{
				esJaque = esAtacadoPor(juego.tablero[BLANCO][REY], NEGRO);
			} else {
				esJaque = esAtacadoPor(juego.tablero[NEGRO][REY], BLANCO);
			}
			
			if (!esJaque)
			{
				juego.Buffer_MOV_INDEXCAPAS[1] = generarTodosMov(0);
				cargarVistaTablero();
				largo=mov2alg(m, pngmov);
				bzero(&juego.historicoJuego[pos].movAlg[0],15);
				strncpy(&juego.historicoJuego[pos].movAlg[0],pngmov,largo);
				resul = VERDADERO;
			} else {

				desHacerMovimiento(m);
				resul = FALSO;
			}
		}
	}

	return resul; 

}

PIEZA algNotaPieza2Pieza(char letraPiezaIngles, COLOR color)
{
	switch (letraPiezaIngles)
	{
		case 'K': return (color == BLANCO?REY_BLANCO	:REY_NEGRO);	break;
		case 'Q': return (color == BLANCO?DAMA_BLANCO	:DAMA_NEGRO);	break;
		case 'R': return (color == BLANCO?TORRE_BLANCO	:TORRE_NEGRO);	break;
		case 'B': return (color == BLANCO?ALFIL_BLANCO	:ALFIL_NEGRO);	break;
		case 'N': return (color == BLANCO?CABALLO_BLANCO:CABALLO_NEGRO);break;
		default:  return (color == BLANCO?PEON_BLANCO	:PEON_NEGRO);	break;
	};

	return (color == BLANCO?PEON_BLANCO	:PEON_NEGRO);
}

void reproducirSonidoDesEscaque(int pos)
{

	if (pos==0)
	{
 		resulSystem = system(strAplay_A);
 		resulSystem = system(strAplay_1);

	} else if (pos==1) {

 		resulSystem = system(strAplay_B);
 		resulSystem = system(strAplay_1);
 		
	} else if (pos==2) {

 		resulSystem = system(strAplay_C);
 		resulSystem = system(strAplay_1);
 		
	} else if (pos==3) {

 		resulSystem = system(strAplay_D);
 		resulSystem = system(strAplay_1);
 		
	} else if (pos==4) {

 		resulSystem = system(strAplay_E);
 		resulSystem = system(strAplay_1);
 		
	} else if (pos==5) {

 		resulSystem = system(strAplay_F);
 		resulSystem = system(strAplay_1);
 		
	} else if (pos==6) {

 		resulSystem = system(strAplay_G);
 		resulSystem = system(strAplay_1);
 		
	} else if (pos==7) {

 		resulSystem = system(strAplay_H);
 		resulSystem = system(strAplay_1);
 		
	} else if (pos==8) {

 		resulSystem = system(strAplay_A);
 		resulSystem = system(strAplay_2);
 		
	} else if (pos==9) {

 		resulSystem = system(strAplay_B);
 		resulSystem = system(strAplay_2);
 		
	} else if (pos==10) {

 		resulSystem = system(strAplay_C);
 		resulSystem = system(strAplay_2);
 		
	} else if (pos==11) {

 		resulSystem = system(strAplay_D);
 		resulSystem = system(strAplay_2);
 		
	} else if (pos==12) {

 		resulSystem = system(strAplay_E);
 		resulSystem = system(strAplay_2);
 		
	} else if (pos==13) {

 		resulSystem = system(strAplay_F);
 		resulSystem = system(strAplay_2);
 		
	} else if (pos==14) {

 		resulSystem = system(strAplay_G);
 		resulSystem = system(strAplay_2);
 		
	} else if (pos==15) {

 		resulSystem = system(strAplay_H);
 		resulSystem = system(strAplay_2);
 		
	} else if (pos==16) {

 		resulSystem = system(strAplay_A);
 		resulSystem = system(strAplay_3);
 		
	} else if (pos==17) {

 		resulSystem = system(strAplay_B);
 		resulSystem = system(strAplay_3);
 		
	} else if (pos==18) {

 		resulSystem = system(strAplay_C);
 		resulSystem = system(strAplay_3);
 		
	} else if (pos==19) {

 		resulSystem = system(strAplay_D);
 		resulSystem = system(strAplay_3);
 		
	} else if (pos==20) {

 		resulSystem = system(strAplay_E);
 		resulSystem = system(strAplay_3);
 		
	} else if (pos==21) {

 		resulSystem = system(strAplay_F);
 		resulSystem = system(strAplay_3);
 		
	} else if (pos==22) {

 		resulSystem = system(strAplay_G);
 		resulSystem = system(strAplay_3);
 		
	} else if (pos==23) {

 		resulSystem = system(strAplay_H);
 		resulSystem = system(strAplay_3);
 		
	} else if (pos==24) {

 		resulSystem = system(strAplay_A);
 		resulSystem = system(strAplay_4);
 		
	} else if (pos==25) {

 		resulSystem = system(strAplay_B);
 		resulSystem = system(strAplay_4);
 		
	} else if (pos==26) {

 		resulSystem = system(strAplay_C);
 		resulSystem = system(strAplay_4);
 		
	} else if (pos==27) {

 		resulSystem = system(strAplay_D);
 		resulSystem = system(strAplay_4);
 		
	} else if (pos==28) {

 		resulSystem = system(strAplay_E);
 		resulSystem = system(strAplay_4);
 		
	} else if (pos==29) {

 		resulSystem = system(strAplay_F);
 		resulSystem = system(strAplay_4);
 		
	} else if (pos==30) {

 		resulSystem = system(strAplay_G);
 		resulSystem = system(strAplay_4);
 		
	} else if (pos==31) {

 		resulSystem = system(strAplay_H);
 		resulSystem = system(strAplay_4);
 		
	} else if (pos==32) {

 		resulSystem = system(strAplay_A);
 		resulSystem = system(strAplay_5);
 		
	} else if (pos==33) {

 		resulSystem = system(strAplay_B);
 		resulSystem = system(strAplay_5);
 		
	} else if (pos==34) {

 		resulSystem = system(strAplay_C);
 		resulSystem = system(strAplay_5);
 		
	} else if (pos==35) {

 		resulSystem = system(strAplay_D);
 		resulSystem = system(strAplay_5);
 		
	} else if (pos==36) {

 		resulSystem = system(strAplay_E);
 		resulSystem = system(strAplay_5);
 		
	} else if (pos==37) {

 		resulSystem = system(strAplay_F);
 		resulSystem = system(strAplay_5);
 		
	} else if (pos==38) {

 		resulSystem = system(strAplay_G);
 		resulSystem = system(strAplay_5);
 		
	} else if (pos==39) {

 		resulSystem = system(strAplay_H);
 		resulSystem = system(strAplay_5);
 		
	} else if (pos==40) {

 		resulSystem = system(strAplay_A);
 		resulSystem = system(strAplay_6);
 		
	} else if (pos==41) {

 		resulSystem = system(strAplay_B);
 		resulSystem = system(strAplay_6);
 		
	} else if (pos==42) {

 		resulSystem = system(strAplay_C);
 		resulSystem = system(strAplay_6);
 		
	} else if (pos==43) {

 		resulSystem = system(strAplay_D);
 		resulSystem = system(strAplay_6);
 		
	} else if (pos==44) {

 		resulSystem = system(strAplay_E);
 		resulSystem = system(strAplay_6);
 		
	} else if (pos==45) {

 		resulSystem = system(strAplay_F);
 		resulSystem = system(strAplay_6);
 		
	} else if (pos==46) {

 		resulSystem = system(strAplay_G);
 		resulSystem = system(strAplay_6);
 		
	} else if (pos==47) {

 		resulSystem = system(strAplay_H);
 		resulSystem = system(strAplay_6);
 		
	} else if (pos==48) {

 		resulSystem = system(strAplay_A);
 		resulSystem = system(strAplay_7);
 		
	} else if (pos==49) {

 		resulSystem = system(strAplay_B);
 		resulSystem = system(strAplay_7);
 		
	} else if (pos==50) {

 		resulSystem = system(strAplay_C);
 		resulSystem = system(strAplay_7);
 		
	} else if (pos==51) {

 		resulSystem = system(strAplay_D);
 		resulSystem = system(strAplay_7);
 		
	} else if (pos==52) {

 		resulSystem = system(strAplay_E);
 		resulSystem = system(strAplay_7);
 		
	} else if (pos==53) {

 		resulSystem = system(strAplay_F);
 		resulSystem = system(strAplay_7);
 		
	} else if (pos==54) {

 		resulSystem = system(strAplay_G);
 		resulSystem = system(strAplay_7);
 		
	} else if (pos==55) {

 		resulSystem = system(strAplay_H);
 		resulSystem = system(strAplay_7);
 		
	} else if (pos==56) {

 		resulSystem = system(strAplay_A);
 		resulSystem = system(strAplay_8);
 		
	} else if (pos==57) {

 		resulSystem = system(strAplay_B);
 		resulSystem = system(strAplay_8);
 		
	} else if (pos==58) {

 		resulSystem = system(strAplay_C);
 		resulSystem = system(strAplay_8);
 		
	} else if (pos==59) {

 		resulSystem = system(strAplay_D);
 		resulSystem = system(strAplay_8);
 		
	} else if (pos==60) {

 		resulSystem = system(strAplay_E);
 		resulSystem = system(strAplay_8);
 		
	} else if (pos==61) {

 		resulSystem = system(strAplay_F);
 		resulSystem = system(strAplay_8);
 		
	} else if (pos==62) {

 		resulSystem = system(strAplay_G);
 		resulSystem = system(strAplay_8);
 		
	} else if (pos==63) {

 		resulSystem = system(strAplay_H);
 		resulSystem = system(strAplay_8);
 		
	}
}

void reproducirSonidoPiezaEscaque(int pos)
{

	PIEZA pieza = juego.historicoJuego[objInterface.indexJugada].vistaTablero[pos].pieza;
	
	if (ES_PIEZA(pieza))
	{

		if ((pieza == PEON_BLANCO) || (pieza == PEON_NEGRO))
		{
			resulSystem = system(strAplay_peon);

		} else if ((pieza == TORRE_BLANCO) || (pieza == TORRE_NEGRO)) {

			resulSystem = system(strAplay_torre);

		} else if ((pieza == CABALLO_BLANCO) || (pieza == CABALLO_NEGRO)) {
		
			resulSystem = system(strAplay_caballo);

		} else if ((pieza == ALFIL_BLANCO) || (pieza == ALFIL_NEGRO)) {
		
			resulSystem = system(strAplay_alfil);

		} else if ((pieza == DAMA_BLANCO) || (pieza == DAMA_NEGRO)) {
		
			resulSystem = system(strAplay_dama);

		} else if ((pieza == REY_BLANCO) || (pieza == REY_NEGRO)) {
		
			resulSystem = system(strAplay_rey);
		}

		if (OBT_COLOR_PIEZA(pieza)==BLANCO)
		{
			resulSystem = system(strAplay_blanco);
			
		} else {
		
			resulSystem = system(strAplay_negro);
		}

	}	
}

static void menuOirAccesibilidad(gpointer callback_data, guint callback_action, GtkWidget *menu_item)
{
	if (!bloqueado)
	{
		objInterface.oirAccesibilidad = !objInterface.oirAccesibilidad; 
	}
}

static void menuFEN(GtkWidget *w, gpointer data)
{
	introFEN();
}


static gboolean introFEN()
{

	char *markup;
	int colorBando;
	int tipoOponente;
	int tiempoJuego;

	GtkWidget *labelTitulo, *labelNombreJuego, *vboxGeneral, *textBoxNombreJuego, *imagen1,
		  *content_area, *vboxc1, *hboxcg1, *hboxd11;

	labelTitulo 		= gtk_label_new ("");
	markup = g_markup_printf_escaped("<span weight=\"heavy\" size=\"x-large\" style=\"italic\">Configurar posiciones del Tablero</span>");
	gtk_label_set_markup(GTK_LABEL(labelTitulo), markup);


	labelNombreJuego 	= gtk_label_new("FEN:");
	gtk_misc_set_alignment(GTK_MISC(labelNombreJuego),0,1);


	textBoxNombreJuego	= gtk_entry_new();

	imagen1 		= gtk_image_new_from_stock(GTK_STOCK_EXECUTE, GTK_ICON_SIZE_DIALOG);

	vboxGeneral		= gtk_vbox_new(FALSE, 1);
	vboxc1			= gtk_vbox_new(TRUE,  1);
	hboxcg1			= gtk_hbox_new(FALSE, 1);
	hboxd11			= gtk_hbox_new(FALSE,  1);

	gtk_entry_set_max_length(GTK_ENTRY(textBoxNombreJuego),  LARGO_CAMPOS_STR_FEN-1); 
	gtk_entry_set_width_chars(GTK_ENTRY(textBoxNombreJuego), 50);

	GtkWidget *ventanaNuevoJuego = gtk_dialog_new_with_buttons ("Introducir Cadena FEN",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_CANCEL,
				                 GTK_RESPONSE_CANCEL,
				                 NULL);
	gtk_dialog_add_button(GTK_DIALOG(ventanaNuevoJuego), GTK_STOCK_OK,GTK_RESPONSE_ACCEPT);
	content_area = (GTK_DIALOG(ventanaNuevoJuego))->vbox;
// Panel 1
	gtk_box_pack_start(GTK_BOX(hboxd11), labelNombreJuego, TRUE, TRUE, 1);
	gtk_widget_show(labelNombreJuego);	
	gtk_box_pack_start(GTK_BOX(hboxd11), textBoxNombreJuego, FALSE, FALSE, 1);
	gtk_widget_show(textBoxNombreJuego);	

	gtk_box_pack_start(GTK_BOX(vboxc1), hboxd11, FALSE, FALSE, 1);
	gtk_widget_show(hboxd11);	

	gtk_box_pack_start(GTK_BOX(hboxcg1), imagen1, FALSE, FALSE, 5);
	gtk_widget_show(imagen1);	
	gtk_box_pack_start(GTK_BOX(hboxcg1), vboxc1, TRUE, TRUE, 1);
	gtk_widget_show(vboxc1);	
//panel General
	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelTitulo, TRUE, TRUE, 1);
	gtk_widget_show(labelTitulo);	
	gtk_box_pack_start(GTK_BOX(vboxGeneral), hboxcg1, TRUE, TRUE, 1);
	gtk_widget_show(hboxcg1);	

	gtk_container_add (GTK_CONTAINER(content_area), vboxGeneral);
	gtk_widget_show(vboxGeneral);	

	int respuesta = gtk_dialog_run(GTK_DIALOG(ventanaNuevoJuego));

//*********************************************************************************

	if (respuesta == GTK_RESPONSE_ACCEPT)
	{

		memset(juego.historicoJuego, 0, sizeof(DATAJUEGO)*MAX_BUFF_MOV);

		if (objInterface.esPorTiempo)
		{
			gtk_widget_hide(boxLabelTiempo);
			if (STATUS_FIN_JUEGO_NO_TERMINADO)
			{
				banderaFinalizarTiempoJuegoAUX = VERDADERO;
			}
		}

		int i, totalMovTmp = juego.totalMov;

		nuevo_juego();

		strcpy(strNombreJuego,gtk_entry_get_text(GTK_ENTRY(textBoxNombreJuego))); 
		if (strlen(strNombreJuego) == 0)
		{
			strcpy(strNombreJuego,"rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"); 
		}		

		char fen[100];
		char fencolor[2];     
		char fenEnroque[5];
		char fenPeonPaso[3];
		int fenReglaCincuentaMov=0;
		int fenTotalMov=0;
		printf("FEN: (%s)\n",strNombreJuego);
		sscanf(strNombreJuego, "%s %s %s %s %d %d",
					fen,fencolor,fenEnroque,fenPeonPaso,&fenReglaCincuentaMov,&fenTotalMov);
		if (fencolor[0] == 'w')
		{
			printf("# blanco es siguiente movimiento\n");
		} else {
			printf("# negro es siguiente movimiento\n");
		}

		printf("# Enroque: %s\n", fenEnroque);
		printf("# Peon al Paso Escaque: %s\n", fenPeonPaso);
		printf("# Regla 50 mov: %d\n", fenReglaCincuentaMov);
		printf("# Total mov: %d\n", fenTotalMov);

		setupFen(fen, fencolor, fenEnroque, fenPeonPaso, fenReglaCincuentaMov, fenTotalMov);
		juego.totalMov=0;
		cargarVistaTablero();
		mostrarTablero();

		objInterface.indexJugada  = 0;
		objInterface.esCargaJuego = FALSO;
		objInterface.esPorTiempo  = FALSO;
		numPosOrigen 		  = SIN_POS_VALIDAS;
		ultimaPosInicial	  = SIN_POS_VALIDAS;
		ultimaPosFinal		  = SIN_POS_VALIDAS;

		colorBando 		  = juego.colorTurno;
		tipoOponente		  = 0;
		tiempoJuego		  = 0;

		objInterface.Lado2Jugar   = colorBando ? LADO_NEGRO: LADO_BLANCO; 
		objInterface.Lado2JugarPreferencia = objInterface.Lado2Jugar; 

		if (strlen(objInterface.nombreArchivoPGN))
		{
			bzero(objInterface.nombreArchivoPGN, LARGO_RUTAPIEZA);
		}

		if (objInterface.esVisiblePanelNotificacion)
		{
			objInterface.esVisiblePanelNotificacion = FALSO;
			gtk_widget_hide(boxPanelNotificacion);
		}	
		
		objInterface.tipoJuego	= TIPO_JUEGO_HUMANO_HUMANO;

		char temporal[LARGO_CAMPOS_STR+24];  
		strcpy(temporal, "Mango Paola - ");
		strncat(temporal,strNombreJuego,LARGO_CAMPOS_STR-1);
		gtk_window_set_title(GTK_WINDOW(window), temporal);

		strcpy(strNombreBlancas,"Blancas"); 
		strcpy(strNombreNegras,"Negras"); 

		gtk_combo_box_set_active(GTK_COMBO_BOX(combolista), 0);
		for (i=0;i<totalMovTmp;i++)
			gtk_combo_box_remove_text(GTK_COMBO_BOX(combolista), 1); 

		gtk_widget_set_sensitive(primeroBoton, FALSE);
		gtk_widget_set_sensitive(atrasBoton,   FALSE);
		gtk_widget_set_sensitive(adelanteBoton, FALSE);
		gtk_widget_set_sensitive(ultimoBoton,   FALSE);

		//reDibujarTodo();

		strMaquillado = g_markup_printf_escaped(
		 "<span background=\"#0D3C05\" weight=\"bold\" size=\"large\"><span color=\"#7A7A7A\"> Eval:%d </span><span color=\"#000000\"> Mat:%d </span></span>",
	  	 evaluacionTablero(-INFINITO,INFINITO),
		 (juego.colorTurno?-juego.material_total:juego.material_total));
		gtk_label_set_markup(GTK_LABEL(labelMaterial), strMaquillado);
	}

	gtk_widget_destroy(ventanaNuevoJuego);
	g_free (markup);

	return TRUE;
}

void mostrarMensajeConsola(char *msm, char *rutaImg, char *msmTitulo)
{
	char *markup;

	GtkWidget 	*labelTitulo, *vboxGeneral,*content_area, *consola, *ventanaConsola, *frameTexto;
	GtkTextBuffer 	*buffer;
	GtkTextIter 	iter;
	GdkPixbuf       *picBufImagen; 
	char		tituloMensajeConsola[128];
	bzero(tituloMensajeConsola,128);

	sprintf(tituloMensajeConsola, "<span weight=\"bold\" size=\"large\">%s</span>",msmTitulo);

	labelTitulo	= gtk_label_new ("");
	markup 		= g_markup_printf_escaped(tituloMensajeConsola);
	gtk_label_set_markup(GTK_LABEL(labelTitulo), markup);

	vboxGeneral	= gtk_vbox_new(FALSE, 1);
	consola		= gtk_text_view_new();
	buffer		= gtk_text_view_get_buffer(GTK_TEXT_VIEW(consola));
	picBufImagen	= gdk_pixbuf_new_from_file(rutaImg, NULL);
	frameTexto 	= gtk_frame_new(NULL);

	gtk_text_view_set_editable(GTK_TEXT_VIEW(consola),FALSE); 
 	gtk_widget_set_can_focus(consola, FALSE);	 

	ventanaConsola = gtk_dialog_new_with_buttons ("Mango Paola Ajedrez",
				                 NULL,
				                 GTK_DIALOG_DESTROY_WITH_PARENT,
				                 GTK_STOCK_OK,
				                 GTK_RESPONSE_OK,
				                 NULL);

	gtk_window_resize(GTK_WINDOW(ventanaConsola), TAMANIO_MIN_RESOL_ANCHO*2/3, TAMANIO_MIN_RESOL_ALTO*2/3);
	GTK_WINDOW(ventanaConsola)->allow_shrink = TRUE;

	content_area = (GTK_DIALOG(ventanaConsola))->vbox;

	gtk_container_add (GTK_CONTAINER(content_area), vboxGeneral);
	gtk_widget_show(vboxGeneral);	

	gtk_box_pack_start(GTK_BOX(vboxGeneral), labelTitulo, FALSE, FALSE, 1);
	gtk_widget_show(labelTitulo);	

	gtk_container_add (GTK_CONTAINER(frameTexto), consola);
	gtk_box_pack_start(GTK_BOX(vboxGeneral), frameTexto, TRUE, TRUE, 1);
	gtk_widget_show(frameTexto);	
	gtk_widget_show(consola);	


	//Las propiedades vienen de GtkTextTag
	gtk_text_buffer_create_tag(buffer, "bold", "weight", PANGO_WEIGHT_BOLD, NULL);
	gtk_text_buffer_create_tag(buffer, "centrar","justification", GTK_JUSTIFY_CENTER, NULL);
	gtk_text_buffer_create_tag(buffer, "justificado","justification", GTK_JUSTIFY_FILL, NULL);

	gtk_text_buffer_create_tag(buffer, "color-verde","foreground", "green", NULL);
	gtk_text_buffer_create_tag(buffer, "color-negro","foreground", "black", NULL);

	gtk_text_buffer_get_iter_at_offset(buffer, &iter, 0);

	gtk_text_buffer_insert_with_tags_by_name (buffer, &iter, msm, -1,"bold", "centrar", "color-negro", NULL);

	gtk_text_buffer_insert_with_tags_by_name (buffer, &iter, "\n\n ", -1, 
			"centrar", NULL);

	gtk_text_buffer_insert_pixbuf(buffer, &iter, picBufImagen); 

	int respuesta = gtk_dialog_run(GTK_DIALOG(ventanaConsola));
	respuesta++;
	gtk_widget_destroy(ventanaConsola);
	g_free (markup);
}

static void verPensamientoPC(gpointer callback_data, guint callback_action, GtkWidget *menu_item)
{
	esVerPensamientoPC = !esVerPensamientoPC;
}


#endif 

