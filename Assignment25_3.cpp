//Define a class Factorial and define an instance member function to 
//find the Factorial of a number using class.

#include<iostream>
using namespace std;

class Factorial
{
    int iFact;
    int iNo;

    public:

        Factorial(int n)
        {
            iNo = n;
        }
        
        void Find_Factorial()
        {
            iFact = 1;
            for(int i = 1;i<=iNo;i++)
            {
                iFact = iFact * i;
            }
        }

        void print()
        {
            cout<<"Factorial = "<<iFact<<endl;
        }

};

int main()
{
    Factorial obj(9);
    obj.Find_Factorial();
    obj.print();
}