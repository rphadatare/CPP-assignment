//Define a class StaticCount and create a static variable. 
//Increment this variable in a function and call this 3 times and display the result

#include<iostream>
using namespace std;

class StaticCount
{
    static int Count;

    public:
        void Call()
        {
            Count++;
            cout<<"Inside call function = "<<Count<<endl;
        }

        void Display()
        {
            cout<<"Static variable count = "<<Count<<endl;
        }
};

int StaticCount::Count = 0;

int main()
{
    StaticCount obj1,obj2,obj3;
    obj1.Call();
    obj2.Call();
    obj3.Call();

    obj1.Display();


}