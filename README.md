# mango-paola


Mango Paola Ajedrez + Interface de Usuario

Blog oficial http://mangocomputerca.blogspot.com/
Ranking Mundial del Motor https://ccrl.chessdom.com/ccrl/4040/cgi/engine_details.cgi?print=Details&each_game=1&eng=Mango%20Paola%20Ajedrez%204.1#Mango_Paola_Ajedrez_4_1

**************************************************************************************************

¿Qué es Mango Paola?

Es un programa de computadora para jugar ajedrez orientado al público infantil, Mango Paola Ajedrez 
fue creado con la intención que sea incorporado como software base en las computadoras Canaimitas y 
Canaimas, no con esto significa que no pueda ser instalado en cualquier sistema Linux. Por otra parte, 
Mango Paola Ajedrez tiene como fin último estimular la curiosidad de los niños más pequeños al juego ciencia. 
Para ello, el software ha sido diseñado de una forma muy intuitiva, donde el pequeño ira paulatinamente adquiriendo 
las destrezas necesarias para jugar por sí mismo una partida de ajedrez convencional.

Mango Paola Ajedrez posee múltiples herramientas visuales y sonoras que incentivan al niño a interactuar con 
éste deporte, llevándolo de la “mano” a lo largo del camino de aprendizaje de este apasionante juego. 
Es importante resaltar, la conveniente intervención de los padres para reforzar el estímulo y servir de guía a 
través del software. Cabe destacar, que la mayoría de los niños a los 3 y 4 años aún no saben leer, 
por ende no podrán entender el manual de ayuda. Lo más probable es que el niño termine primero jugando una 
buena partida de ajedrez antes de aprender a leer.

**************************************************************************************************


Metodologías y tecnologías más importantes empleadas en el motor

* Búsqueda Alfa-Beta Negamax: Variación de búsqueda principal (algoritmo de búsqueda)
* Tabla de transposición (Técnica para acelerar la búsqueda)
* Poda por movimiento nulo (Podas de ramas menos prometedoras)
* Poda por movimiento tardío (Podas de ramas menos prometedoras)
* Poda por ventana mínima  (Podas de ramas menos prometedoras)
* Validación regla 50 movimientos (Podas por reglas propias del ajedrez)
* Tabla hash de movimientos variable (Técnica para acelerar la búsqueda)
* Estructura de datos del tablero por medio de tabla de bits (bitboard) 64 bits (Técnica de representación del tablero )
* Generación de movimientos legales por medio de aritmética de bits (Técnica para acelerar la búsqueda)


**************************************************************************************************


Notas:

Para instalar todas las librerías necesarias en la compilación

sudo apt-get install gcc pentium-builder pkg-config libgtk2.0-dev

NOTA: para que el programa pueda ser ejecutado, debe crearse una carpeta en la ruta

/home/NombreDeUsuario/mango-paola/

allí debe copiarse toda la estructura de carpetas y el binario

ejemplo: donde el usuario se llama <jose>

	/
	|------>home
		 |------->jose
			   |------>mangopaola
				      |--------->mma9
						  |-------->ayuda
						  |-------->b01
						  |-------->b02
						  |-------->b03
						  |-------->codigoFuente
						  |-------->imagenes
						  |-------->m01
						  |-------->m02
						  |-------->m03
						  |-------->partidas
						  |-------->partidasPGN	
						  |-------->sonidos
						  |-------->video
						  | libroBlancas.txt
						  | libroNegras.txt
						  | libroTablas.txt
						  | mangoPaola
						  | ultimoestado.obj

Esto es debido a que en el archivo 
ini.c 

función 
void inicializarVar()
		
	nos encontramos con esto:

	//Leer Variables del Entorno
	bufferHOME = getenv("HOME");
	//Hacemos una copia para no usar la dirección original
	strncpy(strRutaHome,bufferHOME, strlen(bufferHOME));
	
	//Cargamos la variable con la ruta exacta donde está instalada la aplicación
	sprintf(strRutaApp,"%s/mango-paola",strRutaHome);


	strRutaApp es un string donde está el compilado y desde allí se encuentran los demás recursos (sonidos, imágenes, etc.)

	

		



