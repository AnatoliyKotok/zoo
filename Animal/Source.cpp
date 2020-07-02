#include<iostream>
#include "Dog.h"
#include"Animal.h"
#include<vector>
using namespace std;

int main() {
	Dog dog("Mike", 4);
	dog.show();
	Dog dog2("Jeck", 12);
	Zoo zoo;
	zoo.pushBack(&dog);
	zoo.pushBack(&dog2);
	zoo.clear();
	cout << endl;
	zoo.print();
}