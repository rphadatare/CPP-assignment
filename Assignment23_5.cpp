//Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;

int main()
{
    float l,b,h;

    cout<<"Enter parameters"<<endl;
    cin>>l>>b>>h;
    cout<<endl;

    float Volume_of_Cuboid = l*b*h;

    cout<<"Volume of Cuboid is "<<Volume_of_Cuboid;

    return 0;
}