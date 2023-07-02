#include "Animal.h"


Animal::Animal(const std::string& name) : name(name) {}

void Animal::makeSound() const
{
}


void Animal::printInfo() const {
	std::cout << "name: " << name << std::endl;
}