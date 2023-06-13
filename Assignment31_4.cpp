// Write a C++ program to design a base class Person (name, address, phone_no).
// Derive a class Employee (eno, ename) from Person. 
// Derive a class Manager (designation, department name, basic-salary) from Employee. 
// Write a menu driven program to:
// a. Accept all details of 'n' managers. 
// b. Display manager having highest salary.

#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:

    string name;
    string address;
    int phone_no[10];

    void setP()
    {
        cout<<"Enter name"<<endl;
        getline(cin,name);

        cout<<"Enter address"<<endl;
        getline(cin,address);

        cout<<"Enter phone number"<<endl;
        cin>>phone_no[10];
    }
    void DisplayP()
    {
        cout<<"Name         : "<<name<<endl;
        cout<<"Address      : "<<address<<endl;
        cout<<"Phone no.    : "<<phone_no<<endl;
    }
};

class Employee : public Person
{
    public:
        int e_no;

        void setE()
        {
            cout<<"Enter employee id"<<endl;
            cin>>e_no;
        }

        void DisplayE()
        {
            cout<<"Id       : "<<e_no<<endl;
        }
};

class Manager : public Employee
{
    public:

        string designation;
        string department_name;
        float basic_salary;

        void setM()
        {
            cout<<"Enter designation"<<endl;
            getline(cin,designation);

            cout<<"Enter department"<<endl;
            getline(cin,department_name);

            cout<<"Enter Salary"<<endl;
            cin>>basic_salary;
        }

        void DisplayM()
        {
            cout<<"Designation  : "<<designation<<endl;
            cout<<"Department   : "<<department_name<<endl;
            cout<<"Salary       : "<<basic_salary<<endl;
        }
};

int main()
{
    int n,i,j;
    cout<<"how many manegers you want to enter"<<endl;
    cin>>n;
    
    Manager obj[100][6];
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < 6 ; j++)
        obj[i][j].setP();
        obj[i][j].setE();
        obj[i][j].setM();
    }

    cout<<"Details of Managers"<<endl;
    for(i = 0 ; i < n ; i++)
    {
        cout<<"-------------------------------------"<<endl;
        obj[i][j].DisplayP();
        obj[i][j].DisplayE();
        obj[i][j].DisplayM();
        cout<<"-------------------------------------"<<endl;
    }

}