#include "juego.h"
#include "cuerda.h"
#include "tablero.h"
Juego::Juego()
{
}
Juego::Juego(int resolucion_x,int resolucion_y,std::string titulo)
{
	fps =60;
	ventana = new sf::RenderWindow(sf::VideoMode(resolucion_x,resolucion_y),titulo);
	ventana->setFramerateLimit(fps);
	gameloop();
}
void Juego::gameloop()
{
	while(ventana->isOpen()){
		dibujar();
		sf::Event event;
        while (ventana->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ventana->close();
        }
	}
}
void Juego::dibujar()
{
	ventana->clear();
	tablero tab;
	ventana->display();
}
Juego::~Juego()
{
}
