#include<iostream>
using namespace std;

class Parent
{
    public:
    int x,y;
    
    void display()
    {
        cout<<"Inside Parent display"<<endl;
    }
};

class Child : public Parent
{
    public:
    int a,b;
    
    
};

int main()
{
    Parent obj;
    Child obj;
    
    obj.display();
    obj.display();
}