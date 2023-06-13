// Write a C++ program to calculate the percentage of a student using multi-level inheritance.
// Accept the marks of three subjects in base class.
// A class will be derived from the above mentioned class which includes a 
// function to find the total marks obtained and another class derived from this class 
// which calculates and displays the percentage of students.

#include <iostream>
using namespace std;

class Marks
{
    public :

        int sub1,sub2,sub3;

        Marks()
        {
            cout<<"Enter marks"<<endl;
            cin>>sub1>>sub2>>sub3;
        }
};

class Total_Marks : public Marks
{
    public:
        int Total;

        void Sum()
        {
            Total = sub1 + sub2 + sub3;
        }
    
};

class Percentage : public Total_Marks 
{
    public:
    float percentage;

    void P()
    {
        percentage = Total / 3.00;
        cout<<"Percentage = "<<percentage<<" %"<<endl;
    }
};

int main()
{
    Percentage obj;
    obj.Sum();
    obj.P();

    return 0;
}