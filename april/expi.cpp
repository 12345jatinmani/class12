#include<iostream>

using namespace std;

//function which will return the index of the element in the array if found
//otherwise return -1

int linearSearch(int *a, int n, int e)
{
  //i will iterate through all elements in the array and then return the index if found
  for(int i = 0; i < n; i++)
  {
    if(a[i] == e)
      return i;
    }

    return -1;
    }int main()
    {
      int a[] = {2, 1, 5, 9, 2, 1, 6, 7, 8};
      printArray(a, 9);
      cout << linearSearch(a, 9, 4) << endl;

      return 0;
    }
