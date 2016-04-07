#include <iostream>
using namespace std;
int main()
{
  int x , factorial=1;

    cout << "Please enter a non-negative number:  " << endl;
    cin >> x;

    for(int a=1; a<=x; a++)
    {
        factorial=factorial*a;
    }

cout << "The factorial of your number is " << factorial << endl;
cout << "Would you like to try with another number?  (yes/no) ";
string answer;
cin >> answer;

do
{
    int x , factorial=1;

    cout << "Please enter a non-negative number:  " << endl;
    cin >> x;

    for(int a=1;a<=x;a++)
    {
        factorial=factorial*a;
    }

    cout << "The factorial of your number is " << factorial << endl;
    cout << "Would you like to play again (yes/no)? ";
    cin >> answer;

}while (answer =="yes");

if (answer== "no")
{
  cout <<"Ok then, have a nice day" << endl;
}

return 0;
}
