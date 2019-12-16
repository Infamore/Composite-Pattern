#include "base.hpp"
#include <string>
#include "op.hpp"

class Div : public op
{

	private:
  Base* left;
  Base* right;
  
  public:
	Div(Base* l1, Base* r1) {
  		left = l1;
      right = r1;
  }
  
  double evaluate() {
  	double quotient = left->evaluate() / right->evaluate();
    return quotient;
  }
  
  string stringify() {
  	string value = left->stringify() + " / " + right->stringify();
    return value;
  }
};
