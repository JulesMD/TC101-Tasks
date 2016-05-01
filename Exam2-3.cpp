#include <iostream>
using namespace std;

long fibonacci(long n){
long i=0,a=1,b=1,c=0;
if (n<2){
return n;
}
if (n==2){
return 1;
}
while(i<n-2)
{
c=a+b;
a=b; b=c;
i++;}
return c;
}
int main(){
long n;
cout << "Type the number on the series you want to know" << endl;
cin >> n;
cout << "The Fibonacci ” << n << ” position of the serie is: " << endl;
cout<<fibonacci(n)<<endl;
return 0;
}
