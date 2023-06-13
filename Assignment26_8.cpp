//Define a class Bank and define member functions to read principal , rate of interest and year. 
// Another member functions to calculate simple interest and display it. 
// Initialise all details using constructor.

#include<iostream>
using namespace std;

class Bank
{
    double P;
    double R;
    double T;
    double A;

    public:
        Bank(double p,double r,double t);
        
        void Simple_Interest();
        void Display();
};

Bank :: Bank(double p,double r,double t)
{
    P = p;
    R = r;
    T = t;
    
}

void Bank::Simple_Interest()
{
    A = (P*R*T)/100;
}

void Bank::Display()
{
    cout<<"Total Amount = "<<A<<endl; 
}


int main()
{
    Bank obj(10000,10,2);
    obj.Simple_Interest();
    obj.Display();

    return 0;
}