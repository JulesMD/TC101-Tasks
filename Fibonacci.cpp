#include <iostream>
using namespace std;
int n, f1 = 0, f2= 1, f;

int fibonacci (int n)
{
  for (int t=1; t < n; t++)
  {
    f = f1+f2;
    f1 = f2;
    f2 = f;
  }
  return f;
}

int main ()
{
  cout << "Enter the required number on the Fibonacci order" << endl;
  cin >> n;
  cout << "The number is " << fibonacci (n) << endl;
  return 0;
}
