//Create a complex class and overload not operator for that class.

#include<iostream>
using namespace std;

class Complex
{
    int R;
    int I;

    public:
        Complex()
        {
            cout<<"Enter values"<<endl;
            cin>>R>>I;
        }

        void Display()
        {
            cout<<R<<" + "<<I<<"i"<<endl;
        }

        void operator!(void)
        {
            R = !R;
            I = !I;
        }
};

int main()
{
    Complex c1,c2;
    cout<<"Before not operator overload"<<endl;
    cout<<"First complex number"<<endl;
    c1.Display();
    cout<<"Second complex number"<<endl;
    c2.Display();

    !c1;
    cout<<endl;
    cout<<"After not operator overload"<<endl;
    cout<<"First complex number"<<endl;
    c1.Display();
    cout<<"Second complex number"<<endl;
    c2.Display();

    return 0;
    
}