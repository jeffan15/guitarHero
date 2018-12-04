#ifndef MENU_H
#define MENU_H
#include <cstdlib>
class Menu
{	public:
		bool empezarJuego;
		char namePlayer[];
		int sizeName;
		Menu();
		void obtenerSizeName(int);
		template<typename T>
		void agregarCaracter(T newChar,int i){namePlayer[i](newChar);}
		~Menu();
	protected:
};
#endif
