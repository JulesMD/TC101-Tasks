#include <iostream>
using namespace std;

void triangle(int a)
{
for(int i=1; i<=a; i++)
{
  for (int j=1; j<=i; j++)
  {
    cout<<"T";
  }
  cout<<endl;
}

 for(int i=a-1; i>=1; i--)
 {
   for (int j=1; j<=i; j++)
   {
     cout<<"T";
   }
   cout<<endl;
 }
}
int main ()
{
  int num;
  cout<<"Give me the number of T's you want as the base of your triangle: ";
  cin >> num;
  cout<<endl;
  triangle(num);
  return 0;
}
