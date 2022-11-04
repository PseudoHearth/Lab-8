#include "Liquid.h"

Liquid::Liquid()
{
	name = "";
	density = 1;
}

Liquid::Liquid(std::string n, int d)
{
	name = n;
	density = d;
}

void Liquid::Display()
{
	std::cout << "Name:" << name << "\Density" << density << std::endl;
}
