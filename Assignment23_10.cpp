//Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;

int main()
{
    int Arr[10];
    int i = 0,iSum = 0;

    cout<<"Enter number in array"<<endl;
    for(i=0 ; i<10 ; i++)
    {
        cin>>Arr[i];
    }

    for(i=0;i<10;i++)
    {
        iSum = iSum + Arr[i];
    }

    cout<<"Addition of numbers = "<<iSum<<endl;

    return 0;
}