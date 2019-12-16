#include "base.hpp"
#include "op.hpp"
#include <string>

using namespace std;

class add : public Base {				
        public:

                add(Base* l1, Base* r1) {
                        left = l1;
                        right = r1;
                }
                
                double evaluate() {
                         double sum = left->evaluate() + right->evaluate();
                        return sum;
                }

                string stringify() {
                        string value = std::to_string(left->evaluate()) + " + " + std::to_string(right->stringify());
                return value;

                }
                
					private:
								Base* left;
								Base* right;
								
};
