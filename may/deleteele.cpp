#include<iostream>

using namespace std;

int delete_ele( int* a, int n, int pos )
{
  //get to the position
  for(int i = pos; i < n; i++)
  {
    a[i] = a[i + 1];
  }

  return --n;
}

void input(int *a, int size)
{
  for(int i = 0; i < size; i++)
  {
    cin >> a[i];
  }
}

void print_array(int* a, int start, int end)
{
  for(int i = start; i <= end; i++)
  {
    cout << a[i] << ", ";
  }
  cout << endl;
}

int main()
{
  int a[100];

  int size;
  cout << "enter size : "  << endl;
  cin >> size;

  input(a, size);
  print_array(a, 0, size-1);
  size = delete_ele(a, size, 4);
  print_array(a, 0, size-1);
  
}
