//cpp program to find table of any number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number:";
    cin>>num;
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<num<<" X "<<i<<" = "<<num*i;
    }
    return 0;
}