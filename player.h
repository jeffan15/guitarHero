#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	public:
		virtual void genero()=0;
		virtual int edad(int)=0;
		virtual char nombre(char)=0;
	protected:
		char x;
		int y;
		char Male;
		char Female;
};

#endif
