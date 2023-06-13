// Create a Rupee class and convert it into int. And Display it.
// Example-
// int main()
// {
// Rupee r = 10;
// int x = r;
// cout<<x;
// return 0;
// }

#include<iostream>
using namespace std;

class Rupee
{
    float R;

    public:
        Rupee(float r)
        {
            cout<<"PC called"<<endl;
            R = r;
        }

        void Display()
        {
            cout<<"Rupee = "<<R<<endl;
        }

        operator int()
        {
            cout<<"Operator int() called"<<endl;
            return R;
        }

};

int main()
{
    Rupee r = 10.45;
    r.Display();
    int x = r;
    cout<<x;

    return 0;
}