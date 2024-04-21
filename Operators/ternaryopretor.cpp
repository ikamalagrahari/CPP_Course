#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
          // method 1
          if(m >34)
           {
            cout<<"Pass"<<endl; 
            }                            // instead of writing so much code we can convert above code into one line 
            else                         // using ternary or conditional operator
            { 
                cout<<"Fail"<<endl;
           }

           // Method 2
           ( m >34 ? cout<<"Pass"<<endl:cout<<"Fail"<<endl); // Ternary Operator -----> (cond? state1: state 2);

 return 0;
}       