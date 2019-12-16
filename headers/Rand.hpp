#include "base.hpp"
#include <ctime>
#include <string>
#include <sstream>
/*
string tostring(const double a_value, const int n = 0)
{
        std::ostringstream out;
        out.precision(n);
        out << std::fixed << a_value;
        return out.str();
}
*/

class Rand : public Base {
        public:

        Rand() {operand = rand() % 100;}

        double evaluate() {return operand;}

        std::string stringify() {
        std::string value = std::to_string(operand);
        return value;
        }

        private:
        double operand;
};
