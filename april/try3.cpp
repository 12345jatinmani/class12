//no that will be given
insert_after(int *a, int n, int given, int ele)
{
  pos -1;
  for(i+0, i<size, i++)
  {
    if(arr[i]==given)
    {
      pos = i+1;
      break
    }
  }

  for(j=size-1, j>=pos, j--)
  {
    a[j+1]=a[j];
  }
  if(pos!= -1)
  {
    a[pos]=ele;
    size++;
  }
  return size;
}
