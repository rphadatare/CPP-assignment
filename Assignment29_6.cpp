// Create a Time class and take Duration in seconds. 
//Now you need to convert seconds(i.e int ) to Time class.
// Example-
// int main()
// {
//     int duration;
//     cout<<”Enter time duration in minutes”;
//     cin>>duration;
//     Time t1 = duration;
//     t1.display();
//     return 0;
// }

#include<iostream>
using namespace std;

class Time
{
    int hour;
    int min;

    public:

        Time()
        {
            cout<<"DC Time called"<<endl;
        }
        Time(int duration)
        {
            cout<<"PC Time called"<<endl;
            hour = duration/3600;
            min = (duration%3600)/60;
        }

        void Display()
        {
            cout<<"Hour = "<<hour<<" Min = "<<min<<endl;
        }
};

int main()
{
    int duration;
    cout<<"Enter time duration in minutes"<<endl;;
    cin>>duration;
    Time t1 = duration;
    t1.Display();
    return 0;
}