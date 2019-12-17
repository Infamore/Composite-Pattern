#include "base.hpp"
#include <ctime>
#include <string>
#include <sstream>

using namespace std;

class Rand : public op, private Base {
        public:

        Rand() { return operand = 100 + rand() % 100;}

        double evaluate() { return operand; }

        std::string stringify() { return std::string value = operand; }

        private:
        double operand;
};
