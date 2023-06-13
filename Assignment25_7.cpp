//Define a class Greatest and define instance member function to 
//find Largest among 3 numbers using classes

#include<iostream>
using namespace std;

class Greatest
{
    int iNo1,iNo2,iNo3;
    int Large_Number;

    public:
        Greatest(int n1,int n2,int n3)
        {
            iNo1 = n1;
            iNo2 = n2;
            iNo3 = n3;
        }

        void Find_Number()
        {
            Large_Number = (iNo1>iNo2) ? (iNo1>iNo3? iNo1 : iNo3) : (iNo2>iNo3? iNo2 : iNo3); 
        }

        void Print()
        {
            cout<<"Largest number  = "<<Large_Number<<endl;
        }
};

int main()
{
    Greatest a(7,32,450);
    a.Find_Number();
    a.Print();
}