// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of 
// instance member variables and also define instance member functions to set 
// values for time and display values of time.

#include<iostream>
using namespace std;

class Time
{
    int H;
    int M;
    int S;

    public :
    Time(int h,int m,int s)
    {
        H = h;
        M = m;
        S = s;
    }

    void Print()
    {
        cout<<H<<":"<<M<<":"<<S<<endl;
    }


};

int main()
{
    Time a(2,30,45);

    a.Print();

}