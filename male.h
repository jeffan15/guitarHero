#ifndef MALE_H
#define MALE_H
#include "player.h"

class Male : public Player
{
	public:
		virtual void genero();
		virtual int edad(int);
		virtual char nombre(char);
	protected:
		bool male;
		int age;
		char nom;
};

#endif
