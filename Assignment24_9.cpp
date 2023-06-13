//Write functions using function overloading to find a maximum of two numbers and both 
//the numbers can be integer or real.

#include<iostream>
using namespace std;

class Maximum
{
    public:

        int Integer(int iNo1,int iNo2)
        {
            if(iNo1<iNo2)
            {
                cout<<iNo2<<" is max number"<<endl;
            }
            else
            {
                cout<<iNo1<<" is max number"<<endl;
            }
        }
        float Real(float iNo1,float iNo2)
        {
            if(iNo1<iNo2)
            {
                cout<<iNo2<<" is max number"<<endl;
            }
            else
            {
                cout<<iNo1<<" is max number"<<endl;
            }
        }
};
int main()
{

    Maximum obj;
    obj.Integer(27,50);
    obj.Real(-3.78,-5.35);

}