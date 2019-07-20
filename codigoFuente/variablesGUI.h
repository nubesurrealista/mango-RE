/* 
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

#ifndef VARIABLESGUI_H
#define VARIABLESGUI_H

char			nombresRivales[32][32];
char			strRutaPC_pensando[128];//				= "/usr/share/games/mango-paola/imagenes/pcpensando.png";

int 			LISTA_TIPS_OCURRENCIAS[100];
cairo_surface_t 	*imagen_clavada;
cairo_surface_t 	*imagen_clavada2;

BOOLEANO		esVerPensamientoPC				= FALSO;

BOOLEANO		esCerradoVentana				= FALSO;
BOOLEANO		esCompLibroInstalado				= FALSO;
BOOLEANO		esCompVideoInstalado				= FALSO;

BOOLEANO 		irComandoActivado 				= FALSO;
int 			cont_irComando 					= 0;
int			escaqueIrComando;
int			posAccesibilidad				= 0;
BOOLEANO		esAccesibilidad					= FALSO;
BOOLEANO		esAbrirPGN					= FALSO;
uint64 			tinicial					= 0;
BOOLEANO 		esTiempoForzado;
char 			strRutaHome[256];
char 			strRutaApp[34];
char 			strRutaHomeDatos[384];
char 			strAplay_jaque[MAX_RUTA_PATH];
char 			strAplay_mover[MAX_RUTA_PATH];
char 			strAplay_mover_torre[MAX_RUTA_PATH];
char 			strAplay_mover_caballo[MAX_RUTA_PATH];
char 			strAplay_mover_peon[MAX_RUTA_PATH];
char 			strAplay_mover_dama[MAX_RUTA_PATH];
char 			strAplay_mover_alfil[MAX_RUTA_PATH];
char 			strAplay_mover_rey[MAX_RUTA_PATH];
char 			strAplay_capturar[MAX_RUTA_PATH];
char 			strAplay_capturar2[MAX_RUTA_PATH];
char 			strAplay_capturar3[MAX_RUTA_PATH];
char 			strAplay_jaqueMate[MAX_RUTA_PATH];
char 			strAplay_ahogado[MAX_RUTA_PATH];
char 			strAplay_girarTablero[MAX_RUTA_PATH];
char 			strAplay_rendirse[MAX_RUTA_PATH];
char 			strAplay_enroque[MAX_RUTA_PATH];
char 			strAplay_empateGeneral[MAX_RUTA_PATH];
//Accesibiliad Invidentes Sonidos
char 			strAplay_A[MAX_RUTA_PATH];
char 			strAplay_B[MAX_RUTA_PATH];
char 			strAplay_C[MAX_RUTA_PATH];
char 			strAplay_D[MAX_RUTA_PATH];
char 			strAplay_E[MAX_RUTA_PATH];
char 			strAplay_F[MAX_RUTA_PATH];
char 			strAplay_G[MAX_RUTA_PATH];
char 			strAplay_H[MAX_RUTA_PATH];
char 			strAplay_1[MAX_RUTA_PATH];
char 			strAplay_2[MAX_RUTA_PATH];
char 			strAplay_3[MAX_RUTA_PATH];
char 			strAplay_4[MAX_RUTA_PATH];
char 			strAplay_5[MAX_RUTA_PATH];
char 			strAplay_6[MAX_RUTA_PATH];
char 			strAplay_7[MAX_RUTA_PATH];
char 			strAplay_8[MAX_RUTA_PATH];
char 			strAplay_blanco[MAX_RUTA_PATH];
char 			strAplay_negro[MAX_RUTA_PATH];
char 			strAplay_peon[MAX_RUTA_PATH];
char 			strAplay_torre[MAX_RUTA_PATH];
char 			strAplay_caballo[MAX_RUTA_PATH];
char 			strAplay_alfil[MAX_RUTA_PATH];
char 			strAplay_dama[MAX_RUTA_PATH];
char 			strAplay_rey[MAX_RUTA_PATH];
char 			strAplay_moverPiezaDe[MAX_RUTA_PATH];
char 			strAplay_hasta[MAX_RUTA_PATH];
char 			strAplay_seleccion[MAX_RUTA_PATH];
char 			strAplay_quitar[MAX_RUTA_PATH];
char 			strAplay_piezaCapturada[MAX_RUTA_PATH];
char 			strAplay_de[MAX_RUTA_PATH];
char 			strAplay_sugieroMover[MAX_RUTA_PATH];
char 			strAplay_pensandoSugerencia[MAX_RUTA_PATH];
char 			strAplay_mangoPaolaPensando[MAX_RUTA_PATH];
char 			strAplay_comandoIrActivado[MAX_RUTA_PATH];
char 			strAplay_escaqueAtacado[MAX_RUTA_PATH];

char 			strAplay_vozJaque[MAX_RUTA_PATH];
char 			strAplay_vozJaqueMate[MAX_RUTA_PATH];

char 			strAplay_vozRepeticion[MAX_RUTA_PATH];
char 			strAplay_vozGananNegras[MAX_RUTA_PATH];
char 			strAplay_vozGananBlancas[MAX_RUTA_PATH];
char 			strAplay_vozAhogado[MAX_RUTA_PATH];
char 			strAplay_vozReglaCincuenta[MAX_RUTA_PATH];
char 			strAplay_vozInsuficienciaMaterial[MAX_RUTA_PATH];

char 			strAplay_vozEnroqueCorto[MAX_RUTA_PATH];
char 			strAplay_vozEnroqueLargo[MAX_RUTA_PATH];
char 			strAplay_vozPromocion[MAX_RUTA_PATH];

//Ayuda Accesibilidad
char 			strAplay_seleccionaEscaque[MAX_RUTA_PATH];
char 			strAplay_escaqueDestinoEscaque[MAX_RUTA_PATH];


char			strArmarRuta[MAX_RUTA_PATH];

BOOLEANO		espintarNotacionTablero				= FALSO;
int			tamanio_cuadro;
int			tamanio_pieza;
OBJINTERFACE 		objInterface;
BOOLEANO		banderaFinalizarTiempoJuego 			= FALSO;
BOOLEANO		banderaFinalizarTiempoJuegoAUX 			= FALSO;
char 			strMensajePanel1[100];
char			strMensajePanel2[100];
char 			notacion[25];
double 			dblHoras					= 0.0;
double 			dblMinutos					= 0.0;
double 			dblSegundos					= 0.0;
int 			horas						= 0;
int			minutos						= 0; 
int			segundos					= 0;
int			tiempoBase					= 0;
char 			tt[80];
time_t 			tiempo;
int 			resulSystem					= 0;
int 			direccionMovimiento;
char 			*strMaquillado;
DATOSANIMACION 		datosAnimacion;
int 			ajusteCelda 					= 0;
int			ajuste_x 					= 0;
int			ajuste_y 					= 0;
int			desplazamiento 					= 0;
BOOLEANO		NOpintarTableroSelectivo 			= FALSO;
char 			*archivoPGN;
int 			posIntermedioValidas[LARGO_POS_VALIDAS+1];
POS_CEL_TABLERO_XY 	vpos[TAMANIO_MATRIZ*TAMANIO_MATRIZ];
COLOR 			color						= 0;
int			largoTablero					= 0;
int			numCeldasTablero				= 0;
int			motionPos					= -1;
BOOLEANO		mostrarNumeracionTablero			= VERDADERO;
BOOLEANO 		ayudaColor					= VERDADERO;
BOOLEANO 		bloqueado					= FALSO;
BOOLEANO		esMiniEstado;
GtkItemFactory 		*item_factory					= NULL;

GtkWidget 		*window, 
			*area, 
			*primeroBoton, 
			*atrasBoton,
			*adelanteBoton, 
			*ultimoBoton, 
			*box1,
			*box_bajo, 
			*barra, 
			*cerrarBoton, 
			*iconCerrarBoton, 
			*numeracionTableBoton, 
			*iconoNumeracionTableBoton, 
			*ayudaColorBoton,
			*iconAyudaColorBoton, 
			*oirBoton,
			*iconOirBoton,
			*nuevoBoton, 
			*iconNuevoBoton,
			*guardarBoton,
			*iconGuardarBoton, 
			*abrirBoton,
			*iconAbrirBoton, 
			*rendirseBoton,
			*iconRendirseBoton,
			*ocultarBarraBoton,
			*iconOcultarBarraBoton, 
			*sugerirJugadaBoton, 
			*iconSugerirJugadaBoton, 
			*combolista, 
			*box_combo, 
			*labelNotificacion1,
			*labelNotificacion2, 
			*iconNotificacion, 
			*boxNotificacion, 
			*boxPanelNotificacion, 
			*labelTiempoBlancas,
			*labelTiempoNegras, 
			*boxLabelTiempo, 
			*girarTableroBoton,
			*iconGirarTableroBoton, 
			*menubar, 
			*boxPanelPractica, 
			*imgenGirar;
GtkAccelGroup 		*accel_group;
GtkWidget  	  	*botonAgregarPieza, 
			*comboColorBando, 
			*comboUbicacion,
			*comboTipoPieza,
			*comboOponentePractica,
			*comboColorTuBando, 
		  	*labelTipoPieza, 
			*labelColorBando, 
			*labelUbicacion,
			*labelAgregarPractica, 
			*labelMaterial,
			*botonBorrarPieza, 
			*labelColorTuBando,
		  	*botonComenzarPractica, 
			*botonCancelarPractica,
			*labelTipoOponentePractica,
			*hboxbotones1, 
			*botonGirarPractica,
		  	*vboxlabel1, 
			*vboxlabel2, 
			*vboxcombos1, 
			*vboxcombos2,
			*hboxlabelcombo,
			*hboxbotones, 
			*hseparador,
		  	*comboColorInicioPractica, 
			*labelBandoJugarPractica, 
			*hboxBajoPractica, 
			*boxTabla;

RGB rgb1, rgb2, rgb3, rgb4, rgb5, rgb6, rgb7, rgb8, rgb9, rgb10, rgb11, rgb12, rgb13, rgb14, rgb15, rgb16, rgb17, rgb18, rgb19;

static GtkItemFactoryEntry menu_items[] = {
  { "/_Juego"			, NULL		, NULL			, 0, "<Branch>" 				},
  { "/Juego/_Nuevo"		, "<control>N"	, menuNuevo		, 0, "<StockItem>", GTK_STOCK_NEW 		},
  { "/Juego/_Abrir"		, "<control>A"	, menuAbrir		, 0, "<StockItem>", GTK_STOCK_OPEN 		},
  { "/Juego/_Introducir FEN"	, "<control>I"	, menuFEN		, 0, "<StockItem>", GTK_STOCK_EXECUTE		},
  { "/Juego/Partidas de _Estudio", "<control>E" , menuAbrirPGN		, 0, "<StockItem>", GTK_STOCK_OPEN 		},
  { "/Juego/_Guardar"		, "<control>G"	, menuGuardar		, 0, "<StockItem>", GTK_STOCK_SAVE 		},
  { "/Juego/Guardar _Como"	, "<control>C"	, menuGuardarComo	, 0, "<StockItem>", GTK_STOCK_FLOPPY		},
  { "/Juego/sep1"		, NULL		, NULL			, 0, "<Separator>" 				},
  { "/Juego/_Regresar"		, "<control>R"	, menuRegresar		, 0, "<StockItem>", GTK_STOCK_UNDO		},
  { "/Juego/sep2"		, NULL		, NULL			, 0, "<Separator>" 				},
  { "/Juego/_Diccionario"	, "<CTRL>O"	, menuDiccionario	, 0, "<ToggleItem>", GTK_STOCK_INDEX		},
  { "/Juego/sep3"		, NULL		, NULL			, 0, "<Separator>" 				},
  { "/Juego/_Salir"		, "<CTRL>S"	, salirDesdeMenu	, 0, "<StockItem>", GTK_STOCK_QUIT 		},
  { "/_Ver"			, NULL		, NULL			, 0, "<Branch>" 				},
  { "/Ver/_Pantalla Completa"	, "F11"		, menuPantallaCompleta	, 0, "<StockItem>", GTK_STOCK_FULLSCREEN	},
  { "/Ver/_Barra Herramientas"	, "F2"		, verBarHerramientas	, 0, "<ToggleItem>"				},
  { "/Ver/Barra _Historial"  	, "F3"		, verBarHistorial 	, 0, "<ToggleItem>"				},
  { "/Ver/sep4"			, NULL		, NULL			, 0, "<Separator>" 				},
  { "/Ver/Notacion _Tablero"  	, "F12"		, pintarNotacionTablero	, 0, "<ToggleItem>"				},
  { "/Ver/Pensamientos de _Mango Paola", NULL	, verPensamientoPC	, 0, "<ToggleItem>"				},
  { "/Ver/sep5"			, NULL		, NULL			, 0, "<Separator>" 				},
  { "/Ver/_Video Motivacional" 	, "F9"		, menuVideo	 	, 0, "<StockItem>", GTK_STOCK_CDROM		},
  { "/Ver/Conse_jos de Paola"	, "F4"		, menuConsejo	 	, 0, "<StockItem>", GTK_STOCK_EDIT		},
  { "/Ver/Ponderación Pie_zas"	, NULL		, menuPonderacionPiezas	, 0, "<StockItem>",GTK_STOCK_ORIENTATION_PORTRAIT},
  { "/_Ajustes"			, NULL		, NULL			, 0, "<Branch>" 				},
  { "/Ajustes/Tipo de Piezas"	, NULL		, NULL			, 0, "<Branch>"	  				},
  { "/Ajustes/Tipo de Piezas/_Clásicas", "F6"	, menuPiezasClasicas	, 0, "<Item>"					},
  { "/Ajustes/Tipo de Piezas/_Fantasia", "F7"	, menuPiezasNormales	, 0, "<Item>"					},
  { "/Ajustes/Tipo de Piezas/C_omicas",  "F8"	, menuPiezasComicas	, 0, "<Item>"					},
  { "/Ajustes/_Preferencias"	, "F5"		, menuPreferencias	, 0, "<StockItem>", GTK_STOCK_PREFERENCES	},
  { "/Ajustes/sep6"		, NULL		, NULL			, 0, "<Separator>" 				},
  { "/Ajustes/_Voz Accesibilidad", "<CTRL>V"	, menuOirAccesibilidad	, 0, "<ToggleItem>"				},
  { "/A_yuda"			, NULL		, NULL			, 0, "<LastBranch>"				},
  { "/Ayuda/_Contenido"		, "F1"		, menuAyuda		, 0, "<StockItem>", GTK_STOCK_HELP		},
  { "/Ayuda/Acces_ibilidad"	, NULL		, menuAccesibilidad	, 0, "<StockItem>", GTK_STOCK_HELP		},
  { "/Ayuda/_Acerca de"		, "<control>D"	, menuAcercaDe		, 0, "<StockItem>", GTK_STOCK_ABOUT		},};

static gint nmenu_items = sizeof (menu_items) / sizeof (menu_items[0]);

//NUEVOS
OBJINTERFACE 		objInterface;
IMAGEN_PIEZAS 		vpiezas[16];
OBJ_IG 			vpiezasIG[16];

char			strNombreJuego[LARGO_CAMPOS_STR];
char			strNombreBlancas[LARGO_CAMPOS_STR];
char			strNombreNegras[LARGO_CAMPOS_STR];
char			path_mma[LARGO_RUTAPIEZA];
int 			controlTiempo				= 0;
BOOLEANO		NOpintarTableroSelectivo;
int 			numPosOrigen				= SIN_POS_VALIDAS;
BOOLEANO		esTipoHumanBlanco_tagPGN 		= FALSO;
BOOLEANO		esTipoHumanNegro_tagPGN 		= FALSO;
char 			mensajePanel1[100];
char 			mensajePanel2[100];
int			iniTiempoEnPGN				= 0;
unsigned int  		iniTiempoEnPGNBlancas			= 0;
unsigned int  		iniTiempoEnPGNNegras			= 0;
BOOLEANO		esFaltaGrabar				= FALSO;
BOOLEANO		esGuardarComo				= FALSO;
BOOLEANO		esFalloAbrir				= FALSO;
int			ultimaPosInicial			= SIN_POS_VALIDA;		
int			ultimaPosFinal				= SIN_POS_VALIDA;
BOOLEANO		noResaltarUltimaPos			= FALSO;		



















#endif
