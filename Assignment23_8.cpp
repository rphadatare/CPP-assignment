//Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 0,iNo2 = 0;

    cout<<"Enter Number"<<endl;
    cin>>iNo1>>iNo2;

    cout<<"iNo1 = "<<iNo1<<endl;
    cout<<"iNo2 = "<<iNo2<<endl;

    iNo1 = iNo1 + iNo2;
    iNo2 = iNo1 - iNo2;
    iNo1 = iNo1 - iNo2;

    cout<<endl;
    cout<<"iNo1 = "<<iNo1<<endl;
    cout<<"iNo2 = "<<iNo2;

    return 0;
}