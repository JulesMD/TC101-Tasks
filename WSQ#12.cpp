#include <iostream>
using namespace std;

int GCD(int x, int y){
  int t;
  if (x==0){
    return x;
  }
  while (y!=0){
    t= y;
    y= x%y;
    x= t;
  }
  return t;
}

int main (){
  int x,y;
  cout<<"Please type the first number: ";
  cin>>x;
  cout<<"Please type the second number: ";
  cin>>y;
  cout<<"The Greatest Common Divisor of (" <<x <<" and " <<y <<") = " <<GCD(x,y)<<endl;


  return 0;
}
