#include "base.hpp"
#include "op.hpp"
#include <string>

class sub : public Base 
{
	private: 
  			Base* left;
        Base* right;
  public:
  			sub(Base* l1, Base* r1) {
        	left = l1;
          right = r1;
        }
				
        double evaluate() {
        	double difference = left ->evaluate() - right->evaluate();
          return difference;
        }
        
        string stringify() {
        	string value = left->stringify() + " - " + right->stringify();
        
        	return value;
        }
};
