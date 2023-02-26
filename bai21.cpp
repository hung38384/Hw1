#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double area(double a,double b,double c)
{
    double s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}