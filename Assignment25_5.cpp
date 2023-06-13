//Define a class ReverseNumber and define an instance member function to 
//find Reverse of a Number using class.

#include<iostream>
using namespace std;

class Reverse_Number
{
    int iNo;
    int Rev;

    public:

        Reverse_Number(int n)
        {
            iNo = n;
        }

        void Reverse()
        {
            int Digit = 0;

            while(iNo!=0)
            {
                Digit = iNo % 10;
                Rev = Rev * 10 + Digit;
                iNo = iNo / 10;
            }
            cout<<"Reverse_Number is "<<Rev<<endl;
        }

        
};

int main()
{
    Reverse_Number obj(789);
    obj.Reverse();
    
}