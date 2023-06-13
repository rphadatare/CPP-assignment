//Define a class Box and write a program to enter length, breadth and height and initialise objects 
//using constructor also define member functions to calculate volume of the box.

#include<iostream>
using namespace std;

class Box
{
    float length;
    float breadth;
    float heigth;
    float v;

    public:
        Box(float l,float b,float h)
        {
            length = l;
            breadth = b;
            heigth = h;
            volume();
            Display();
        }

        void volume()
        {
            v = length * breadth * heigth;
        }

        void Display()
        {
            cout<<"Volume of Box = "<<v<<endl;
        }
};

int main()
{
    Box obj1(5,6,7);

    Box obj2(10,12,14);

    return 0;
}