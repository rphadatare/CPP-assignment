// Create two classes Invent1 and Invent2 and also add necessary constructors in it. 
// Now add functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
//      Invent1 x(4,5);
//      Invent2 y;
//      float z;
//      z = x; // Invent1 to float
//      y = x; // Invent1 to Invent2
//      return 0;
// }

#include<iostream>
using namespace std;

class Invent1
{
    public:
        float x;

    public:
        Invent1(float a)
        {
            cout<<"PC Invent1 called"<<endl;
            x = a;
        }

        operator float()
        {
            cout<<"operator float() called"<<endl;
            return x;
        }
        void Display1()
        {
            cout<<"x = "<<x<<endl;
        }
};

class Invent2
{
    float y;

    public:
        Invent2()
        {
            cout<<"DC Invent2 called"<<endl;

        }
        Invent2(Invent1 i)
        {
            cout<<"Invent2(Invent1) called"<<endl;
            y = i.x;
        }
        void Display2()
        {
            cout<<"y = "<<y<<endl;
        }
};

int main()
{
    Invent1 x(4);
    Invent2 y;
    float z;
    z = x; // Invent1 to float
    x.Display1();
    y = x; // Invent1 to Invent2
    y.Display2();

    return 0;
}