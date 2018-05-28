#include<iostream>

using namespace std;

int main()
{
  int a = 7;
  int *b;
  b = &a;
  cout << b << endl;

  int **c;
  c = &b;

  cout << c << endl;

  char k = 'k';
  char *ptr;
  ptr = &k;
  cout << ptr << endl; 
}
