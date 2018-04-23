#include<iostream>

using namespace std;

int main()
{
  int a,b;
  char c[1];
  cout<<"enter a b c  "<< endl;
  cin>>a>>b;
  cin.getline(c, 1);
  cout<<a<<b<<c<<endl;
  return 0;
}
