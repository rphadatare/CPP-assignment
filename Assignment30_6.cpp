// Write a C++ program to accept area pincode and 
// throw an exception if it does not contain 6 digits.

#include<iostream>
using namespace std;

int main()
{
    long int Pin_Code = 0;
    int count = 0;
    cout<<"Enter pin code "<<endl;
    cin>>Pin_Code;

    try
    {
        while (Pin_Code!=0)
        {
            Pin_Code = Pin_Code / 10;
            count++;
        }
        cout<<count<<endl;

        if(count==6)
        {
            throw 1;
        }
        else
        {
            throw 2;
        }
    }

    catch(int n)
    {
        if(n==1)
        cout<<"Pin code is Valid"<<endl;
        
        if(n==2)
        cout<<"Pin code is Invalid"<<endl;
    }
    
    return 0;
}
