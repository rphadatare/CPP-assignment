//Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;

int main()
{
    float Pi = 3.14,Radius = 0;

    cout<<"Enter radius"<<endl;
    cin>>Radius;
    cout<<endl;

    float Area_of_Circle = Pi * Radius * Radius;

    cout<<"Area of Circle is "<<Area_of_Circle;

    return 0;
}