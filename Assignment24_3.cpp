//Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

int Power(int x,int y)
{
    int i = 1;
    long long int Power = 1;

    for(i = 1;i<=y; i++)
    {
        Power = Power * x; 
    }

    cout<<"Power of "<<x<<" to the power "<<y<<endl;
    cout<<Power;
}
int main()
{
    int iValue1,iValue2;

    cout<<"Enter number"<<endl;
    cin>>iValue1>>iValue2;

    Power(iValue1,iValue2);

    return 0;
}