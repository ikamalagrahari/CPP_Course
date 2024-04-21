//ODD - EVEN NUMBER
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"m =";
    cin>>m; 
    if((m%2)!=0)   // ! NOT operator Or Negation     %---> remainder(modulas)  ,  1!=0 vice versa 
        {
            cout<<m<<"=ODD"<<endl;
         }
         else
         {
            cout<<m<<"=EVEN"<<endl;
        }
        //OR
        ((m%2)!=0 ? cout<<m<<"=ODD"<<endl :cout<<m<<"=EVEN"<<endl);
    return 0;
}