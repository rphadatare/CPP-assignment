// Create a Distance class having 2 instance variable feet and inches. 
// Also create default constructor and parameterized constructor takes 2 variables. 
// Now overload () function call operator that takes 3 arguments a , b and c and
// set feet = a + c + 5 and inches = a+b + 15.

#include<iostream>
using namespace std;

class Distance
{
    double feet;
    double inches;

    public:
        Distance()
        {

        }
        Distance(double f,double i)
        {
            feet = f;
            inches = i;
        }

        Distance operator()(double a,double b,double c)
        {
            Distance d;
            d.feet = a + c + 5;
            d.inches = a + b + 15;
            return d;
        }

        void Display()
        {
            cout<<"Feet = "<<feet<<"  Inches = "<<inches<<endl;
        }
};

int main()
{
    Distance d1(5,10);
    Distance d2;
    Distance d3;

    d1.Display();
    d2 = d1(10,20,30);

    d1.Display();
    d2.Display();

    return 0;
}