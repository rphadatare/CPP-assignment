// Write a C++ program to convert Complex type to Primitive type.
// Example -
// int main()
// {
//      Complex c1;
//      c1.setData(3,4);
//      int x;
//      x=c1;
//      return 0;
// }

#include<iostream>
using namespace std;

class Complex
{
    int R;
    int I;

    public:
        Complex(int a,int b)
        {
            cout<<"PC called"<<endl;
            R = a;
            I = b;
        }
        
        void Display()
        {
            cout<<"Real = "<<R<<" Imaginary = "<<I<<endl;
        }

        operator int()
        {
            cout<<"Operator int() called"<<endl;
            return (R+I);
        }
        
};

int main()
{   
    Complex c1(3,5);
    c1.Display();
    int x= int(c1);
    cout<<x;
    
    return 0;
}