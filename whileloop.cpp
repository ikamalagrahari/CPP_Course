//Sum of 1 to N numbers
#include<iostream>
using namespace std;
int main()
{ int n ,sum=0,i=1;
  cout<<"Enter the Number"<<endl;
  cin>>n;
  while( i<=n)
  {
    sum=sum+i;
    i++;
  }
    cout<<"sum="<<sum<<endl;
    return 0;
} 