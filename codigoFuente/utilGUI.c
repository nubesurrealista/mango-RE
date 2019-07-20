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

#ifndef UTILGUI_C
#define UTILGUI_C

void corregirMaxTiempo(int tiempoRestante)
{
	int tiempoSugerido = ((tiempoRestante / 25)*1000)-150;
	
	if (tiempoSugerido < 1000) tiempoSugerido = 1000;

	if (tiempoSugerido < pcNivel2int[nivelPC])
	{
		juego.maxTiempo = tiempoSugerido; 
	}
}

int generarTips()
{
	int i=0;
	int c=0;
	do {

		i = rand() % 100;
		c++;
	} while(LISTA_TIPS_OCURRENCIAS[i] || c > 99);

	LISTA_TIPS_OCURRENCIAS[i]=1;
	return i;
}

void cargarVistaTablero()
{
	int i=0;
	BOOLEANO esJaque;
	uint8 escaque;

	for (i=0;i<64;i++)
	{
		VISTA[i].pieza 		= ESCAQUES[i];
		VISTA[i].estado		= ((ESCAQUES_NEGROS & BITSET[i]) ? NEGRO:BLANCO);
		VISTA[i].esClavada	= FALSO;
		VISTA[i].numPosValidas 	= 0;

		if (ESCAQUES[i])
		{
		
			if (OBT_COLOR_PIEZA(ESCAQUES[i]) == juego.colorTurno) // piezas amigas
			{
				VISTA[i].estado = 
					(esAtacadoPor(BITSET[i],!juego.colorTurno)?
							CODESTADO_PIEZA_AMIGA_ATACADA:VISTA[i].estado);
			} else { // piezas enemigas
				VISTA[i].estado = 
					(esAtacadoPor(BITSET[i],juego.colorTurno)?
							CODESTADO_PIEZA_ENEMIGA_ATACADA:VISTA[i].estado);
			}
		} 		
	}


	for (i=juego.Buffer_MOV_INDEXCAPAS[0];i<juego.Buffer_MOV_INDEXCAPAS[1];i++)
	{
		hacerMovimiento(juego.Buffer_MOV[i]);

		if (juego.colorTurno) // Le toca al negro, se chequea que el rey blanco no haya quedado en jaque
		{
			esJaque = esAtacadoPor(juego.tablero[BLANCO][REY], NEGRO);
		} else {
			esJaque = esAtacadoPor(juego.tablero[NEGRO][REY], BLANCO);
		}

		desHacerMovimiento(juego.Buffer_MOV[i]);

		if (!esJaque)
		{
			escaque = OBT_MOV_ORIGEN(juego.Buffer_MOV[i]);
			VISTA[escaque].posValidas[VISTA[escaque].numPosValidas++]= OBT_MOV_DESTINO(juego.Buffer_MOV[i]);	

		}
	}


// ****************************************************************************************************************
// **************************************** PIEZAS CLAVADAS *******************************************************
// ****************************************************************************************************************
//*
	uint64 clavadas		= 0;
	uint64 tempDestinos	= 0;
	int escaqueOrigen	= 0;


// **********************************CLAVADAS NEGRAS**************************************************************


	//obtener clavadas con respecto a la  DAMA
	tempDestinos   = juego.tablero[NEGRO][DAMA];
	// analizar todas las damas negras presentes en el tablero
	while (tempDestinos)
	{		
		escaqueOrigen = bitScanForwardBruijn(tempDestinos);

		clavadas |= 
		 obtPiezasClavadasPor(escaqueOrigen, BLANCO,
		 (juego.tablero[NEGRO][TORRE] | juego.tablero[NEGRO][ALFIL] | juego.tablero[NEGRO][CABALLO] | juego.tablero[NEGRO][PEON]),
			 juego.tablero[BLANCO][ALFIL], juego.tablero[BLANCO][TORRE]);


		tempDestinos ^= BITSET[escaqueOrigen];
	}

	//obtener clavadas con respecto a la TORRE
	tempDestinos   = juego.tablero[NEGRO][TORRE];
	// analizar todas las torres negras presentes en el tablero
	while (tempDestinos)
	{		
		escaqueOrigen = bitScanForwardBruijn(tempDestinos);

		clavadas |= 
			obtPiezasClavadasPor(escaqueOrigen, BLANCO,
			(juego.tablero[NEGRO][ALFIL] | juego.tablero[NEGRO][CABALLO] | juego.tablero[NEGRO][PEON]),
			 juego.tablero[BLANCO][ALFIL], 0);

		tempDestinos ^= BITSET[escaqueOrigen];
	}


// **********************************CLAVADAS BLANCAS**************************************************************

	//obtener clavadas con respecto a la  DAMA
	tempDestinos   = juego.tablero[BLANCO][DAMA];
	// analizar todas las damas negras presentes en el tablero
	while (tempDestinos)
	{		
		escaqueOrigen = bitScanForwardBruijn(tempDestinos);

		clavadas |= 
			obtPiezasClavadasPor(escaqueOrigen, NEGRO,
		(juego.tablero[BLANCO][TORRE] |juego.tablero[BLANCO][ALFIL] | juego.tablero[BLANCO][CABALLO] | juego.tablero[BLANCO][PEON]),
		 juego.tablero[NEGRO][ALFIL], juego.tablero[NEGRO][TORRE]);

		tempDestinos ^= BITSET[escaqueOrigen];
	}

	//obtener clavadas con respecto a la TORRE
	tempDestinos   = juego.tablero[BLANCO][TORRE];
	// analizar todas las torres negras presentes en el tablero
	while (tempDestinos)
	{		
		escaqueOrigen = bitScanForwardBruijn(tempDestinos);

		clavadas |= 
			obtPiezasClavadasPor(escaqueOrigen, NEGRO,
			(juego.tablero[BLANCO][ALFIL] | juego.tablero[BLANCO][CABALLO] | juego.tablero[BLANCO][PEON]),
			 juego.tablero[NEGRO][ALFIL], 0);

		tempDestinos ^= BITSET[escaqueOrigen];
	}

	while (clavadas)
	{		
		escaqueOrigen 			= bitScanForwardBruijn(clavadas);
		VISTA[escaqueOrigen].esClavada  = VERDADERO; 
		clavadas ^= BITSET[escaqueOrigen];
	}

// ****************************************************************************************************************
// **************************************** PIEZAS CLAVADAS REY*******************************************************
// ****************************************************************************************************************
//*
	clavadas	= 0;
	tempDestinos	= 0;
	escaqueOrigen	= 0;

	// CLAVADAS NEGRAS*****
	//obtener clavadas con respecto al REY
	clavadas = 
		obtPiezasClavadasPor(escaqueRey[NEGRO], BLANCO,
		(juego.tablero[NEGRO][DAMA]  | juego.tablero[NEGRO][TORRE] | 
		 juego.tablero[NEGRO][ALFIL] | juego.tablero[NEGRO][CABALLO] | juego.tablero[NEGRO][PEON]), 
		(juego.tablero[BLANCO][DAMA]  | juego.tablero[BLANCO][ALFIL]),
		(juego.tablero[BLANCO][DAMA]  | juego.tablero[BLANCO][TORRE]));

	clavadas |= 
		obtPiezasClavadasPor(escaqueRey[BLANCO], NEGRO,
		(juego.tablero[BLANCO][DAMA]  | juego.tablero[BLANCO][TORRE] | 
		 juego.tablero[BLANCO][ALFIL] | juego.tablero[BLANCO][CABALLO] | juego.tablero[BLANCO][PEON]), 
		(juego.tablero[NEGRO][DAMA]  | juego.tablero[NEGRO][ALFIL]),
		(juego.tablero[NEGRO][DAMA]  | juego.tablero[NEGRO][TORRE]));


	while (clavadas)
	{		
		escaqueOrigen 			   = bitScanForwardBruijn(clavadas);
		VISTA[escaqueOrigen].esClavadaRey  = VERDADERO; 
		clavadas ^= BITSET[escaqueOrigen];
	}
}

int mov2alg(MOVIMIENTO mov, char *arraytmp)
{
#define	VVISTA juego.historicoJuego[juego.indiceHJuego-1].vistaTablero

	uint8 origen, destino;
	PIEZA pieza;
	int i,j, ambiguo=NO_AMBIGUA;
	int indicetmp=0, tipoFinalJuego=obtTipoFinalJuego();
	BOOLEANO esOO, esOOO, esCAP;	

	origen 	= OBT_MOV_ORIGEN(mov);
	destino	= OBT_MOV_DESTINO(mov);
	pieza 	= OBT_MOV_PIEZA(mov);
	ambiguo = NO_AMBIGUA;
	esOO	= ES_MOV_OO(mov);
	esOOO	= ES_MOV_OOO(mov);
	esCAP	= ES_MOV_CAPTURA(mov);

	memset(arraytmp,'\0',20);

	for (i=0;i<64;i++)
	{
		if (i != origen)
		{	
			if (VVISTA[i].numPosValidas)
			{
				for (j=0;j<VVISTA[i].numPosValidas;j++)
				{
					if ((destino==VVISTA[i].posValidas[j]) && (pieza==ESCAQUES[i]))
					{
						if (FILES[i]==FILES[origen])       //Igual files desambiguar por ranks
						{
							ambiguo = DESAMBIGUACION_POR_RANK;
							break;
						}

						else if (RANKS[i]==RANKS[origen])  //Igual Ranks desambiguar por files
						{
							ambiguo = DESAMBIGUACION_POR_FILA;
							break;

						} else {
							ambiguo = DESAMBIGUACION_POR_FILA;
							break;
						}
					}
				}
			}
		}
	}


	if ((pieza == PEON_BLANCO || pieza == PEON_NEGRO) && (esCAP))
	{
		arraytmp[indicetmp++] =  num2charFiles[origen];

	} else if ((pieza == REY_BLANCO || pieza == REY_NEGRO) && !(esOO || esOOO)) {
		arraytmp[indicetmp++] = 'R';

	} else if (pieza != PEON_BLANCO && pieza != PEON_NEGRO && pieza != REY_NEGRO && pieza != REY_BLANCO) {

		arraytmp[indicetmp++] = obtCharPieza(pieza);

		if (ambiguo == DESAMBIGUACION_POR_RANK) 
		{
			arraytmp[indicetmp++] =  num2charRank[origen];

		} else if (ambiguo == DESAMBIGUACION_POR_FILA) {	

			arraytmp[indicetmp++] =  num2charFiles[origen];
		}
	}


	if (esCAP)
	{		  
		arraytmp[indicetmp++] =  'x';
	}

	if (esOOO)	  
	{
		arraytmp[indicetmp++] = 'O'; 
		arraytmp[indicetmp++] = '-';
		arraytmp[indicetmp++] = 'O';
		arraytmp[indicetmp++] = '-';
		arraytmp[indicetmp++] = 'O';

	} else if (esOO) {
		arraytmp[indicetmp++] = 'O';
		arraytmp[indicetmp++] = '-';
		arraytmp[indicetmp++] = 'O';
	} else {
		arraytmp[indicetmp++] = num2charFiles[destino];
		arraytmp[indicetmp++] = num2charRank[destino]; 
	}	  


	if (ES_MOV_PROMOCION(mov))
	{	  
		arraytmp[indicetmp++] = '=';
		arraytmp[indicetmp++] = obtCharPieza(OBT_MOV_PROMOCION(mov)); 
	}

	if (tipoFinalJuego==FINAL_JUEGO_JAQUE_MATE)
	{
		arraytmp[indicetmp++] =  '+';
		arraytmp[indicetmp++] =  '+';

	} else if (tipoFinalJuego==NO_ES_FINAL_JUEGO_HAY_JAQUE) {
		arraytmp[indicetmp++] =  '+';

	}

	arraytmp[15] = '\0';
	return indicetmp>15?15:indicetmp;

}

char obtCharPieza(int pieza)
{
//*
	switch(pieza)
	{
		case PEON_NEGRO:
		case PEON_BLANCO: 	return 'P';break;

		case TORRE_NEGRO:
		case TORRE_BLANCO: 	return 'T';break;

		case CABALLO_NEGRO:
		case CABALLO_BLANCO: 	return 'C';break;

		case ALFIL_NEGRO:
		case ALFIL_BLANCO: 	return 'A';break;

		case DAMA_NEGRO:
		case DAMA_BLANCO: 	return 'D';break;

		case REY_NEGRO:
		case REY_BLANCO: 	return 'R';break;
	}
	return 'M';
//*/
}

#endif
