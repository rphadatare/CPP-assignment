//Write a C++ program to accept a mobile number and 
//throw an exception if it does not contain 10 digits.

#include<iostream>
using namespace std;

int main()
{
    long long int moblile_No = 0;
    int count = 0;
    cout<<"Enter mobile number "<<endl;
    cin>>moblile_No;

    try
    {
        while (moblile_No!=0)
        {
            moblile_No = moblile_No / 10;
            count++;
        }
        cout<<count<<endl;

        if(count==10)
        {
            cout<<"Mobile number is valid"<<endl;
        }
        else
        {
            throw 2;
        }
    }

    catch(int n)
    {
        cout<<"Mobile number is invalid"<<endl;
    }
    
    return 0;
}
