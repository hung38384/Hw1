#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string f0="a",f1="b",fn;
    for(int i=1; i<n; i++)
    {
        fn=f1+f0;
        f0=f1;
        f1=fn;
    }
    cout<<fn;
}