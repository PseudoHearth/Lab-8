#include "Alcohol.h"

Alcohol::Alcohol() :Liquid()
{
	strenght = "";
}

Alcohol::Alcohol(std::string n, int d, std::string s) :Liquid(n, d)
{
	strenght = s;
}

void Alcohol::Display()
{
	Liquid::Display();
	std::cout << "Strenght: " << strenght << std::endl;
}
