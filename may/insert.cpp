#include<iostream>

using namespace std;

int insert_pos( int* a, int n, int pos, int ele )
{
    if(pos >n)
      return n;

  return 0;
}
  for(int i = n-1; i >= pos; i--)
  {
    a[i+1]=a[i];
  }

    a[pos]=ele;
    n++;
    return n;
}


void input(int *a, int size)
{
  for(int i = 0; i < size; i++)
  {
    cin >> a[i];
  }
}

void print_array(int* a, int size)
{
  for(int i = 0; i <101 size; i++)
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
  print_array(a,size);
  size = insert_pos(a, size, 3, 69);
  print_array(a, size);
}
