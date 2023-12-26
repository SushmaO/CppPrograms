//cpp program to find sum of the elements of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[50],num, max,min;
    cout<<"Enter the number of elements in the array:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(int i=1;i<num-1;i++)
    {
        for(int j=i+1; j<num;j++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
            if(arr[i]<min)
            {
                min = arr[i];
            }
        }
    }
    cout<<"The maximum element is "<<max <<" and minimum element is "<<min;
    return 0;
    

}