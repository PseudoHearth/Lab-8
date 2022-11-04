#pragma once
#include <iostream>
#include <string>

class Liquid
{
	int density;
protected:
	std::string name;
public:
	Liquid();
	Liquid(std::string n, int d);

	virtual void Display();

};