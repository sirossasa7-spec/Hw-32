#pragma once
#include <iostream>

namespace Animals {

    class Animal {
    public:
        virtual void makeSound() = 0;

        virtual ~Animal() {}
    };

}