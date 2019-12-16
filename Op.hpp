//op class
#include "base.hpp"
#include <string>
#include <sstream>

class Op : public Base
{
        public:
        Op() { };
        Op(double op1) {operand = op1;}

        double evaluate() {return operand;}

        std::string stringify() {
        std::string value = std::to_string(operand);
        return value;
        }
        private:
        double operand;
};
