
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    double tong=0,tb;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        tong+=a[i];
    }
    tb=tong/n;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    cout<<"Mean: "<<tb<<endl;
    cout<<"Max: "<<a[n-1]<<endl;
    cout<<"Min: "<<a[0];
}