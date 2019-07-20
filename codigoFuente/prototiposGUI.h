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

#ifndef PROTOTIPOSGUI_H
#define PROTOTIPOSGUI_H

void corregirMaxTiempo(int tiempoRestante);
int generarTips();
void iniNombresPC();
void mostrarMensaje(char *msj, char *titulo);
void mostrarMensajeConsola(char *msm, char *rutaImg, char *msmTitulo);

void cargarVistaTablero();
void verPosValidas();
void mostrarMensajeEnTableroRGB(RGB *rgb, int x, int y, char *mensaje, int tamanio);

static gboolean fconfigure(GtkWidget 	 *area, GdkEventConfigure   *event, gpointer data);
static gboolean leave_notify(GtkWidget 	 *area, GdkEventCrossing    *event, gpointer data);
static gboolean expose_event(GtkWidget 	 *area, GdkEventExpose 	    *event, gpointer data);
static gboolean button_pressed(GtkWidget *area, GdkEventButton 	    *event, gpointer data);
static gboolean motion_notify(GtkWidget  *area, GdkEventMotion 	    *event, gpointer data);
static gboolean key_pressed(GtkWidget 	 *area, GdkEventKey 	    *event, gpointer data);
static gboolean key_pressed_main(GtkWidget *area, GdkEventKey *event, gpointer data);
static gboolean estadoWindow(GtkWidget 	 *area, GdkEventWindowState *event, gpointer data);


static gboolean procesarTiempoJuego();
static gboolean animacionPieza();
static gboolean comboBoxCambio();
static gboolean nuevo();
static gboolean introFEN();
static gboolean abrir();
static gboolean guardar();
static gboolean rendirse();
static gboolean verAyudaColor();
static gboolean verNumeracion();
static gboolean ocultarBarra();
static gboolean mostrarBarra();
static gboolean ocultarBarraInferior();
static gboolean ocultarBarra();
static gboolean sugerirJugada();
static gboolean historialPrimero();
static gboolean historialAtras();
static gboolean historialAdelante();
static gboolean historialUltimo();
static gboolean salir();
static gboolean salir_destroy();
static gboolean girarTablero();
static gboolean cambiarLadoTablero();
static gboolean sonidoJuego();

void pintarFondo();

void ini_POS_CEL_TABLERO_XY();
RGB* obtener_ColorCelda(uint8 posVista, int pos);
void pintarTablero();
void dibujarRectangulo(cairo_t *cr, int x, int y, int ancho, int alto, RGB *rgb);
void dibujarPieza(cairo_t *cr,  int pos);
void dibujarPiezas();
int obtener_indice(int id);
void cargar_vpiezas();
void resaltarPosTablero(cairo_t *cr, RGB *rgb, int numPos);

void borrarAyudaColor();
void mostrarAyudaColor();
void pintarTableroSelectivo();

char* obtener_tipoJuego_int2str(int tipoJuego);
void notacion_espaniol2ingles(char cadenaEntrada[],char cadenaSalida[]);
void notacion_ingles2espaniol(char cadenaEntrada[]);
void guardarArchivoPGN(char *nombreArchivo);

void mostrarMensajeError(char *titulo, char strMensajeError[]);
void abrirArchivoPGN(char *nombreArchivo);

void desplazarPieza(int posOrigen, int posDestino);
void dibujarPiezaXY(cairo_t *cr, int x, int y, int indicePiezaImagen);

void mostrarPanelNotificacion(char *titulo, char *antetitulo);
int obtenerBASETIEMPO();

void cargarComboHistorial();
void comenzarTiempoJuego(unsigned int tBlancas,unsigned int tNegras);
int cargarUltimoEstado();
int guardarUltimoEstado();
void reDibujarTodo();
int obtener_tiempoJuego(int indexComboTiempo);
void cargarTituloVentana();
void crearJugadaPC();

static void menuNuevo(GtkWidget *w, gpointer data);
static void menuAbrir(GtkWidget *w, gpointer data);
static void menuFEN(GtkWidget *w, gpointer data);
static void menuAbrirPGN(GtkWidget *w, gpointer data);
static void menuGuardar(GtkWidget *w, gpointer data);
static void menuGuardarComo(GtkWidget *w, gpointer data);
static void menuAyuda(GtkWidget *w, gpointer data);
static void menuAccesibilidad(GtkWidget *w, gpointer data);
static void menuPantallaCompleta(GtkWidget *w, gpointer data);
static void menuRegresar(GtkWidget *w, gpointer data);
static void menuDiccionario(GtkWidget *w, gpointer data);
static void menuPiezasNormales(GtkWidget *w, gpointer data);
static void menuPiezasClasicas(GtkWidget *w, gpointer data);
static void menuPiezasComicas(GtkWidget *w, gpointer data);
static void menuPreferencias(GtkWidget *w, gpointer data);
static void menuAcercaDe(GtkWidget *w, gpointer data);
static void menuVideo(GtkWidget *w, gpointer data);
static void menuConsejo(GtkWidget *w, gpointer data);
static void menuPonderacionPiezas(GtkWidget *w, gpointer data);
static void menuOirAccesibilidad(gpointer callback_data, guint callback_action, GtkWidget *menu_item);

static void salirDesdeMenu(GtkWidget *w, gpointer data);
static void verBarHistorial(gpointer callback_data, guint callback_action, GtkWidget *menu_item);
static void verPensamientoPC(gpointer callback_data, guint callback_action, GtkWidget *menu_item);
static void pintarNotacionTablero(gpointer callback_data, guint callback_action, GtkWidget *menu_item);
static void verBarHerramientas(gpointer callback_data, guint callback_action, GtkWidget *menu_item);
int esValidaPractica();
char* obtenerSugerenciaNombreArchivo(char sugerenciaNomArchivo[], char *tipo);

int pieza2indexCombo(PIEZA pieza);
PIEZA indexCombo2pieza(int index, int color);
void procesarPGN(char *cadenaBytes, long largo);
void procesarPGN_ETIQUETA(char *cadenaBytes, int largo);
void crearLibroDesdePGN(char *nombreArchivo);
long procesarPGN2(char *cadenaBytes, long inicio, long largo, char *linea);
BOOLEANO introMovAlgCorto2(COLOR color, char *movAlg, int largo, int pos, MOVIMIENTO *resulMov);
void procesarPGN_ETIQUETA2(char *cadenaBytes, int largo);
void asignarValorEtiqueta(char *nombreEtiqueta, char *valorEtiqueta);

int iniciarInterfaceGrafica(int *argc, char* argv[]);
void cargar_vpiezas_IG();
char* obtener_nombreArchivoPiezaIG(uint8 id);

PIEZA algNotaPieza2Pieza(char letraPiezaIngles, COLOR color);
BOOLEANO introMovAlgCorto(COLOR color, char *movAlg, int largo, int pos);
void localizarPeon(COLOR color, int *posCol, int *posEncontrada);
void localizarPosPieza(PIEZA pieza, int *index, int *posEncontrada);

void mostrarMensajeEnTablero(int x, int y, char *mensaje, int tamanio);
void mostrarMensajeEnTablero_cr(cairo_t *cr, int x, int y, char *mensaje, int tamanio, RGB *rgb, int alineacion);
int obtEstadoJuego();

void dibujarBordeRectangulo(cairo_t *cr, int x, int y, int ancho, int alto);
void resaltarUltimoMovimiento(cairo_t *cr);
void reproducirSonidoDesEscaque(int pos);
void reproducirSonidoPiezaEscaque(int pos);

void dibujarBordeRectanguloCursor(cairo_t *cr, int x, int y, int ancho, int alto);
void reproduccionInfoEscaque(int posAccesibilidad);
#endif




