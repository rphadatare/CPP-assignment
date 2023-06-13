// Define a class Complex with appropriate instance variables and member functions. 
// One of the functions should be setData() to set the properties of the object. 
// Make sure the names of formal arguments are the same as names of instance variables.

#include<iostream>
using namespace std;

class Complex
{
    int R,I;

    public:
        
        void setData()
        {
            cout<<"Enter values "<<endl;
            cin>>R>>I;
        }

        void getData()
        {
            cout<<R<<" + "<<I<<"i"<<endl;
        }

        Complex Addition(Complex b)
        {
            Complex temp;
            temp.R = R + b.R;
            temp.I = I + b.I;
            return temp;
        }

};

int main()
{
    Complex a,b,c;

    a.setData();
    cout<<"First complex number "<<endl;
    a.getData();
    cout<<endl;

    b.setData();
    cout<<"Second complex number "<<endl;
    b.getData();
    cout<<endl;

    c = a.Addition(b);
    cout<<"Addition of Complex number"<<endl;
    c.getData();

}