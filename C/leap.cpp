//cpp program to check leap year
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter any year:";
    cin>>year;
    if(year%400 == 0)
    {
        cout<<"It is a leap year.";
    }
    else if(year%100 == 0)
    {
        cout<<"It is not a leap year.";
    }
    else if(year%4 == 0)
    {
        cout<<"It is a leap year";
    }
    else
    {
        cout<<"The year is not a leap year.";
    }
    return 0;
}