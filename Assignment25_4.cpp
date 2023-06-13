//Define a class LargestNumber and define an instance member function to 
//find the Largest of three Numbers using the class.

#include<iostream>
using namespace std;

class Largest_Number
{
    int iNo1,iNo2,iNo3;
    int Large_Number;

    public:
        Largest_Number(int n1,int n2,int n3)
        {
            iNo1 = n1;
            iNo2 = n2;
            iNo3 = n3;
        }

        void Find_Number()
        {
            Large_Number = (iNo1>iNo2) ? (iNo1>iNo3?iNo1:iNo3) : (iNo2>iNo3? iNo2 : iNo3); 
        }

        void Print()
        {
            cout<<"Largest number  = "<<Large_Number<<endl;
        }
};

int main()
{
    Largest_Number a(15,58,25);
    a.Find_Number();
    a.Print();
}