//Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;

int Fibbonacci(int  iNo)
{
    int a  = 1,b = 1,c = 0;

    while(c<iNo)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if(c==iNo)
    {
        cout<<iNo<<" is  fibbonacci number"<<endl;
    }
    else
    {
        cout<<iNo<<" is  not fibbonacci number"<<endl;
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number"<<endl;
    cin>>iValue;

    Fibbonacci(iValue);

    return 0;
}