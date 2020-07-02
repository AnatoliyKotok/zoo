#include "Dog.h"
#include<iostream>
using namespace std;
Dog::Dog(string name, size_t age):Animal(name,age)
{

}

void Dog::sound() const
{
	cout << "Gow gow";
}

void Dog::type() const
{
	cout << "Mammals";
}

void Dog::show() const
{
	Animal::show();
	
}

void Cat::sound() const
{
	cout << "Mrrr";
}

void Cat::type() const
{
	cout << "mammeals";
}

void Cat::show() const
{
	Animal::show();
}

void Zoo::pushBack(Animal* animal)
{
	zoo.push_back(animal);
}

void Zoo::print() const
{
	for (size_t i = 0; i < zoo.size(); i++)
	{
		zoo[i]->show();
	}
}

void Zoo::clear()
{
	zoo.clear();
}


