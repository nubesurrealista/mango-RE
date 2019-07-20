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
/*
	flag del movimiento (orden de los bits y significado) basado en los estandares de juegos de ajedrez

	6: Escaque origen del movimiento
	6: Escaque destino del movimiento
	4: Pieza origen
	4: Pieza capturada
	4: Pieza Coronada
	4: codigo movimiento

	Total Bytes 28 de (uint32)

	Tabla de codigo movimientos

	cod	promocion	captura		especial 1	especial 0		tipo mov
	0	0		0		0		0			Movimiento Tranquilo
	1	0		0		0		1			Salida Doble Peon
	2	0		0		1		0			Enroque Corto oo
	3	0		0		1		1			Enroque Largo ooo
	4	0		1		0		0			Captura		
	5	0		1		0		1			Captura Peon al Paso
	8	1		0		0		0			Promocion Caballo
	9	1		0		0		1			Promocion Alfil
	10	1		0		1		0 			Promocion Torre
	11	1		0		1		1			Promocion Dama
	12	1		1		0		0			Promocion/Captura Caballo
	13	1		1		0		1			Promocion/Captura Alfil
	14	1		1		1		0			Promocion/Captura Torre
	15	1		1		1		1			Promocion/Captura Dama

	Movimientos Tranquilos:
	Son todos los movimientos que no alteren material, por lo que no capta ni promociones.
	También se puede excluir a los movimientos que presentan amenazas inminentes, tales como comprobar.


	Notas:

	printf("%#llxull\n",b);

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/timeb.h>
#include <ctype.h>
//#include <termios.h> 
#include <unistd.h>
#include <time.h>

#if defined (_WIN32) || defined(_WIN64)
    #ifndef WINDOWS
        #define WINDOWS
    #endif
    #include <windows.h>	//bioskey()
#endif

//Graficos
#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>
#include <math.h>
#include <errno.h>

#include "macros.h"
#include "macrosGUI.h"
#include "tipoDatos.h"
#include "tipoDatosGUI.h"
#include "data.h"
#include "prototipos.h"
#include "prototiposGUI.h"
#include "variables.h"
#include "variablesGUI.h"
#include "operacionesBit.c"
#include "busquedad.c"
#include "busquedadTranquilidad.c"
#include "debug.c"
#include "fen.c"
#include "ataque.c"
#include "ajedrez.c"
#include "ini.c"
#include "iniGUI.c"
#include "comandos.c"
#include "tiempo.c"
#include "perft.c"
#include "fevaluacion.c"
#include "ordenar.c"
#include "util.c"
#include "utilGUI.c"
#include "hash.c"
#include "eet.c"
#include "libro2.c"
#include "interfaceGrafica.c"

int main(int np, char* param[])
{
	if (np > 1)
	{
		esConsola = VERDADERO;
	}

	printf("#\n");
	printf("#	**************************************************\n");
	printf("#	*						 *\n");
	printf("#	*               MANGO PAOLA AJEDREZ      	 *\n");
	printf("#	*						 *\n");
	printf("#	* Programado por: Jose Andres Morales Linares    *\n");
	printf("#	* Version:        2.3                            *\n");
	printf("#	* Fecha:          Agosto-2013                    *\n");
	printf("#	* Licencia:       GPLv3                          *\n");
	printf("#	* Contacto:       comprasmangocomputer@gmail.com *\n");
	printf("#	*						 *\n");
	printf("#	**************************************************\n#\n");

	LARGO_TABLA_HASH 	= LARGO_TABLA_HASH_LLAVE_21BIT;
	esUsoTablaHash		= VERDADERO;
	usarLibroAperturas 	= VERDADERO;
	iniMatrizMov();
	iniMatrizSeguridadRey();
	iniCarreraPeonesMask();
	iniPeonEscondido();
	iniPeonCC();
	ini_is_outside();
	inicializarTablero();
	inicializarVar();
	iniTablerosUtil();
	actualizarTablerosUtil(BLANCO);
	iniciarHash();
	iniHashTablero();
	juego.Buffer_MOV_INDEXCAPAS[1] = generarTodosMov(0);
	if (usarLibroAperturas)
	{
		memset(rutaRandom1, 0,sizeof(char)*512);
		memset(rutaRandom2, 0,sizeof(char)*512);
		memset(rutaMainBook,0,sizeof(char)*512);
		memset(rutaTourBook,0,sizeof(char)*512);

		sprintf(rutaRandom1, "%s/libros/random1.bin", strRutaApp);
		sprintf(rutaRandom2, "%s/libros/random2.bin", strRutaApp);
		sprintf(rutaMainBook,"%s/libros/mainbook.bin",strRutaApp);
		sprintf(rutaTourBook,"%s/libros/tourbook.bin",strRutaApp);

		abrirLibro2();
	}



	if (esConsola)
	{
printf("#     					                ,   .				\n"); 
printf("#                                                      ___/J-._ 				\n");
printf("#                                                    -\"   L    ~ 			\n");
printf("#                                                  -\"      '  ; \\ 			\n");
printf("#                                                 \"       /   `r,\\ . 			\n");
printf("#                                                /       |        \\ 			\n");
printf("#                                               /        \\       ;.\\ 			\n");
printf("#                                               |         f\"-_ \"\" ' \\ 			\n");
printf("#                                               |       :  \\  ',,-. bj 			\n");
printf("#                                               |       : : \\   L`]_/ 			\n");
printf("#                                               |      \"\"\"; :\\:  \" 			\n");
printf("#                                               |   ::::      \\ 				\n");
printf("#                                               |o::        :: \\ 			\n");
printf("#                                              /:::'        :o | 			\n");
printf("#                                             /               - - 			\n");
printf("#                                            /               _ |_\\ 			\n");
printf("#            _,,,--._                     _.\"        :  :.  / 'x  \\ 			\n");
printf("#          ,\" ,..    \"-,              _,-\"          ::;. :: .  |  | 			\n");
printf("#        ,, \"'    `~..  )    __,---\"\"\"              :          |  L____ 			\n");
printf("#        d,         ,).(__,-\"                              L   |-,     \"\"\"--\"\", 		\n");
printf("#       ,d'.       :OO\\   ,     '.. .                      7 _ L     __,,,_   | 		\n");
printf("#       'P\"   ;  ;.OP/ ,-\"  ::;.          .               / _ (-\"\"\"\"\"      T  J 		\n");
printf("#       ,8:   o::oO`  /        :         ::;;     ,;:oO88(    \"\\           / / 		\n");
printf("#      ,YP  ,::;:O:   |        .     (   \".:::::::::oo888 \\     \\         / / 		\n");
printf("#      ',d: :;;O;:    |888::    ;;;   \"-,  \\ooooooooo88__, \",_   \\      ,/ / 		\n");
printf("#      dPY:  :o8O     |O8888O:O:; ;;;    \" |       _,\"\"      \",   \\-,,_  \\ 		\n");
printf("#     ,' O:  'ob`      |8888888Oo;        |__,,--\"\"            \",  \\   |  | 		\n");
printf("#     '  Y:  ,:o:       L,___            _j                      j  \"  l -\" 		\n");
printf("#        ::  ';o:            \\       _,-\"                        \\   \\ 			\n");
printf("#       `:   Oo:             J / ,-\"                             \"._ j 			\n");
printf("#         :o; 8oP            /  :/                                   \\ \\ 		\n");
printf("#        ,ooO:8O'          /\" o:/                                     \\ \\ 		\n");
printf("#        ;O8odo'           L_(_|L                                      \\ \\ 		\n");
printf("#       d\"`)8O'              -,, \"-._                                   \\ \"-, 		\n");
printf("#      ''-'`\"                   \"\"-,_, \"\",                               L__ '-, 	\n");
printf("#                                    \"-j  \\                                 L   \\ 	\n");

		printf("# Escriba \"ayuda\" y presione la tecla <Enter>\n");
		leerComandos();
	} else {

		cargarVistaTablero();
		//Verificar estado del complemento video
		bzero(strArmarRuta, 384);
		sprintf(strArmarRuta, "%s/video/MangoPaolaAnimacion.mp4",strRutaApp);

		FILE *fvideo = fopen(strArmarRuta, "r");
		if (!fvideo)
		{
			printf("Complemento [VIDEO]: NO-instalado\n");
		} else {
			esCompVideoInstalado = VERDADERO;
			printf("Complemento [VIDEO]: instalado\n");
			fclose(fvideo);
		}

		iniTips();
		iniNombresPC();
		iniciarInterfaceGrafica(&np, param);
	}




	exit(0);
}

