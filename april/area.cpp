#include <iostream>
#include<math.h>

using namespace std;

int area(int side)
{

  return side*side;

}

int area(int length, int bredth)

{

  return length*bredth;

}
double area(double radius)
{

  return 3.14*radius*radius;

}
double area(int a,int b,int c)
{

  double s=(a+b+c)/2;
  return sqrt(s*(s-a)*(s-b)*(s-c));

}
int main()
{

  cout<< area(34)<<endl;
  cout<<area(12,35)<<endl;
  cout<<area(13)<<endl;
  cout<<area(13,24,43)<<endl;
  return 0;

}
