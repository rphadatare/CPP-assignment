//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std;


float Circle(float Radius)
{
    float Area_Circle = 3.14 * Radius * Radius;

    return Area_Circle;
}

float Rectangle(float length,float breadth)
{
    float Area_Rectangle = length * breadth;

    return Area_Rectangle;
}

float Triangle(float height,float base)
{
    float Area_Triangle = (height * base)/2;

    return Area_Triangle;
}

int main()
{
    float r,l,b,h,bs;

    cout<<"Enter parameters in circle"<<endl;
    cin>>r;
    cout<<endl;

    cout<<"Enter parameters in Rectangle"<<endl;
    cin>>l>>b;
    cout<<endl;

    cout<<"Enter parameters in Triangle"<<endl;
    cin>>h>>bs;
    cout<<endl;

    cout<<"Area of Circle = "<<Circle(r)<<endl;
    cout<<"Area of Rectangle = "<<Rectangle(l,b)<<endl;
    cout<<"Area of Triangle = "<<Triangle(h,bs)<<endl;

    return 0;
}