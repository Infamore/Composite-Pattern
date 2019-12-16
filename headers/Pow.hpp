#include "base.hpp"
#include "op.hpp"
#include <string>

class Pow : public op
{
	private:
  Base* left;
  Base* right;
  
  public:
  Pow(Base* l1, Base* r1) {
  left = l1;
  right = r1;
  }
  
  double evaluate() {
  		double product = 1;
      for (int i = 0; i < right->evaluate(); i++)
      	product *= left->evaluate();
      return product;
  }

	string stringify() {

  	string value = left->stringify() + " ** " + right ->stringify();

  	return value;
	}
};
