# mango-paola


Mango Paola Ajedrez + Interface de Usuario

http://mangocomputerca.blogspot.com/


Busqueda Alfa-Beta Negamax: Variación de búsqueda principal
Tabla de transposicion
Poda por movimiento nulo
Poda por movimiento tardio PODA MOVIMIENTO TARDIO
Validacion regla 50 movimientos
Tabla hash de movimientos variable
Representacion del tablero por medio de tabla de bits (bitboard) 64 bits

**************************************************************************************************

Para instalar todas las librerias necesarias en la compilacion

sudo apt-get install gcc pentium-builder pkg-config libgtk2.0-dev

NOTA: para que el programa pueda ser ejecutado, debe crearse una carpeta en la ruta

/home/NombreDeUsuario/mango-paola/

alli debe copiarse toda la estructura de carpetas y el binario

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

funcion 
void inicializarVar()
		
	nos encontramos con esto:

	//Leer Variables de Entorno
	bufferHOME = getenv("HOME");
	//Hacemos una copiapara no usar la direccion original
	strncpy(strRutaHome,bufferHOME, strlen(bufferHOME));
	
	//Cargamos la variable con la ruta exacta donde esta instalada la aplicacion
	sprintf(strRutaApp,"%s/mango-paola",strRutaHome);


	strRutaApp es un string donde obviamente tengo la ruta donde esta el compilado y desde alli tambien encuentro los demas recursos (sonidos, imagenes, etc.)

	

		



