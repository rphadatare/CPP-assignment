// Write a C++ program to convert Primitive type to Complex type.
// Example -
// int main()
// {
//      Complex c1;
//      int x=5;
//      c1=x;
//      return 0;
// }

#include<iostream>
using namespace std;

class Complex
{
    int R;
    int I;

    public:
        Complex()
        {

        }
        void Display()
        {
            cout<<"Real = "<<R<<" Imaginary = "<<I<<endl;
        }
        Complex(int x)
        {
            R = x;
            I = x;
        }
};

int main()
{   
    Complex c1;
    int x=5;
    c1=x;
    c1.Display();
    
    return 0;
}