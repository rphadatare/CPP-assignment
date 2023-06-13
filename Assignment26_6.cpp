//Define a class student and write a program to enter student details using constructor and 
//define member function to display all the details.

#include<iostream>
using namespace std;

class Student
{
    string Name;
    int Roll_No;
    int Age;
    int Class;
    char Divison;

    public:

        Student()
        {
            cout<<"Enter name"<<endl;
            getline(cin,Name);

            cout<<"Enter roll number"<<endl;
            cin>>Roll_No;

            cout<<"Enter age"<<endl;
            cin>>Age;

            cout<<"Enter class"<<endl;
            cin>>Class;

            cout<<"Enter Divison"<<endl;
            cin>>Divison;
        }

        void Display()
        {
            cout<<"------------------Student Details------------------"<<endl;
            cout<<"Name          : "<<Name<<endl;
            cout<<"Roll number   : "<<Roll_No<<endl;
            cout<<"Age           : "<<Age<<endl;
            cout<<"Class         : "<<Class<<endl;
            cout<<"Divison       : "<<Divison<<endl;
            cout<<"---------------------------------------------------"<<endl;
        }
};

int main()
{
    Student obj1;
    obj1.Display();
    
    return 0;
}