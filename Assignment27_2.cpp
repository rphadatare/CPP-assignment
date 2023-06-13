//Write a C++ program to overload unary operators that is increment and decrement

#include<iostream>
using namespace std;

class Unary_Operators
{
    int I;

    public:

        Unary_Operators()
        {
        
        }

        void set(int x)
        {
            I = x;
        }

        void operator++(void)
        {
            cout<<"Pre Increament"<<endl;
            I = ++I;
        }
        void operator++(int)
        {
            cout<<"Post Increament"<<endl;
            I = I++;
        }

        void operator--(void)
        {
            I = --I;
        }

        void operator--(int)
        {
            I = I--;
        }
    
        void Print()
        {
            cout<<" operator I = "<<I<<endl;
        }
};

int main()
{
    Unary_Operators a;
    a.set(5);

    ++a;
    cout<<"After Increament  ";
    a.Print();
    cout<<endl;

    a++;
    cout<<"After Decreament  ";
    a.Print();
    cout<<endl;

    return 0;

}