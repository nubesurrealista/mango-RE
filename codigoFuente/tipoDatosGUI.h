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

#ifndef TIPO_DATOSGUI_H
#define TIPO_DATOSGUI_H

typedef struct
{
	int		numeroMagico1;
	int		numeroMagico2;
	int		Lado2Jugar;
	int 		Lado2JugarPreferencia;
	int 		indexJugada;
	int 		altoVentana;
	int 		anchoVentana;
	unsigned int  	tiempoBlancas;
	unsigned int 	tiempoNegras;
	BOOLEANO	verNotacion;
	BOOLEANO	verAyuda;
	BOOLEANO	oirSonido;
	BOOLEANO	oirAccesibilidad;
	BOOLEANO	esVisiblePanelNotificacion;
	BOOLEANO	esVisiblePanelPractica;
	BOOLEANO	usarDiccionario;
	BOOLEANO	verBarraHerramientas;
	BOOLEANO	verBarraHistorial;
	BOOLEANO	esCargaJuego;
	int		estadoWindow;
	int		tipoJuego;
	int 		tipoPiezas;
	BOOLEANO	esPorTiempo;
	char		nombreArchivoPGN[LARGO_RUTAPIEZA];
} OBJINTERFACE;

typedef struct
{
	int origenX; 
	int origenY; 
	int destinoX; 
	int destinoY; 
	int largoSaltoX; 
	int largoSaltoY; 
	int indiceImagen; 
	int posX;
	int posY;
	int pivoX;
	int pivoY;
	int pasos;
	int pasosTotal;
	int posOrigen;
	int posFinal;
	cairo_t *cr;
} DATOSANIMACION;

typedef struct 
{
  double rojo;
  double verde;
  double azul;
} RGB;

typedef struct 
{
  int pos_x;
  int pos_y;
} POS_CEL_TABLERO_XY;

typedef struct
{
  cairo_surface_t *image;
  char		  id;	
} IMAGEN_PIEZAS;

struct tm *tmptr;
enum FLAG_PGN {BANDERA_ABRIR, BANDERA_CERRAR}; 

typedef uint8 MATRIZPOSVALIDAS[LARGO_POS_TABLERO][LARGO_POS_VALIDAS+1];

typedef struct vector_piezas_graficas
{
	char rutaPieza[LARGO_RUTAPIEZA];
	char ID;
} OBJ_IG;

#endif














