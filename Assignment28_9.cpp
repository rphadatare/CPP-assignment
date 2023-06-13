// Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.

#include<iostream>
using namespace std;

class Integer
{
    int x;

    public:
        Integer(int X)
        {
            x = X;
        }

        operator int()
        {
            return x;
        }
};

int main()
{
    Integer x = 30;

    int y = x;
    cout<<y<<endl;

    return 0;
}