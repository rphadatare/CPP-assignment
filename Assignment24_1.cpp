//Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;

int Prime(int n)
{
    int i=1,count = 0;

    for(i = 1;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            cout<<count++;
        }
    }

    if(count==1)
    {
        cout<<"Number is prime number";
    }
    else
    {
        cout<<"Number is not prime number";
    }
}

int main()
{
    int iNo = 0;

    cout<<"Enter number"<<endl;
    cin>>iNo;

    Prime(iNo);

    return 0;
}