#include "base.hpp"
#include <string>
#include "op.hpp"

class mult : public op
{

private:
		Base* left;
    Base* right;
    
public:

  mult(Base* l1, Base* r1) {
    left = l1;
    right = r1;
  }

  double evaluate() {
    double product = 1;
    product *= left->evaluate();
    product *= right->evaluate();

    return product;

  }

  string stringify() {
    string value = left->stringify() + " * " + right->stringify();

  }
};
