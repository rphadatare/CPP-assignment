//Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;

class Cube
{
    public:
        float Side;
        float Volume;
    
        Cube()
        {
            cout<<"Inside default constructor"<<endl;
        }

        Cube(float x)
        {
            cout<<"Inside parameterrized constructor"<<endl;
            Side = x;
        }

        float Volume_of_Cube()
        {
            Volume = Side*Side*Side;
        }

        void Print()
        {
            cout<<"Volume of cube = "<<Volume<<endl;
        }
};

int main()
{
    Cube obj1;
    cout<<"Enter side of cube"<<endl;
    cin>>obj1.Side;
    obj1.Volume_of_Cube();
    obj1.Print();

    Cube obj2(7);
    obj1.Volume_of_Cube();
    obj1.Print();

    return 0;
}