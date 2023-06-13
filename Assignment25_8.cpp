//Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include<iostream>
using namespace std;

class Rectangle
{
    float length;
    float breadth;
    float Area;

    public:
        Rectangle(float l, float b)
        {
            length = l;
            breadth = b;
        }

        void Area_Rectangle()
        {
            Area = length * breadth;
        }

        void Print()
        {
            cout<<"Area of the rectangle = "<<Area<<endl;
        }
};

int main()
{
    Rectangle obj1(6,9);
    obj1.Area_Rectangle();
    obj1.Print();

    return 0;
}