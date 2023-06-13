// Write a C++ program to demonstrate the use of try, 
// catch block with the argument as an integer and string using multiple catch blocks.

#include<iostream>
using namespace std;

void Test(int n)
{
    const char* ch = "\n String Handling";

    try
    {
        if(n>=0 && n<=9)
        {
            throw n;
        }
        else
        {
            cout<<"\n It is not single number";
            throw ch;
        }
    }
    catch(int a)
    {
        cout<<"\n It is a single number "<<a<<endl;
    }
    catch(const char b[100])
    {
        cout<<b;
    }
}

int main()
{
    int n;
    cout<<"\nEnter number : ";
    cin>>n;
    Test(n);

    return 0;

}