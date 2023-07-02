#include "Cat.h"


Cat::Cat(const std::string& name) :Animal(name)
{}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!"<<std::endl;
}

void Cat::printInfo() const
{
	std::cout << "Cat ";
	 Animal::printInfo();
}
