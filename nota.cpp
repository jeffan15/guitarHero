#include "nota.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
nota::nota()
{
}
nota::nota(std::string color)
{
	if (color=="verde")
	{
		imagen.loadFromFile("imagenes/3.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(0,255,0));
		x = 20.0;
	}
	if (color=="rojo")
	{
		imagen.loadFromFile("imagenes/1.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(255,0,0));
		x = 80.0;
	}
	if (color=="amarillo")
	{
		imagen.loadFromFile("imagenes/4.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(255,255,0));
		x = 140.0;
	}
	if (color=="azul")
	{
		imagen.loadFromFile("imagenes/2.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(0,0,255));
		x = 200.0;
	}
	if (color=="naranja")
	{
		imagen.loadFromFile("imagenes/5.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(0,255,255));
		x = 260.0;
	}
	y = 0;	
	
}
void nota :: movimiento(){
	y+=5;
}
nota::~nota()
{
}
