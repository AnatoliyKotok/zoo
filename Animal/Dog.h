#pragma once
#include "Animal.h"
#include<vector>
class Dog :
	public Animal
{
public:
	Dog(string name = "noname", size_t age = 12);
	void sound() const override;
	void type() const override;
	void show() const override;
};

class Cat :public Animal {
public:
	Cat(string name = "noname", size_t age = 12) :Animal(name, age) {

	}
	void sound() const override;
	void type() const override;
	void show() const override;
};
class Zoo {
public:
	Zoo() = default;
	void pushBack(Animal*);
	void print() const;
	void clear();
private:
	vector<Animal*> zoo;
	
};