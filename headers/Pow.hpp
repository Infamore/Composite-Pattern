#include "base.hpp"
#include "op.hpp"
#include <string>

class Pow : public op, private Base
{
	private:
  Base* left;
  Base* right;
  
  public:
  Pow(Base l1, Base r1) : Base(l1, r1) { left = l1; right = r1; }
  
  double evaluate() {
  	double product = 1;
      for (int i = 0; i < right->evaluate(); i++)
      	double product *= left->evaluate();
      return product;
  }

	std::string stringify() { std::string value = left->stringify() + " ** " + right ->stringify(); }
};
