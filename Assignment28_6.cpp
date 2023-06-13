//Create a complex class and overload assignment operator for that class.

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

        Complex operator=(const Complex& c)
        {
            R = c.R;
            I = c.I;
        }
};

int main()
{
    Complex c1,c2;
    cout<<"Before assignment operator overload"<<endl;
    cout<<"First complex number"<<endl;
    c1.Display();
    cout<<"Second complex number"<<endl;
    c2.Display();

    c1 = c2;

    cout<<"After assignment operator overload"<<endl;
    cout<<"First complex number"<<endl;
    c1.Display();
    cout<<"Second complex number"<<endl;
    c2.Display();

    return 0;
    
}