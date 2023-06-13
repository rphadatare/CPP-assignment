//Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;

int main()
{
    int iNo1,iNo2,iNo3;

    cout<<"Enter numbers"<<endl;
    cin>>iNo1>>iNo2>>iNo3;
    cout<<endl;

    int Avarage = (iNo1 + iNo2 + iNo3) / 3;

    cout<<"Avarage of numbers is "<<Avarage;

    return 0;
}