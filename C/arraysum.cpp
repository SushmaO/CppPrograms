//cpp program to find sum of the elements of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[50],num, sum=0;
    cout<<"Enter the number of elements in the array:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<num;i++)
    {
        sum+= arr[i];
    }
    cout<<"The sum of all the elements is "<<sum;
    return 0;
    

}