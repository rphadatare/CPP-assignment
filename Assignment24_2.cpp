//Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

int Highest_Digit(int iNo)
{
    int i= 1;
    int iMax = 0,Digit = 0;

    while(iNo!=0)
    {
        Digit = iNo % 10;
        if(iMax<Digit)
        {
            iMax = Digit;
        }
        iNo = iNo / 10;
    }
    cout<<"Highest Digit = "<<iMax<<endl;
}

int main()
{
    int iValue = 0;
    cout<<"Enter number"<<endl;
    cin>>iValue;

    Highest_Digit(iValue);

    return 0;
}