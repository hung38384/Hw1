#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main ()
{
    float weight, height;
    cin>>weight>>height;
    double BMI= weight/pow(height,2);
    cout<<fixed<<setprecision(2)<<BMI;
}