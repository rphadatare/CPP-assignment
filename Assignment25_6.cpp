//Define a class Square to find the square of a number and write a C++ program to 
//Count number of times a function is called.

#include<iostream>
using namespace std;

class Square
{
    int iNo,s;
    static int count;

    public:
        Square(int n)
        {
            iNo = n;
        }

        void Function()
        {
            count++;
            s = iNo * iNo;
        }

        void Print()
        {
            
            cout<<"Square of "<<iNo<<endl<<s<<endl;
            cout<<"Function call count = "<<count<<endl;
        }
};

int Square::count = 0;

int main()
{
    Square obj1(7);
    Square obj2(8);

    obj1.Function();
    obj2.Function();

    obj1.Print();
    //obj2.Print();
}