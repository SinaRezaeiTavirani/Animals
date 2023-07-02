#include "animal.h"
#include "dog.h"
#include "cat.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Animal*> animals;
    animals.push_back(new Dog("Buddy"));
    animals.push_back(new Cat("Alice"));

    for (const auto& animal : animals) {
        animal->printInfo();
        animal->makeSound();
        std::cout << std::endl;
    }

    // Clean up dynamically allocated memory
    for (const auto& animal : animals) {
        delete animal;
    }
    animals.clear();

    return 0;
}
