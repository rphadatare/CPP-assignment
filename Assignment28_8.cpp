// Create a Coordinate class for 3 variables x,y and z and overload comma operator 
// such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. 
// Where c1,c2,and c3 are objects of 3D coordinate class.

#include<iostream>
using namespace std;

class Coordinate
{
    int x,y,z;

    public:
        Coordinate()
        {
            x = y = z =0;
        }
        Coordinate(int x,int y,int z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        void Accept()
        {
            cin>>x>>y>>z;
        }

        void Display()
        {
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<"z = "<<z<<endl;
        }

        Coordinate operator,(Coordinate c)
        {
            Coordinate temp;
            temp.x = c.x;
            temp.y = c.y;
            temp.z = c.z;
            return temp;
        }
};

int main()
{
    Coordinate c1,c2;
    Coordinate c3;

    cout<<"Enter first Coordinate values "<<endl;
    c1.Accept();

    cout<<"Enter second Coordinate values "<<endl;
    c2.Accept();
    cout<<endl;

    cout<<"First Coordinate values "<<endl;
    c1.Display();
    
    cout<<"Second Coordinate values "<<endl;
    c2.Display();
    cout<<endl;

    c3 = (c1,c2);
    cout<<endl;
    cout<<"c2 is assigned to c3 "<<endl;
    c3.Display();

    Coordinate c4;
    c4 = (c1,c2,c3);
    cout<<"c1,c2,and c3 are objects of 3D coordinate class"<<endl;
    c4.Display();

    return 0;
}
