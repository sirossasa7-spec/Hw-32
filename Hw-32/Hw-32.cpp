#include <iostream>

#include <vector>

#include "Lion.h"
#include "Wolf.h"
#include "Dog.h"

#include "Chicken.h"
#include "Duck.h"
#include "Eagle.h"

using namespace std;

int main() {

    vector<Animals::Animal*> animals;

    animals.push_back(new Animals::Wild::Lion());
    animals.push_back(new Animals::Wild::Wolf());
    animals.push_back(new Animals::Wild::Dog());

    animals.push_back(new Birds::Domestic::Chicken());
    animals.push_back(new Birds::Domestic::Duck());
    animals.push_back(new Birds::Domestic::Eagle());

    for (auto animal : animals) {
        animal->makeSound();
    }

    for (auto animal : animals) {
        delete animal;
    }

    return 0;
}
