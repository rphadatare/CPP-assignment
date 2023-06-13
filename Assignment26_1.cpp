// Define a class Complex to represent a complex number with instance variables 
// a and b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)

#include<iostream>
using namespace std;


class Complex
{
    int a,b;

    public:
        Complex()
        {
            
        }
        Complex(int x,int y)
        {
            a = x;
            b = y; 
        }

        void setData(int x,int y)
        {
            a = x;
            b = y; 
        }

        Complex add(Complex c)
        {
            Complex t;
            t.a = a + c.a;
            t.b = b + c.b;
            return t;
        }

        void showData()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    Complex obj1,obj2,obj3;
    obj1.setData(2,3);
    obj2.setData(3,8);

    obj3 = obj1.add(obj2);

    obj3.showData();
}