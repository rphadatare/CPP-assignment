//Define a class Complex with appropriate instance variables and member functions. 
//Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

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

        Complex operator+(Complex c)
        {
            Complex temp;
            temp.R = R + c.R;
            temp.I = I + c.I; 
            return temp;           
        }

        Complex operator-(Complex c)
        {
            Complex temp;
            temp.R = R - c.R;
            temp.I = I - c.I; 
            return temp;            
        }

        Complex operator*(Complex c)
        {
            Complex temp;
            temp.R = R * c.R;
            temp.I = I * c.I; 
            return temp;            
        }

        bool operator==(Complex c)
        {
             if(R == c.R && I==c.I)
             {
                return true;
             }
             else
             {
                return false;
             }           

        }

        void Print()
        {
            cout<<R<<" + "<<I<<"i"<<endl;
        }
};

int main()
{
    Complex a(5,3),b(3,5),c;


    c = a.operator+(b);
    c.Print();

    c = a.operator-(b);
    c.Print();

    c = a.operator*(b);
    c.Print();

    cout<<(a==b)<<endl;

    return 0;

}