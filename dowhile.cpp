#include<iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cout<<"Enter the Number"<<endl;
  cin>>n;

 do{  
     int i;
     cin>>i;
     sum=sum+i;
     n--;
  }while(n>0);
  
    cout<<"sum="<<sum<<endl;
    return 0;
} 