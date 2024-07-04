#include <bits/stdc++.h>

int  month_a[12]={31,28,31,30,31,30,31,31,30,31,30,31};

using namespace std;

int main()
{
    string a;
    cin>>a;
    string year=a.substr(0,4);
    string month=a.substr(5,2);
    string day=a.substr(8,2);

    int yy= stoi(year);

    int mm= stoi(month);
    int dd= stoi(day);

    if ((0 == yy % 4 && yy % 100 != 0) || (0 == yy % 400)) month_a[1]+=1;


    if(dd>1)   dd-=1;
    else {
        if (mm > 1)
        {
            mm -= 1;
            dd = month_a[mm-1] ;
        }
        else
        {
            yy -= 1;
            mm = 12;
            dd = month_a[mm-1];
        }
    }
    if(dd>1)  dd-=1;
    else {
        if (mm > 1)
        {
            mm -= 1;
            dd = month_a[mm-1] ;

        }
        else
        {
            yy -= 1;
            mm = 12;
            dd = month_a[mm-1] ;

        }
    }
    printf("%04d-%02d-%02d",yy,mm,dd);

}