#include <iostream>
using namespace std;

int main ()
{
  double c, f;
  cout<< "What is the temperature in Farenheit?  ";
  cin>> f;
  c=5*(f-32)/9;
  cout <<" A temperature of ";
  cout<< f;
  cout<<" degrees Farenheit is ";
  cout<< c;
  cout<<" in Celsius.  ";
  if (c>= 100)
  {
  cout<< " Water boils at this temperature at sea level ";
  }
else {
  cout<< " Water does not boil at this temperature at sea level";
  }
  return 0;

}
