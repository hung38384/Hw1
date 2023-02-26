#include<iostream>
using namespace std;
int main ()
{
    float a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    for(int i=0; i<5;i++){
        for(int j=i+1;j<5; j++){
            if(a[i]<a[j]) swap(a[i],a[j]);
        }
    }
    cout<<a[2];
}