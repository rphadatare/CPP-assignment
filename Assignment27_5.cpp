// Consider following class Numbers
// class Numbers 
// {
//   int x,y,z; 
//   public: // methods 
// };
// Overload the operator unary minus (-) to negate the numbers.

#include<iostream>
using namespace std;

class Numbers
{
    int x,y,z;

    public:
        Numbers()
        {
            
        }

        void Accept()
        {
            cout<<"Enter values"<<endl;
            cin>>x>>y>>z;
        }

        void Display()
        {
            cout<<"Numbers :"<<endl;
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<"z = "<<z<<endl;
        }

        void operator-()
        {
           x = -x;
           y = -y;
           z = -z;
        }
};

int main()
{
    Numbers a,b;

    a.Accept();
    a.Display();
    cout<<endl;
    -a;
    cout<<"Negate numbers are :"<<endl;
    a.Display();

    return 0;
}