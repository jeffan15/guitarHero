#include "male.h"
#include<iostream>
void Male::genero()
{
	male = 0;
}
int Male::edad(int age)
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
char Male::nombre(char nom)
{
	std::cin>>nom;
	std::cout<<"nom"<<std::endl;
}
