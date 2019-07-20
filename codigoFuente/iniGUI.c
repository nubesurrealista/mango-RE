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

#ifndef INIGUI_C
#define INIGUI_C
void iniNombresPC()
{
	strcpy(nombresRivales[0]," ");
	strcpy(nombresRivales[1],"Paul Morphy");
	strcpy(nombresRivales[2],"Paola Morales");
	strcpy(nombresRivales[3],"Emanuel Lasker");
	strcpy(nombresRivales[4],"Alexander Alekhine");
	strcpy(nombresRivales[5],"Luisa Caceres de Arismendi");
	strcpy(nombresRivales[6],"Túpac Catari");
	strcpy(nombresRivales[7],"Viswanathan Anand");
	strcpy(nombresRivales[8],"Daniel Francisco O´Leary");
	strcpy(nombresRivales[9],"Atahualpa Yupanqui Capac");
	strcpy(nombresRivales[10],"Mikhail Botvinnik");
	strcpy(nombresRivales[11],"Zsuzsa Polgar");
	strcpy(nombresRivales[12],"Ezequiel Zamora");
	strcpy(nombresRivales[13],"Túpac Amaru");
	strcpy(nombresRivales[14],"Aleksandra Kosteniuk");
	strcpy(nombresRivales[15],"Cacique Tiuna");
	strcpy(nombresRivales[16],"Antonio Jose de Sucre");
	strcpy(nombresRivales[17],"Anatoly Karpov");
	strcpy(nombresRivales[18],"Cacique Guaicaipuro");
	strcpy(nombresRivales[19],"Francisco de Miranda");
	strcpy(nombresRivales[20],"Vera Menchik-Stevenson");
	strcpy(nombresRivales[21],"Cacique Catia");
	strcpy(nombresRivales[22],"Wilhelm Steinitz");
	strcpy(nombresRivales[23],"Xu Yuhua");
	strcpy(nombresRivales[24],"Ernesto Che Guevara");
	strcpy(nombresRivales[25],"Judit Polgar");
	strcpy(nombresRivales[26],"Rafael Urdaneta");
	strcpy(nombresRivales[27],"Bobby Fischer");
	strcpy(nombresRivales[28],"Gari Kaspárov");
	strcpy(nombresRivales[29],"Raul Capablanca");
	strcpy(nombresRivales[30],"Simón Bolívar");
	strcpy(nombresRivales[31],"Dios");
}

void iniTips()
{

	memset(listaTips,0,sizeof(TIPS)*100);
	memset(LISTA_TIPS_OCURRENCIAS,0,sizeof(int)*100);

	strcpy(listaTips[0],"\n\n El comienzo del juego debe ser considerado como una \"carrera\" con dos objetivos:\n - Controlar la mayor cantidad de tablero posible\n - Poner en juego la mayoría de las piezas de ataque\n\n");

	strcpy(listaTips[1],"\n\n A menos que sepas realmente lo que estás haciendo y por qué,\n lo que deberías hacer es abrir el juego (primer movimiento)\n con uno de los peones centrales.\n\n");

	strcpy(listaTips[2],"\n\n El sitio ideal para los Caballos es el centro del tablero.\n Sitúalos allí en cuanto te sea posible.\n\n");

	strcpy(listaTips[3],"\n\n Evita mover la misma pieza dos veces durante el comienzo.\n Recuerda que es una \"carrera\". Ahorra movimientos.\n\n");

	strcpy(listaTips[4],"\n\n Tratar en la medida de lo posible de NO atacar\n con tu Reina al principio del juego\n\n");

	strcpy(listaTips[5],"\n\n Después de desplegar los Alfiles y los Caballos\n al inicio del juego deberías enrocarte\n\n");

	strcpy(listaTips[6],"\n\n Evita mover el Rey antes de enrocarte\n puesto que no podrás hacerlo si ya has movido al Rey\n\n");

	strcpy(listaTips[7],"\n\n Evita tener dos Peones en la misma columna\n (situación común si capturas una pieza con tu Peon).\n\n");
	strcpy(listaTips[8],"\n\n Si una columna no tiene pieza alguna (ni tuya ni de tu oponente)\n trata de poner una de tus Torres en ella\n\n");

	strcpy(listaTips[9],"\n\n El escaque f2 (o el f7 para las negras)\n es, al principio del juego, un punto débil.\n Préstale especial atención.\n\n");

	strcpy(listaTips[10],"\n\n A menudo es buena idea colocar los Peones\n de una manera que se protejan unos a otros formando diagonales.\n\n");

	strcpy(listaTips[11],"\n\n Nunca muevas esperando que tu oponente juegue mal\n\n");

	strcpy(listaTips[12],"\n\n Encontrar un Peon enemigo desprotegido al final de una cadena\n y Capturarlo (probablemente con un caballo) puede ser una buena idea.\n\n");

	strcpy(listaTips[13],"\n\n Siempre trata de dominar los escaques centrales\n\n");

	strcpy(listaTips[14],"\n\n Nunca cuentes el material fuera del tablero,\n sino sólo las piezas  que quedan dentro de él.\n\n");

	strcpy(listaTips[15],"\n\n Cuando tengas un peón aislado,\n trata de jugar agresivamente en el medio juego,\n ya que en caso de llegar al final, estarás en desventaja\n\n");

	strcpy(listaTips[16],"\n\n Nunca juegues para hacer tablas o para ganar,\n simplemente limítate ha hacer cada vez la mejor jugada que requiera la posición.\n\n");

	strcpy(listaTips[17],"\n\n Es más importante no cometer errores\n que hacer maravillosas jugadas.\n\n");

	strcpy(listaTips[18],"\n\n Sólo empiezas a saber jugar un poco al ajedrez\n cuando sabes lo que te falta por aprender.\n\n");

	strcpy(listaTips[19],"\n\n Todas las piezas de tu adversario son importantes;\n para evitar sorpresas,\n no te concentres en una única parte del tablero.\n\n");

	strcpy(listaTips[20],"\n\n Es más importante no cometer errores\n que hacer maravillosas jugadas.\n\n");

	strcpy(listaTips[21],"\n\n El secreto para ser un buen jugador táctico,\n además de las condiciones innatas de cada persona, es practicar mucho,\n solucionar cada día problemas y mirar partidas brillantes\n de los Grandes Maestros de la historia del ajedrez.\n\n");

	strcpy(listaTips[22],"\n\n Si tienes ventaja de material,\n trata de cambiar piezas, no peones.\n\n");

	strcpy(listaTips[23],"\n\n Cuando tengas desventaja de material,\n trata de cambiar peones.\n\n");

	strcpy(listaTips[24],"\n\n Para aprender a jugar bien,\n acepta los desafíos que te plantee la partida.\n\n");

	strcpy(listaTips[25],"\n\n No abras o permitas que tu contrincante\n abra las columnas centrales\n si tu rey está sin enrocar.\n\n");

	strcpy(listaTips[26],"\n\n Para mejorar tu ajedrez el principal\n consejo es que practiques.\n\n");

	strcpy(listaTips[27],"\n\n No se trata de hacer siempre la  mejor jugada,\n sino cualquiera que nos proporcione ventajas\n siguiendo un  plan lógico.\n\n");

	strcpy(listaTips[28],"\n\n No olvides que el ajedrez es un juego y sirve para disfrutar;\n si te acarrea problemas, deja de practicarlo o cambia de mentalidad.\n\n");

	strcpy(listaTips[29],"\n\n Cuando la situación es ventajosa\n no debemos precipitarnos por ganar rápido la partida.\n\n");

	strcpy(listaTips[30],"\n\n Cuando nuestro contrincante tiene ataque,\n se debe intentar cambiar las piezas,\n en particular, las damas..\n\n");

	strcpy(listaTips[31],"\n\n En ajedrez debemos intentar tener un objetivo lo más claro posible;\n si estamos  cambiando continuamente de plan,\n no obtendremos buenos resultados..\n\n");

	strcpy(listaTips[32],"\n\n No es conveniente que una pieza\n defienda más de un punto,\n ya que se puede producir una sobrecarga que dé origen a temas tácticos.\n\n");

	strcpy(listaTips[33],"\n\n Los puntos más importantes de una columna dominada\n son la séptima y octava fila.\n\n");

	strcpy(listaTips[34],"\n\n Ante una columna abierta debemos proceder a ocuparla\n con nuestras torres y si es posible a doblarlas en esa columna\n\n");

	strcpy(listaTips[35],"\n\n Nunca debe cambiarse\n una pieza activa por una pasiva.\n\n");

	strcpy(listaTips[36],"\n\n Cuando el rey contrario pierde el enroque,\n hay que intentar atraerlo hacia el centro aunque sea a base de sacrificios..\n\n");

	strcpy(listaTips[37],"\n\n El enroque largo suele presentar\n más debilidades que el corto.\n\n");

	strcpy(listaTips[38],"\n\n Hay que desconfiar siempre\n de los “regalos” de nuestro adversario.\n\n");

	strcpy(listaTips[39],"\n\n Las piezas más potentes en el centro del tablero son los caballos y la dama.\n\n");

	strcpy(listaTips[40],"\n\n Evita mover una misma pieza\n varias veces en la apertura.\n\n");
	strcpy(listaTips[41],"\n\n Buscar el dominio de las casillas centrales \n del tablero es un objetivo básico en la apertura.\n\n");
	strcpy(listaTips[42],"\n\n En la apertura la seguridad del rey\n debe ser el primer objetivo.\n\n");
	strcpy(listaTips[43],"\n\n Si tu oponente no toma el centro,\n tómalo tú.\n\n");
	strcpy(listaTips[44],"\n\n No des pistas a tus adversarios\n con tus gestos o expresiones faciales sobre la posición del tablero.\n\n");
	strcpy(listaTips[45],"\n\n El ajedrez es un juego de paciencia y lógica,\n trata de cultivar estas virtudes.\n\n");
	strcpy(listaTips[46],"\n\n La prepotencia  es una mala consejera.\n\n");
	strcpy(listaTips[47],"\n\n El exceso de relajación no es bueno en ajedrez,\n ya que es un juego de  lucha y esfuerzo continuo.\n\n");
	strcpy(listaTips[48],"\n\n La paciencia es la mejor consejera en los finales,\n nunca te precipites.\n\n");
	strcpy(listaTips[49],"\n\n La creación de peones pasados es la clave para ganar\n la mayoría de finales.\n\n");
	strcpy(listaTips[50],"\n\n Las torres se deben colocar\n detrás de nuestros peones pasados.\n\n");
	strcpy(listaTips[51],"\n\n Los peones pasados son más fuertes\n si además están ligados.\n\n");
	strcpy(listaTips[52],"\n\n Trata de cortar el paso del rey contrario\n con tus torres o tu dama.\n\n");
	strcpy(listaTips[53],"\n\n Los finales de torres y los finales de peones\n son la esencia de los finales de partida.\n\n");
	strcpy(listaTips[54],"\n\n Las torres en los finales\n hay que mantenerlas lo más activas posibles,\n ya que son buenas atacando pero malas defendiendo.\n\n");
	strcpy(listaTips[55],"\n\n Si los reyes están uno frente al otro\n y el número de casillas entre ellos es par,\n el que juega primero, ganará  la oposición.\n\n");
	strcpy(listaTips[56],"\n\n Recuerda que nunca se ganó una partida rindiéndose,\n apura tus posibilidades hasta el último suspiro.\n\n");
	strcpy(listaTips[57],"\n\n No tengas miedo a perder,\n si te ofrecen  tablas en una posición favorable, no las aceptes.\n\n");
	strcpy(listaTips[58],"\n\n Si cometes un error,  no te hundas,\n tu contrincante también puede equivocarse.\n\n");
	strcpy(listaTips[59],"\n\n Si estás perdido, vende cara tu derrota,\n sigue jugando las jugadas que más problemas puedan dar a tu adversario.\n\n");
	strcpy(listaTips[60],"\n\n Si te has distraído por el motivo que sea,\n no hagas tu jugada hasta que no vuelvas a recuperar la concentración.\n\n");
	strcpy(listaTips[61],"\n\n Intenta jugar las partidas en la mejor forma posible,\n no comas en exceso antes de jugar,\n ni tampoco juegues con el estómago vacío.\n\n");
	strcpy(listaTips[62],"\n\n Cuidado al mover los peones,\n son las únicas piezas que no pueden retroceder.\n\n");
	strcpy(listaTips[63],"\n\n Cualquier movimiento de peones\n por delante del enroque es una debilidad.\n\n");
	strcpy(listaTips[64],"\n\n La mayoría de peones en un flanco,\n en especial el de dama, es una ventaja en el final.\n\n");
	strcpy(listaTips[65],"\n\n Los peones aislados,\n retrasados o doblados,\n son debilidades.\n\n");
	strcpy(listaTips[66],"\n\n Cada peón es potencialmente una dama\n\n");
	strcpy(listaTips[67],"\n\n Los peones aislados,\n retrasados o doblados,\n son debilidades.\n\n");
	strcpy(listaTips[68],"\n\n Dos peones ligados en la sexta fila\n suelen ser más fuertes que una torre.\n\n");
	strcpy(listaTips[69],"\n\n Los peones pasados es necesario bloquearlos\n con  nuestras piezas de tal forma que no puedan avanzar.\n\n");
	strcpy(listaTips[70],"\n\n Cuando juegues contra jugadores más \"fuertes\" que tú\n intenta complicar la posición,\n no de simplificarla\n ellos también pueden equivocarse.\n\n");
	strcpy(listaTips[71],"\n\n En general, los peones centrales\n son más importantes que los laterales.\n\n");
	strcpy(listaTips[72],"\n\n Los peones doblados\n además de ser débiles, a veces entorpecen el movimiento de nuestras piezas.\n\n");
	strcpy(listaTips[73],"\n\n Es mejor tener mayoría de peones en el flanco\n donde no están los reyes,\n ya que en un final de peones estarán alejados del rey contrario.\n\n");
	strcpy(listaTips[74],"\n\n Un peón retrasado es una debilidad en un final\n en especial si su avance está bloqueado por una pieza enemiga.\n\n");
	strcpy(listaTips[75],"\n\n Los caballos son más potentes\n que los alfiles\n en posiciones cerradas o estáticas.\n\n");
	strcpy(listaTips[76],"\n\n Los caballos son piezas de corto alcance,\n evita colocarlos en los extremos del tablero.\n\n");
	strcpy(listaTips[77],"\n\n Los caballos coordinan mejor\n con la dama que los alfiles.\n\n");
	strcpy(listaTips[78],"\n\n El caballo es la mejor pieza para bloquear\n el avance de un peón.\n\n");
	strcpy(listaTips[79],"\n\n Un caballo que defiende a otro\n suele ser una sobrecarga para cada uno de los dos.\n\n");
	strcpy(listaTips[79],"\n\n Los alfiles juegan mejor en posiciones abiertas.\n\n");
	strcpy(listaTips[81],"\n\n Coloca los alfiles\n fuera de las cadenas de tus propios peones.\n\n");
	strcpy(listaTips[82],"\n\n Intenta cambiar tu alfil \"malo\"\n de cara al final.\n\n");
	strcpy(listaTips[83],"\n\n La pareja de alfiles en posiciones abiertas\n es una notable ventaja.\n\n");
	strcpy(listaTips[84],"\n\n Coloca tus peones en diferente color\n de las casillas dominadas por tu alfil.\n\n");
	strcpy(listaTips[85],"\n\n No se debe cambiar un alfil\n por un caballo\n a no ser que obtengamos un claro beneficio en el cambio.\n\n");
	strcpy(listaTips[86],"\n\n Los alfiles pueden ser encerrados\n por peones, debemos tener mucho cuidado.\n\n");
	strcpy(listaTips[87],"\n\n Las torres necesitan de columnas abiertas\n para maximizar su eficacia.\n\n");
	strcpy(listaTips[88],"\n\n Conseguir colocar una torre en la séptima fila\n suele ser una gran ventaja.\n\n");
	strcpy(listaTips[89],"\n\n Dos torres ligadas en la séptima u octava fila\n suelen proporcionar un efecto devastador en el campo contrario.\n\n");
	strcpy(listaTips[90],"\n\n Contraatacar en el centro\n suele ser una buena estrategia\n ante un ataque de flanco.\n\n");
	strcpy(listaTips[91],"\n\n Las torres son piezas de movimientos lentos,\n por este motivo su mayor eficacia está al final de la partida,\n cuando hay espacios abiertos.\n\n");
	strcpy(listaTips[92],"\n\n Trata de centralizar tu dama,\n ya que desde ese puesto es más fuerte.\n\n");
	strcpy(listaTips[93],"\n\n Al iniciar la partida suele ser bueno hacer una jugada\n de dama para completar el desarrollo y comunicar las torres,\n pero suele ser malo moverla varias veces\n en la apertura.\n\n");
	strcpy(listaTips[94],"\n\n Cuidado con los peones\n que puede comerse la dama en la apertura.\n\n");
	strcpy(listaTips[95],"\n\n La dama es la pieza más cualificada\n para realizar amenazas dobles\n a puntos distantes del tablero.\n\n");
	strcpy(listaTips[96],"\n\n Dos caballos y un alfil\n equivalen aproximadamente\n al valor de una dama, pero dos alfiles y un caballo\n pueden ser incluso superiores a la dama.\n\n");
	strcpy(listaTips[97],"\n\n El rey es una pieza poderosa,\n utilízala.\n\n");
	strcpy(listaTips[98],"\n\n Una torre y un peón\n sólo son superiores a un alfil y un caballo\n en el final de una partida,\n pero no en el medio juego.\n\n");
	strcpy(listaTips[99],"\n\n Un alfil puede luchar normalmente con éxito\n contra tres peones,\n si estos no se encuentran muy avanzados.\n\n");

}

#endif
