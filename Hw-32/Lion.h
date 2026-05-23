#pragma once
#include "Animal.h"

namespace Animals {
    namespace Wild {

        class Lion : public Animal {
        public:
            void makeSound() override {
                std::cout << "Лев: Рррр!" << std::endl;
            }
        };

    }
}