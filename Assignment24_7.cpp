//Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;

class Addition
{
    public:

        int Add(int iNo1,int iNo2 = 0,int iNo3 = 0)
        {
            int Ans;
            Ans = iNo1 + iNo2 + iNo3;
            return Ans;
        }
};

int main()
{
    Addition obj;
    int Ret = 0;
    
    Ret = obj.Add(10,20);
    cout<<Ret<<endl;

    Ret = obj.Add(10,20,30);
    cout<<Ret<<endl;

    return 0;
}