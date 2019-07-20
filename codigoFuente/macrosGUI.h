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

#ifndef MACROSGUI_H
#define MACROSGUI_H

#define 	EJECUTAR_SALIDA			guardarUltimoEstado();CLOSE_BOOK();cerrarTablas();exit(0);
#define		LARGO_SUGERENCIA_GUARDAR	64
#define		TIPO_PGN			".pgn"
#define		TIPO_MAJ			".maj"
#define		JUEGO_X_TIEMPO_1	1
#define		JUEGO_X_TIEMPO_3	3
#define		JUEGO_X_TIEMPO_5	5
#define		JUEGO_X_TIEMPO_10	10
#define		JUEGO_X_TIEMPO_15	15
#define		JUEGO_X_TIEMPO_30	30
#define		JUEGO_X_TIEMPO_45	45
#define		JUEGO_X_TIEMPO_60	60
#define		JUEGO_X_TIEMPO_MIN	1
#define		JUEGO_X_TIEMPO_HOR	60
#define		LADO_BLANCO		0
#define		LADO_NEGRO		63
#define		TAMANIO_PIEZA		60
#define		TAMANIO_PIEZA_MINI	40
#define		TAMANIO_MATRIZ		8
#define		TAMANIO_MIN_RESOL_ALTO	640
#define		TAMANIO_MIN_RESOL_ANCHO	540

#define		ADELANTE		-1
#define		ATRAS			+1
#define		KILOBYTES_64		65536	//64Kb	
#define 	XY2POS(x,y) (x/tamanio_cuadro) + ((largoTablero-y)/tamanio_cuadro) + (((largoTablero-y)/tamanio_cuadro) * numCeldasTablero)
#define		TRANSFORMAR_POS(pos)     (objInterface.Lado2Jugar == LADO_BLANCO ? pos :LADO_NEGRO-pos)
#define		DES_TRANSFORMAR_POS(pos) (objInterface.Lado2Jugar == LADO_BLANCO ? pos :LADO_NEGRO-pos)
#define		MOV_ADELANTE		1
#define		MOV_ATRAS		2

#define 	PRACTICA_OK			1
#define		PRACTICA_ERROR_REY_NEGRO	2
#define		PRACTICA_ERROR_REY_BLANCO	3
#define		PRACTICA_ERROR_REY_AMBOS	4

#define		NUMERO_MAGICO_1			0x6A07
#define		NUMERO_MAGICO_2			0x6A07
#define		TIPO_PIEZA_NORMAL		1
#define		TIPO_PIEZA_CLASICO		3
#define		TIPO_PIEZAMINI_NORMAL		0
#define		TIPO_PIEZAMINI_CLASICO		2
#define		TIPO_PIEZA_ANIMADOS		5
#define		TIPO_PIEZAMINI_ANIMADOS		4

#define		TIPO_PIEZA_NORMAL_RUTA		"b01/"
#define		TIPO_PIEZA_CLASICO_RUTA		"b02/"
#define		TIPO_PIEZA_ANIMADOS_RUTA	"b03/"
#define		TIPO_PIEZAMINI_NORMAL_RUTA	"m01/"
#define		TIPO_PIEZAMINI_CLASICO_RUTA	"m02/"
#define		TIPO_PIEZAMINI_ANIMADOS_RUTA	"m03/"

#define 	ALFIL_BLANCO_NOMBRE_ARCHIVO	"alfilb.png"	
#define 	CABALLO_BLANCO_NOMBRE_ARCHIVO	"caballob.png" 	
#define 	DAMA_BLANCO_NOMBRE_ARCHIVO	"damab.png"	
#define 	PEON_BLANCO_NOMBRE_ARCHIVO	"peonb.png" 	
#define 	TORRE_BLANCO_NOMBRE_ARCHIVO	"torreb.png" 	
#define 	REY_BLANCO_NOMBRE_ARCHIVO	"reyb.png"	

#define 	ALFIL_NEGRO_NOMBRE_ARCHIVO	"alfiln.png"	
#define 	CABALLO_NEGRO_NOMBRE_ARCHIVO	"caballon.png"	
#define 	DAMA_NEGRO_NOMBRE_ARCHIVO	"daman.png"	
#define 	PEON_NEGRO_NOMBRE_ARCHIVO	"peonn.png"	
#define 	TORRE_NEGRO_NOMBRE_ARCHIVO	"torren.png"	
#define 	REY_NEGRO_NOMBRE_ARCHIVO	"reyn.png"
              /*TIPO_JUEGO_BLANCO_NEGRO*/           
#define		TIPO_JUEGO_HUMANO_HUMANO	1
#define		TIPO_JUEGO_HUMANO_PC		2
#define		TIPO_JUEGO_PC_HUMANO		3
#define		TIPO_JUEGO_PC_PC		4
#define		TIPO_JUEGO_HUMANO_RED		5
#define		TIPO_JUEGO_RED_HUMANO		6

#define		NIVEL_PC_0			1
#define		NIVEL_PC_1			2
#define		NIVEL_PC_2			3
#define		NIVEL_PC_3			4

#define		CARGA_SESION_OK			0
#define		CARGA_SESION_NO_EXISTE		1
#define		CARGA_SESION_NUMERO_MAGICO_MALO	2
#define		LARGO_POS_VALIDAS		28

#define		TOTAL_MOV_PARTIDA		8192	//4096
#define		LARGO_TIPO_PIEZA_RUTA_CHAR	5
#define		LARGO_RUTAPIEZA			256
#define		LARGO_CAMPOS_STR		64
#define		LARGO_CAMPOS_STR_FEN		128
#define		LARGO_POS_TABLERO		64
#define		LARGO_POS_VALIDAS		28

#define		STATUS_FIN_JUEGO_SIN_ESTATUS		0
#define		STATUS_FIN_JUEGO_JAQUE			1
#define		STATUS_FIN_JUEGO_MATE_GANAN_B		2
#define		STATUS_FIN_JUEGO_MATE_GANAN_N		3
#define		STATUS_FIN_JUEGO_TABLAS			4
#define		STATUS_FIN_JUEGO_TABLAS_INSUFI_MATERIAL	6
#define		STATUS_FIN_JUEGO_TABLAS_REPETICION	7
#define		STATUS_FIN_JUEGO_TABLAS_REGLA_50MOV	8
#define		STATUS_FIN_JUEGO_INDETERMINADO		9
#define		STATUS_FIN_JUEGO_TERMINADO		(statusFinJuego > 1)
#define		STATUS_FIN_JUEGO_NO_TERMINADO		(statusFinJuego < 2)

#define		ALINEACION_AARIBA		0
#define		ALINEACION_AABAJO		1

#define 	ESPACIO_VACIO			0	/*0*/

#define		VISTA 				juego.historicoJuego[juego.indiceHJuego].vistaTablero
#define		TABLERO_VISTA_INICIAL		"nbnbnbnbbnbnbnbnnbnbnbnbbnbnbnbnnbnbnbnbbnbnbnbnnbnbnbnbbnbnbnbn"

#define		SIN_POS_VALIDAS			-1

#define 	STATUS_JAQUE			1
#define 	STATUS_AHOGADO			2
#define 	STATUS_JAQUEMATE		4

#define 	ESNOTAALGCOL(col) 		((col>=97) && (col<=104))
#define 	ESNOTAALGFIL(fil) 		((fil>=49) && (fil<=56))
#define		MOV2POS(asciiLetra,asciiNum)	((asciiLetra<97||asciiLetra>104))||((asciiNum<48||asciiNum>56))?-1:((asciiLetra-97)+((asciiNum-49)*8))

#define 	AC 				juego.historicoJuego[objInterface.indexJugada].vistaTablero[numPosOrigen]
#define		VAC 				juego.historicoJuego[objInterface.indexJugada].vistaTablero[posAccesibilidad]

#define		MAX_RUTA_PATH			512

#endif
