#include <iostream>
#include <string>
#include "Liquid.h"
#include "Alcohol.h"

int main()
{
	Liquid water("Water", 997);
	water.Display();

	Alcohol gorilka("Gorilka", 914, "40%");
	gorilka.Display();
}