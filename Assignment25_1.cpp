// Define a class Complex to represent a complex number. Declare instance member 
// variables to store real and imaginary part of a complex number, also define instance 
// member functions to set values of complex number and print values of complex number

#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;

    public:
        complex(int x,int y)
        {
            a = x;
            b = y;
        }

        void Print()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    complex obj(5,10);
    obj.Print();

    return 0;
}