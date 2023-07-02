#include "Dog.h"


Dog::Dog(const std::string& name) :Animal(name) {}
void Dog::makeSound() const{
	std::cout << "Woof! Woof!" << std::endl;
}
void Dog::printInfo() const {
	std::cout << "Dog ";
	Animal::printInfo();
}