#include <iostream>
using namespace std;

long superpower(long a, long b)
{
	long sup=1;
	int count=0;
	do
	{
		sup = sup*a;
		count = count+1;
	}
	while (b!=count);
	return (sup);
}

int main()
{
	int n, n1;
	cout<<"Please give me the first number: "<<endl;
	cin>>n;
	cout<<"Please give me the second number: "<<endl;
	cin>>n1;
	cout<<"The answer is " <<superpower(n,n1)<<endl;
	return 0;
}
