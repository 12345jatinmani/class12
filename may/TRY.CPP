int binary( int*a ,int n, int e)

{
  int low=0;
  int high=n-1;
  int mid;

  while(low < high)
  {
    mid=(low + high)/2;


  if a[mid]==e;
  return mid;


  else if(a[mid]>e)
  high =mid-1;

  else (a[mid]<e)
  low =mid + 1;
  }

return -1;

}
