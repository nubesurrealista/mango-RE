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

#ifndef UTIL_C
#define UTIL_C

BOOLEANO ReyPeonEscaque(int peon, int rey, int dama, int ptm)
{
  int pdist, rdist;

  pdist = abs(RANKS[peon] - RANKS[dama]) + !ptm;
  rdist = DISTANCIA[rey][dama];
  return (pdist >= rdist);
}


int obtEstadoJuego()
{
	BOOLEANO jaque;
	BOOLEANO es;

	//Verificar regla 3 repeticiones tablero
//*

	//Solicitar Tablas segun el caso y si  vamos perdiendo

	if ((computadora && juego.material_total > 0) || (!computadora && juego.material_total < 0))
	{
		ES_REPETICION_TABLEROMAIN(es);
		if (es) 
		{
			return STATUS_FIN_JUEGO_TABLAS_REPETICION;
		}

		// Verificar Insuficiencia de material para hacer mate
		ES_INSUFICIENTE_MATERIAL(es);
		if (es)
		{ 
			return STATUS_FIN_JUEGO_TABLAS_INSUFI_MATERIAL;
		}

		if (juego.reglaCincuentaMov > 99)
		{ 
			return STATUS_FIN_JUEGO_TABLAS_REGLA_50MOV;
		}
	}
//*/

	jaque = ES_ESTADO_JUEGO_JAQUE;

	if (!contarMovLegales())
	{
		if (jaque)
		{
			return juego.colorTurno ? STATUS_FIN_JUEGO_MATE_GANAN_B : STATUS_FIN_JUEGO_MATE_GANAN_N;
		} else {
			return STATUS_FIN_JUEGO_TABLAS;
		}

	} else {

		if (jaque)
		{
			return STATUS_FIN_JUEGO_JAQUE;
		} else {
			return STATUS_FIN_JUEGO_SIN_ESTATUS;
		}

	}

	return STATUS_FIN_JUEGO_SIN_ESTATUS;
}


void imprimirMovimiento(MOVIMIENTO mov)
{
	char c;

	if (ES_MOV_PROMOCION(mov))
	{
		switch (OBT_MOV_PROMOCION(mov)) 
		{

			case CABALLO_BLANCO: 	c = 'n'; break;
			case CABALLO_NEGRO:  	c = 'n'; break;
			case ALFIL_BLANCO:   	c = 'b'; break;
			case ALFIL_NEGRO:   	c = 'b'; break;
			case TORRE_BLANCO:	c = 'r'; break;
			case TORRE_NEGRO:	c = 'r'; break;
			default:		c = 'q'; break;
		}

		printf("%s%s%c",
				NOMBRE_ESCAQUES[OBT_MOV_ORIGEN( mov)],
				NOMBRE_ESCAQUES[OBT_MOV_DESTINO(mov)],
				c);
	} else {
		printf("%s%s",
				NOMBRE_ESCAQUES[OBT_MOV_ORIGEN( mov)],
				NOMBRE_ESCAQUES[OBT_MOV_DESTINO(mov)]);
	}
}

void mov2string(MOVIMIENTO mov, char stringMov[6])
{
	char c;
	bzero(stringMov,6);

	if (ES_MOV_PROMOCION(mov))
	{
		switch (OBT_MOV_PROMOCION(mov)) 
		{

			case CABALLO_BLANCO: 	c = 'n'; break;
			case CABALLO_NEGRO:  	c = 'n'; break;
			case ALFIL_BLANCO:   	c = 'b'; break;
			case ALFIL_NEGRO:   	c = 'b'; break;
			case TORRE_BLANCO:	c = 'r'; break;
			case TORRE_NEGRO:	c = 'r'; break;
			default:		c = 'q'; break;
		}

		sprintf(stringMov,"%s%s%c",
				NOMBRE_ESCAQUES[OBT_MOV_ORIGEN( mov)],
				NOMBRE_ESCAQUES[OBT_MOV_DESTINO(mov)],
				c);
	} else {
		sprintf(stringMov,"%s%s",
				NOMBRE_ESCAQUES[OBT_MOV_ORIGEN( mov)],
				NOMBRE_ESCAQUES[OBT_MOV_DESTINO(mov)]);
	}
}

void verReloj_y_Teclado()
{
	contadorDescendente = CONTADOR_DESCENDENTE_INTERVALO;
	BOOLEANO esVencido = FALSO;

	if (!ABORTABLE) return;

	if (tipoDeBusqueda == TIPO_BUSQUEDA_NORMAL)
	{
		esVencido = (obt_msTiempo() > juego.maxTiempo);

		if (esVencido) 
		{
			tiempoVencido = VERDADERO;
			return;

		} 
	}
}

int contarMovLegales()
{

	int movLegales=0;	
	int i=0;
	BOOLEANO esJaque;	

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
			movLegales++;
		}
	}

	return movLegales;

}



int obtTipoFinalJuego()
{
	BOOLEANO jaque = ES_ESTADO_JUEGO_JAQUE;

	if (!contarMovLegales())
	{
		if (jaque)
		{
			return FINAL_JUEGO_JAQUE_MATE;
		} else {
			return FINAL_JUEGO_AHOGADO;
		}

	} else {

		if (jaque)
		{
			return NO_ES_FINAL_JUEGO_HAY_JAQUE;
		} else {
			return NO_ES_FINAL_JUEGO;
		}

	}
}

#endif
