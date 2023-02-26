#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    if(x>=50 && x<=99)
    {
        cout<<"pick"<<endl;
        cout<<"you are the winner !";
    } else if (y>=50 && y<=99)
    {
        cout<<"pick"<<endl;
        cout<<"you are the winner !";
    } else {
        cout<<"please pick another !";
    }
}