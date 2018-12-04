#include "player.h"
#include<iostream>
void Player::genero()
{
	Male=0;
	Female=0;
}
int Player::edad(int y)
{
	if(5<y<100)
	{
		std::cout<<"y"<<std::endl;
	}
	else
	{
		std::cout<<"edad invalida"<<std::endl;
	}
}
char Player::nombre(char x)
{
	std::cout<<"x"<<std::endl;
}
