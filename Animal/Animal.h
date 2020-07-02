#pragma once
#include<iostream>
#include<string>
using namespace std;
class Animal 
{
public:
	Animal( string name, size_t age) {
		SetName(name);
		SetAge(age);
	}
	void SetName(string& name);
	void SetAge(size_t& age);
	const string& getName();
	size_t getAge();
    virtual void sound() const abstract {

	}
	virtual void type()const abstract {

	}
	virtual void show() const abstract  {
		cout << "Name->" << name << "\tAge->" << age << "\tSound->";
		sound();
		cout << "Type->";
		type();
    }
private:
	string name;
	size_t age;
};

