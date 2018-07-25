#include <chrono>
#include <iostream>
#include <iomanip>

template <typename C>
void printClockData()
{
  using namespace std;

  cout << "-- precision ";
  //if time unit is less or equal one milliseconds
  typedef typename C::period P;
  if (ratio_less_equal<P, milli>::value)
  {
    //convert to and print ass milliseconds
    typedef typename ratio_multiply<P, kilo>::type TT;
    cout << fixed << double(TT::num)/TT::den << " milliseconds" << endl;
  }
  else{
    //print as seconds
    cout << fixed << double(P::num)/P::den << " seconds" << endl;
  }

  cout << "- is_steady: " << boolalpha << C::is_steady << endl;
}