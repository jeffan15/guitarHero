#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "tablero.h"
#include "cuerda.h"
#include "nota.h"
#include "cancion.h"
#include "juego.h"
cancion operator+(const cancion o,const cancion m){
	cancion tmp;
	tmp.size = o.size+m.size;
	tmp.song = new nota[tmp.size];
	
	for(int i=0;i<o.size;i++){
		tmp.song[i] = o.song[i];
	}
	int l = 0;
	for(int j=o.size-1;j<o.size;j++){
		tmp.song[j] = o.song[l];
		l++;
	}
	
	
}
int main()
{
   Juego partida1;
   partida1 = Juego(800,600,"GUITAR HERO");
	
    
    return EXIT_SUCCESS;
}
