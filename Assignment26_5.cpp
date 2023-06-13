//Define a class Date and write a program to Display Date and 
//initialise date object using Constructors.

#include<iostream>
using namespace std;

class Date
{
    int DD,MM,YYYY;

    public:
        Date()
        {
            cout<<"Enter day"<<endl;
            cin>>DD;
            cout<<"Enter month"<<endl;
            cin>>MM;
            cout<<"Enter year"<<endl;
            cin>>YYYY;
        }

        void Display()
        {
            cout<<"Date is "<<DD<<"/"<<MM<<"/"<<YYYY<<endl;
        }
};

int main()
{
    Date obj;
    obj.Display();

    return 0;
}
