#ifndef PIEZA_H
#define PIEZA_H
#include <string>

using namespace std;

class Pieza
{

	private:
		int posx;
		int posy;
		string color;


	public:
		Pieza();
		Pieza(int, int, string);
		~Pieza();
		int getPosX();
		int getPosY();
		virtual string getColor();
		void setPosX(int);
		void setPosY(int);
		virtual void setColor(string);
};

#endif