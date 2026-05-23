#pragma once
#include "Animal.h"

namespace Birds {

    class Bird : public Animals::Animal {
    public:
        virtual void makeSound() = 0;
    };

}