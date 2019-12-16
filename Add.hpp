#include "base.hpp"
#include "op.hpp"
#include <string>

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
                        string value = left->stringify() + " + " + right->stringify();
                return value;

                }
                
					private:
								Base* left;
								Base* right;
								
};

