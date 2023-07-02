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
	virtual void makesound() const;
	virtual void printInfo() const;
};


#endif 