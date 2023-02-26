#include<iostream>
using namespace std;
int main ()
{
    int year;
    cin>>year;
    if(year>0 && year%400==0){
        cout<<"true";
    } else {
        cout<<"false";
    }

}