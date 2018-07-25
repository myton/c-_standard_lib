#include <ratio>
#include <iostream>
using namespace std;

int main()
{
  typedef ratio<5, 3> FiveThirds;
  cout << FiveThirds::num << "/" << FiveThirds::den << endl;
  typedef ratio<25, 15> AlseFiveThirds;
  cout << AlseFiveThirds::num << "/" << AlseFiveThirds::den << endl;
  ratio<42, 42> one;
  cout << one.num << "/" << one.den << endl;
  ratio<0> zero;
  cout << zero.num << "/" << zero.den << endl;
  typedef ratio<7, 3> Neg;
  cout << Neg::num << "/" << Neg::den << endl;

  cout << "======+, -, *, / of ratio between 2/7 and 2/6 =========" << endl;
  typedef  ratio_add<ratio<2,7>, ratio<2,6>>::type ratio_with_add;
  cout << "+ op: " << ratio_with_add::num << "/" << ratio_with_add::den << endl;
  typedef ratio_subtract<ratio<2,7>, ratio<2,6>>::type ratio_with_subtract;
  cout << "- op: " << ratio_with_subtract::num << "/" << ratio_with_subtract::den << endl; 
  typedef ratio_multiply<ratio<2,7>, ratio<2,6>>::type ratio_with_multiply;
  cout << "* op: " << ratio_with_multiply::num << "/" << ratio_with_multiply::den << endl; 
  typedef ratio_divide<ratio<2,7>, ratio<2,6>>::type ratio_with_divide;
  cout << "/ op: " << ratio_with_divide::num << "/" << ratio_with_divide::den << endl; 
}
