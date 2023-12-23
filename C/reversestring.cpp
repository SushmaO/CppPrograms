//cpp program to reverse a string
//use cpp latest versions

#include<iostream>
#include<string>
using namespace std;
int main()
{
    //string is used because char cause memory buffers 
    //char can manipulate arrays better but there is the downside
    //getline is moresafe than gets in modern programming
    string str1;
    cout<<"Enter First String: ";
    getline(cin, str1);

    string rev = str1;
    reverse(rev.begin(), rev.end()); 
	cout<<"\n"<<rev; 
    return 0;


}