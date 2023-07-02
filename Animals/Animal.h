
#pragma once
#ifndef ANIMAL_H 
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string name;
public:
	Animal(const std::string& name);
	virtual void makeSound() const = 0 ;
	virtual void printInfo() const;
};


#endif 