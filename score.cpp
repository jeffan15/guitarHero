#include "score.h"

Score::Score()
{
	puntuacion = 0;
}
int Score::aumentarPuntuacion(){
	puntuacion++;
	return puntuacion;	
}
int Score::disminuirPuntuacion(){
	puntuacion--;
	return puntuacion;
}
Score::~Score()
{
}
