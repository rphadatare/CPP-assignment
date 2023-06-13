//Define a class Circle and define an instance member function to find the area of the circle.

#include<iostream>
using namespace std;

class Circle
{
    float Radius;
    float Area;

    public:
        Circle(float r)
        {
            Radius = r;
        }

        void Area_Circle()
        {
            Area = 3.14 * Radius * Radius;
        }

        void Print()
        {
            cout<<"Area of the circle = "<<Area<<endl;
        }
};

int main()
{
    Circle obj1(5);
    obj1.Area_Circle();
    obj1.Print();

    return 0;
}