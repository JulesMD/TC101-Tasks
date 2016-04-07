#include <iostream>
#include <math.h>
using namespace std;

float aver(float x){
  return (x/10);
}

int main (){
	float array1[10];
	float sum=0;
	float square=0, deviation;
	for (int i=0; i<10; i++)
	{
		cout<<"Please introduce the value number "<<(i+1)<<" : ";
		cin>>array1[i];
	}

	for (int i=0; i<10; i++)
	{
	sum+=array1[i];
	square+=(array1[i])*(array1[i]);
	}
	deviation=sqrt(square/10);

  cout<<""<<endl;
	cout<<"The addition equals: "<<sum<<endl;
	cout<<"The average of the numbers is: "<<aver(sum)<<endl;
	cout<<"The standard deviation of the numbers is: "<<deviation<<endl;

return 0;
}
