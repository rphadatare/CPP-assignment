// Define a class Time to represent a time with instance variables h,m and s to store hour, 
// minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)

#include<iostream>
using namespace std;

class Time
{
    int h,m,s;

    public:
        void setTime(int H,int M,int S)
        {
            h = H;
            m = M;
            s = S;
        }

        void showTime()
        {
            cout<<h<<":"<<m<<":"<<s<<endl;
        }

        void normalize()
        {
            m = m + s / 60;
            s = s % 60;
            h = h + m / 60;
            m = m % 60;
        }

        Time add(Time c)
        {
            Time temp;
            temp.s = s + c.s;
            temp.m = m + c.m;
            temp.h = h + c.h;
            temp.normalize();
            return (temp);
        }
};

int main()
{
    Time t1,t2,t3;

    t1.setTime(4,52,50);
    t2.setTime(5,20,30);

    t3 = t1.add(t2);

    t1.showTime();
    t2.showTime();
    t3.showTime();

    return 0;
}