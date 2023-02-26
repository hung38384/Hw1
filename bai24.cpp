#include<iostream>
using namespace std;
int main()
{
    int d, m, y, DayMax, DayOfWeek;
    cin>>d>>m>>y;
    if(y<1582)
    {
        cout<<"Nam khong duoc xac dinh!";
        goto KetThuc;
    }

    if(m<1 || m>12)
    {
        cout<<"Thang khong hop le!";
        goto KetThuc;
    }

    switch(m)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            DayMax=30;
            break;
        case 2:
            DayMax=28+((y%4==0 && y%100!=0) || y%400==0);
            break;
        default:
            DayMax=31;
    }

    if(d<1 || d>DayMax)
    {
        cout<<"Ngay khong hop le!";
        goto KetThuc;
    }
    y -= (14-m)/12;
    m += 12*((14-m)/12)-2;
    DayMax = (d + y + y/4 - y/100 + y/400 + (31*m)/12)%7;

    if(!DayMax)
    {
        cout<<"\nChu nhat";
    }
    else
    {
        cout<<"\nThu "<<DayMax+1;
    }
 KetThuc:
    cout<<endl;
    return 0;
}   