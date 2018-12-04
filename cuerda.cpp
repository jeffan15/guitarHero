#include "cuerda.h"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
cuerda::cuerda()
{
}
cuerda::cuerda(int color,float posx,float posy){
	if (color == 1){
		imagen.loadFromFile("imagenes/3.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(0,255,0));
	}
	if (color == 2){
		imagen.loadFromFile("imagenes/1.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(255,0,0));
	}
	if (color == 3){
		imagen.loadFromFile("imagenes/4.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(255,255,0));
	}
	if (color == 4){
		imagen.loadFromFile("imagenes/2.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(0,0,255));
	}
	if (color == 5){
		imagen.loadFromFile("imagenes/5.png");
		sprite.setTexture(imagen);
		sprite.setTextureRect(sf::IntRect(0,0,64,64));
		sprite.setColor(sf::Color(0,255,255));
	}
	sprite.setPosition(posx,posy);
}
cuerda::~cuerda()
{
}
