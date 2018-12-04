#ifndef FEMALE_H
#define FEMALE_H
#include "player.h"

class female : public Player
{
	public:
		virtual void genero();
		virtual int edad(int);
		virtual char nombre(char);
	protected:
		bool female;
		int age;
		char nom;
};

#endif
