#pragma once
#include "Animal.h"

namespace Animals {
    namespace Wild {

        class Dog : public Animal {
        public:
            void makeSound() override {
                std::cout << "Собака: Гав-гав!" << std::endl;
            }
        };

    }
}