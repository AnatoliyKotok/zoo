#include "Animal.h"

void Animal::SetName(string& name)
{
	this->name = name;
}

void Animal::SetAge(size_t& age)
{
	this->age = age;
}

const string& Animal::getName()
{
	return name;
}

size_t Animal::getAge()
{
	return age;
}


