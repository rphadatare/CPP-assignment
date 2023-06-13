//  Create a class Time which contains:
//  - Hours
//  - Minutes
//  - Seconds
//  Write a C++ program using operator overloading for the following:
//  1. = = : To check whether two Times are the same or not. 
//  2. >> : To accept the time.
//  3. << : To display the time.


#include<iostream>
using namespace std;

class Time
{
    private:
        int hours;
        int minutes;
        int seconds;
    
    public:
        Time()
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        
        friend istream& operator>>(istream& input, Time& t)
        {
            cout << "Enter hours: ";
            input >> t.hours;
            cout << "Enter minutes: ";
            input >> t.minutes;
            cout << "Enter seconds: ";
            input >> t.seconds;
            return input;
        }
        
        friend ostream& operator<<(ostream& output, const Time& t)
        {
            output << "Time: " << t.hours << ":" << t.minutes << ":" << t.seconds << endl;
            return output;
        }
        
        bool operator==(const Time& t) const
        {
            return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
        }
};

int main()
{
    Time t1, t2;
    cin >> t1;
    cin >> t2;
    
    if(t1 == t2)
    {
        cout << "Times are the same." << endl;
    }
    else
    {
        cout << "Times are different." << endl;
    }
    
    cout << t1;
    cout << t2;
    
    return 0;
}
