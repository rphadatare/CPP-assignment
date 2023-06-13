// Define a class Person with instance members name and age. 
// Also define member functions setName(), setAge(), getName(), getAge(). 
// Now define class Employee by inheriting Person class. 
// In the Employee class define empid and salary as instance members.
//  Also define setEmpid, setSalary, getEmpid, getSalary.

#include <iostream>
#include<string>
using namespace std;

class Person
{
    public :

        string name;
        int age;

    void setName()
    {
        cout<<"Enter Name"<<endl;
        getline(cin,name);
    }

    void setAge()
    {
        cout<<"Enter Age"<<endl;
        cin>>age;
    }

    void getName()
    {
        cout<<"Name   : "<<name<<endl;
    }

    void getAge()
    {
        cout<<"Age    : "<<age<<endl;
    }
};

class Employee : public Person
{
    public :
        int id;
        float salary;
    
    void setId()
    {
        cout<<"Enter id"<<endl;
        cin>>id;
    }

    void setSalary()
    {
        cout<<"Enter salary"<<endl;
        cin>>salary;
    }

    void getId()
    {
        cout<<"Id     : "<<id<<endl;
    }

    void getSalary()
    {
        cout<<"Salary : "<<salary<<endl;
    }

    
};
int main()
{
    Person p;
    Employee e;
    
    p.setName();
    p.setAge();

    e.setId();
    e.setSalary();

    p.getName();
    p.getAge();

    e.getId();
    e.getSalary();

    return 0 ;
}
