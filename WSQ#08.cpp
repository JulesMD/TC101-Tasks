#include <iostream>
#include <math.h>
using namespace std;

double addition (double a, double b){
return a+b;

}

double substraction (double a, double b){
return a-b;

}

double product (double a, double b){
return a*b;

}

double division (double a, double b){
return a/b;

}

int remainder (int a, int b){
return a%b;

}

int main(){
  double a;
  double b;

  cout<<"I will calculate the basic arithmetics operations of two given numbers"<<endl;

  cout<< "Please introduce the first number  "; cin >>a;

  cout<< "Please introduce the second number  "; cin>>b;

  cout<<"The sum of the two numbers equals  "<< addition(a,b)<<endl;
  cout<<"The substraction of the two numbers equals "<< substraction(a,b)<<endl;
  cout<<"The product of the two numbers equals "<<product(a,b)<<endl;
  cout<<"The division of the two numbers equals "<<division(a,b)<<endl;
  cout<<"The remainder of the division equals "<<remainder(a,b)<<endl;

  return 0;
}
