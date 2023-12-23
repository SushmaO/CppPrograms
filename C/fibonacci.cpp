//cpp program to print fibonacci series
#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c, series;
    int temp;
    cout<<"enter the length of the series:";
    cin>>series;
   
    for(int i=0; i<series;i++)
    {
        cout<<a<<" ";
        c = a+b;
        a=b;
        b=c;
    }
    return 0;
}