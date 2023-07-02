
#pragma once
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(const std::string& name);
	void makeSound() const override;
	void printInfo() const override;
};

#endif // !DOG_H
