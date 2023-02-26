#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    double distance;
    distance=sqrt(x*x+y*y);
    cout<<fixed<<setprecision(2)<<distance;
}