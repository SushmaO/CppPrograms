//cpp program to  find if a number is palindrome or not
#include<iostream>

using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number:";
    cin>>n;

    int rev,rem;
    while(n!=0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n=n/10;
    }
    if(n==rev)
    {
        cout<<"The number is a palindrome:";

    }
    else{
        cout<<"The number is not a palindrome:";
    }
    return 0;
}