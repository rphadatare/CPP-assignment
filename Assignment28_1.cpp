// Define a class Complex with appropriate instance variables and member functions. 
// Overload following operators
// a. << insertion operator
// b. >> extraction operator

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

        Complex(int r,int i)
        {
            R = r;
            I = i;
        }

        friend void operator>>(istream &input, Complex &c)
        {
            cout<<"Enter values :"<<endl;
            cin>>c.R>>c.I;
        }

        friend void operator<<(ostream &output, Complex &p)
        {
            cout<<"Complex number is :"<<endl;
            cout<<p.R<<" + "<<p.I<<"i"<<endl;
        }
};

int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;

    return 0;
}