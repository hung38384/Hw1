#include<iostream>
using namespace std;
int main ()
{
 for(int i=0; i<24;i++)
 {
    if(i==0) cout<<"12 midnight"<<endl;
    if(i<=11 && i>=1)
    {
        cout<<i<<"am"<<endl;
    }
    if(i==12) cout<<"12 noon"<<endl;
    if(i>=13 && i<=23) {
        cout<<i-12<<"pm"<<endl;
    }
 }

}