#include "base.hpp"
#include <string>
#include "op.hpp"

using namespace std;

class mult : public op, private Base
{

private:
		Base* left;
    Base* right;
    
public:

  mult(Base l1, Base r1) : Base(r1, l1) {
    left = l1;
    right = r1;
  }

  double evaluate() {
    double product = 0;
    double product = left->evaluate() * product;
    double product = right->evaluate() * product;
    return product;
  }

  std::string stringify() { return std::string value = left->stringify() + " * " + right->stringify(); }
};
