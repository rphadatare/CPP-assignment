// Create a class Marks that have one member variable marks and one member function that will print marks.
// We know that we can access member functions using (.) dot operator. 
//  Now you need to overload (->) arrow operator to access that function.

#include<iostream>
using namespace std;

class Marks
{
    int marks;

    public:
        Marks()
        {
            cout<<"Enter marks :"<<endl;
            cin>>marks;
        }
       
        void Print()
        {
            cout<<"Print function called "<<endl;
            cout<<"Marks = "<<marks<<endl;
        }

        Marks *operator->()
        {
            cout<<"Operator overload function called "<<endl;
            return this;
        }
};

int main()
{
    Marks m1;
    m1.Print();
    m1->Print();
}