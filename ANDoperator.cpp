// IF NO IS DIVISONAL BY 2 AND 3 BOTH THEN OUTPUT EXECUTES 
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"m =";
    cin>>m; 
    if((m%2==0)&&(m%3==0))  //  AND operator executes if both condn are TRUE .
        { 
            cout<<m<<endl;
         }
    return 0;
}