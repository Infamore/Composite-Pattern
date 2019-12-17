#include "base.hpp"
#include <string>
#include "op.hpp"

using namespace std;

class Div : public op, private Base
{

	private:
  Base* left;
  Base* right;
  
  public:
	Div(Base l1, Base r1) : Base(l1, r1) {
	left = l1;
        right = r1;
  }
  
  double evaluate() { return double quotient = left->evaluate() / right->evaluate(); }
  
  std::string stringify() { return std::string value = left->stringify() + " / " + right->stringify(); }
};
