#include "base.hpp"
#include "op.hpp"
#include <string>

using namespace std;

class add : public Base {				
        public:

                add(Base l1, Base r1) {
                        left = l1;
                        right = r1;
                }
                
                double evaluate() {
                 return double sum = left->evaluate() + right->evaluate();
                }

                std::string stringify() {
                return std::string value = stringify() + " + " + stringify();
                 

                }
                
					private:
								Base* left;
								Base* right;
								
};
