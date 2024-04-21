#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
          if(age < 12)
          { 
        cout<<age<<"Child"<<endl;
                } 
          else if(age>18)
          {
            cout<<age<<"Adult"<<endl;
                } 
          else
          {
            cout<<age<<"Teenager"<<endl; 
                }
 return 0;
}       