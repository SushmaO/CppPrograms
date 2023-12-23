// cpp program to find factorial of a number
#include <iostream>
 using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    cout<<"The factorial of the given number is "<<fact;
    return 0;
    }