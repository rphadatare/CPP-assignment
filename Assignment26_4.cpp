//Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;

class Counter
{
    public:
        static int Count;
        int a,b;

    public:
    
        Counter()
        {
            Count++;
            cout<<"Inside default constructor"<<endl;
        }

        void Function(int a,int b)
        {
            cout<<a<<" "<<b<<endl;
            cout<<"Inside function"<<endl;
        }

        void show()
        {
            cout<<"Inside show "<<endl;
            cout<<"Count = "<<Count<<endl;
        } 
};

int Counter::Count = 0;

int main()
{
    Counter obj1;
    obj1.show();
    cout<<endl;

    Counter obj2;
    cout<<"enter values"<<endl;
    cin>>obj2.a>>obj2.b;
    obj2.show();
    cout<<endl;

    Counter obj3;
    obj3.Function(8,9);
    obj3.show();
    cout<<endl;

    Counter obj4;

    return 0;
}