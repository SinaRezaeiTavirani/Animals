#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
int main() {
	Dog dog("buddy");
	dog.printInfo();
	dog.makesound();
	Cat cat("Alice");
	cat.printInfo();
	cat.makesound();
}