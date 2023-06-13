//Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;

int main()
{
    int iNo1,iNo2;

    cout<<"Enter number"<<endl;
    cin>>iNo1>>iNo2;

    if(iNo1<iNo2)
    {
        cout<<iNo2<<" is largest number";
    }
    else
    {
        cout<<iNo1<<" is largest number";
    }

    return 0;
}