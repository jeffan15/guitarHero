#include "female.h"
#include<iostream>
void female::genero()
{
	Female=0;
}
int female::edad(int age)
{
	std::cin>>age;
	if(5<age<100)
	{
		std::cout<<"age"<<std::endl;
	}
	else
	{
		std::cout<<"edad invalida"<<std::endl;
	}
}
char female::nombre(char nom)
{
	std::cin>>nom;
	std::cout<<"nom"<<std::endl;
}
