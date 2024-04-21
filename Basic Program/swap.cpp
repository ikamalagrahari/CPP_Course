#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a =";
    cin>>a; 
    cout<<"b =";
    cin>>b;
    int t;
    t=b;
    b=a;
    a=t; 
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
