#include<iostream>

using namespace std;

void print_array(int* a, int start, int end)
{
  for(int i = start; i <= end; i++)
  {
    cout << a[i] << ", ";
  }
  cout << endl;
}

int binary_search(int * a, int n, int e)
{
  int low = 0;
  int high = n - 1;
  int mid;

  while(low < high)
  {
    print_array(a, low, high);
    mid = (low + high) / 2;
    cout << "mid = " << a[mid] << endl;
    cout << "required = " << e << endl;
    //element is in the mid index
    if(a[mid] == e)
    {
      return mid;
    }

    //element is in left half
    else if(a[mid] > e)
    {
      high = mid - 1;
    }
    //element is in right half
    else
    {
      low = mid + 1;
    }
  }

  //condition for not found
  return -1;
}

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  cout << "binary search result = "<< binary_search(a, 9, 2) << endl;

  return 0;
}
