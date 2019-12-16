#include <iostream>
#include <string>

class Base {
    public:
        Base() { };

        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;
};
