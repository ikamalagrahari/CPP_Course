// IF NO IS DIVISONAL BY 2 OR 3 ANY ONE OR BOTH THEN OUTPUT EXECUTES
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"m =";
    cin>>m; 
    if((m %2==0)||(m%3==0))   // OR operator operates only if any one condn is TRUE ,
    {
        cout<<m<<endl;
         }
    return 0;
}