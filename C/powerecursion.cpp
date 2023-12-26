//cpp program to calculate power using recursion
#include<iostream>

using namespace std;
int calculatepower(int a,int b);
int main()

{
    int base,p;
    cout<<"Enter base:";
    cin>>base;
    cout<<"Enter power:";
    cin>>p;
    cout<<"The power of the number is "<<calculatepower(base,p);
    return 0;
}

int calculatepower(int base , int p)
{
    if (p != 0)
        return (base*calculatepower(base, p-1));
    else
        return 1;
}