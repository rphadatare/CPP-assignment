// Create a Dollar class and add necessary functions to support int to Dollar type conversion.
// Example-
// int main()
// {
//     int x = 50;
//     Dollar d;
//     d = x;
//     d.display();
//     return 0;
// }

#include<iostream>
using namespace std;

class Dollar 
{
    private:
        int dollars;
    public:
        Dollar() 
        {
            dollars = 0;
        }
        Dollar(int amt) 
        {
            dollars = amt / 82;
        }
        void display() 
        {
            cout << "$" << dollars <<endl;
        }
        operator int()  
        {
            return dollars * 100;
        }
};

int main() 
{
    int x = 80;
    Dollar d;
    d = x;
    d.display();
    return 0;
}

