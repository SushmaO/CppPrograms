#include<iostream>

using namespace std;
int main()
{
    int key;
    int a, b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Basic Calculator:\n";
    cout<<"Enter your choice:\n"
        "1........Addition\n"
        "2.......Subtraction\n"
        "3.......Multiplication\n"
        "4.......Division\n";
    cin>>key;
    switch(key)
    {
        case 1: cout<<"The sum of the two numbers is "<<a+b;
                break;
        case 2: if(a>b)
                {
                    cout<<"The difference of the two numbers is "<<a-b;
                }
                else{
                    cout<<"The difference of the two numbers is "<<b-a;
                }
                break;
        case 3: cout<<"The product of the two numbers is "<<a*b;
                break;
        case 4: if(a>b)
                {
                    cout<<"The quotient of the two numbers is "<<a / b;
                }
                else{
                    cout<<"The quotient of the two numbers is "<<b / a;
                }
                break;

        default: cout<<"wrong Choice!";
                    break;

    }
    return 0;
}