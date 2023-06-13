//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;

int Swap(int *iNo1,int *iNo2)
{
    int Temp = 0;

    Temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = Temp;
}

int main()
{
    int iValue1,iValue2;

    cout<<"Enter numbers"<<endl;
    cin>>iValue1>>iValue2;

    Swap(&iValue1,&iValue2);

    cout<<"After swap iValue1 = "<<iValue1<<" and iValue2 = "<<iValue2<<endl;

    return 0;
}