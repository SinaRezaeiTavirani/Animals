
#pragma once
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : Animal
{
public:
	Dog(const std::string& name);
	void makesound() const override;
	void printInfo() const override;
};

#endif // !DOG_H
