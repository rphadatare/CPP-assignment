//Create a student class and overload new and delete operators outside the class.

#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

class Student
{
    string Name;
    int Roll_No;

    public:
        Student()
        {
            
        }
        Student(string Name,int Roll_No)
        {
            this->Name = Name;
            this->Roll_No = Roll_No;
        }

        void Display()
        {
            
            cout<<"Student Name : "<<Name<<endl;
            cout<<endl;
            cout<<"Roll Number  : "<<Roll_No<<endl;
            cout<<endl;
        }
};

void *operator new(size_t size)
{
    cout<< "Overloading new operator with size: " << size << endl;
    void *ptr = malloc(size);
    return ptr;
}

void operator delete(void *ptr)
{
    cout<< "Overloading delete operator " << endl;
    free(ptr);
}

int main()
{
    Student *ptr = new Student("ABCD",32);
    int *ptr1 = new int;
    
    ptr->Display();

    delete ptr;

    return 0;
}