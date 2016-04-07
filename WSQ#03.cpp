#include <iostream>

using namespace std;
int main ()

{

int num1, num2, add, substract, divide, remain, multiply;

std::cout << "This program is a basic arithmetic calculator." << std::endl;

std::cout << "Write the frist number:   ";

cin >> num1;

std::cout << "Write the second number:   ";

cin >> num2;

add= num1+num2;
substract= num1-num2;
divide= num1/num2;
multiply= num1*num2;
remain= num1%num2;


std::cout << "The addition of both numbers equals: " <<add <<endl;

std::cout << "The substraction of the numbers equals: " <<substract <<endl;

std::cout << "The division of both numbers equals: " <<divide <<endl;

std::cout << "The remainder of the division equals: " <<remain <<endl;

std::cout << "The multiplication of the numbers equals: " <<multiply <<endl;



return 0;
}
