// Write a C++ program to add two numbers using single inheritance. 
// Accept these two numbers from the user in base class 
// and display the sum of these two numbers in derived class.

#include <iostream>
using namespace std;

class Numbers
{
    public:

        int a,b;

    Numbers()
    {
        cout<<"Enter numbers"<<endl;
        cin>>a>>b;
    }
};


class Sum : public Numbers
{
    public:

        int s;

    void sum()
    {
        s = a + b;
        cout<<"Sum of numbers"<<endl;
        cout<<s;
    }
};

int main()
{
    Sum s;
    s.sum();
}