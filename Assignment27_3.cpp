//Write a C++ program to add two complex numbers using operator overloaded by a friend function.

#include<iostream>
using namespace std;

class Complex
{
    int R;
    int I;

    public:
        
        void Accept()
        {
            cout<<"\nEnter numbers"<<endl;
            cin>>R>>I;
        }
       

        friend Complex operator+(Complex a,Complex b);

        void Print()
        {
            cout<<R<<" + "<<I<<"i"<<endl;
        }
};

Complex operator+(Complex a,Complex b)
{
    Complex c;
    c.R = a.R + b.R;
    c.I = a.I + b.I; 
    return (c);           
}

int main()
{
    Complex a,b,c;

    a.Accept();
    b.Accept();

    c = a + b;

    c.Print();


    return 0;

}