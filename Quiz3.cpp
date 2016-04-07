#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::setw;
float distance(float x1, float x2, float y1, float y2)
{
  float vx, vy, dis;
  vx = x2 - x1;
  vy = y2 - y1;
  dis = sqrt((vx * vx) + (vy * vy));
  return (dis);

}
int main()
{
  float a, b, c, d;

  cout << "Enter the coordinates in x:" << endl;
  cin >> a >> b;
  cout <<"Enter the coordinates in y:" << endl;
  cin >> c >> d;
  cout << "The distance between points is: " << setw(3) << distance(a, b, c, d) << endl;
  return 0;
}
