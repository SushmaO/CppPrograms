// cpp program to check if a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    
    int flag ;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            flag = flag+1;

        }
    }

    if(flag == 0)
        cout<<"The given number is prime.";
    else
        cout<<"The number is not prime.";
    return 0;
    }