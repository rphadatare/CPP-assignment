// Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
//     Time t1(2,30);
//     t1.display();
//     Minute m1;
//     m1.display();
//     m1=t1 // Fetch minute from time
//     t1.display();
//     m1.display();
//     return 0;
// }

#include<iostream>
using namespace std;

class Time
{
    int hour;
    int min;

    public:
        Time(int h,int m)
        {
            cout<<"PC Time called"<<endl;
            hour = h;
            min  = m;
        }

        void Display()
        {
            cout<<"Hour = "<<hour<<" Minute = "<<min<<endl;
        }

        int getH()
        {
            hour = hour * 60;
            return hour;
        }

        int getM()
        {
            return min;
        }
};

class Minute
{
    int m;

    public:
        Minute()
        {
            cout<<"DC Minute called"<<endl;
        }

        Minute(Time t)
        {
            cout<<"Minute(Time) called"<<endl;

            m = t.getH() + t.getM();
        }

        void Display()
        {
            cout<<"Minutes = "<<m<<endl;
        }


};

int main()
{
    Time t1(2,30);
    t1.Display();

    Minute m1;
    m1=t1;
    m1.Display();
   
    return 0;
}