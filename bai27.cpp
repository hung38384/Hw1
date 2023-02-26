#include<iostream>
using namespace std;
int main ()
{
    int n;
    while(n!=0)
    {
        cin>>n;
        if(n>0 && n%5==0){
            cout<<n/5;
        } else {
            n=-1;
            cout<<"-1"<<endl;
            cout<<"bye";
            break;
        }
    }
}