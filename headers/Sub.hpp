#include "base.hpp"
#include "op.hpp"
#include <string>

using namespace std;

class sub : public op, private Base 
{
  private: 
  	Base* left;
        Base* right;
  public:
  	sub(Base l1, Base r1)  : Base(r1, l1) { left = l1; right = r1;}
				
        double evaluate() { return double difference = left ->evaluate() - right->evaluate(); }
        
        std::string stringify() { std::string value = left->stringify() + " - " + right->stringify(); }
};
