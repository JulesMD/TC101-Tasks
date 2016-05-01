#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int dotProduct(int n1, int n2)
{
  int ans;
  ans = n1 * n2;
  return ans;
}

int main()
{
  int i, x, add = 0, sum;
  cout << "Give me the amount of numbers for the lists " << endl;
  cin >> i;
  int list1[i], list2[i];
  for (x = 0; x < i; x++)
  {
    cout << "Give me the numbers for the first list: " << endl;
    cin >> list1[x];
  }
  for (x = 0; x < i; x++)
  {
    cout << "Give me a numbers for the second list " << endl;
    cin >> list2[x];
  }
  for (x = 0; x < i; x++)
  {
     sum = dotProduct(list1[x], list2[x]);
     add += sum;
  }
  cout << "The answer is: " << add << endl;
}
