// Write a C++ program to perform arithmetic operations on two numbers and 
// throw an exception if the dividend is zero or does not contain an operator.

#include<iostream>
using namespace std;

float Test(float No1,float No2)
{
    char sign;
    float R;

    cout<<"Enter operator sign "<<endl;
    cin>>sign;
    try
    {
        if(sign!='+' && sign!='-' && sign!='*' && sign !='/')
        {
            throw sign;
        }

        switch (sign)
        {
            case '+':
            {
                R = No1 + No2;
                return R;
                break;
            }

            case '-':
            {
                R = No1 - No2;
                return R;
                break;
            }

            case '*':
            {
                R = No1 * No2;
                return R;
                break;
            }

            case '/':
            {
                if(No2 == 0)
                {
                    throw 0;
                }
                R = No1 / No2;
                return R;
                break;
            }
        }
    }

    catch(const char ch)
    {
        cout<<"Invalid input of operator "<<ch<<endl;
    }  
    catch(const int i)
    {
        cout<<"Number in dividend operator is zero"<<endl;
        cout<<"Change No2 in dividend operator"<<endl;
    } 

     
}
int main()
{
    float No1,No2,R;

    cout<<"Enter value :"<<endl;
    cin>>No1>>No2;

    Test(No1,No2);
    cout<<"Result = "<<R<<endl;

    return 0;
}