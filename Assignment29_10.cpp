#include<iostream>
using namespace std;

class Rupee 
{
private:
    double value;
public:
    Rupee(double val) 
    {
        value = val;
    }
    double getValue() 
    {
        return value;
    }
    void setValue(double val) 
    {
        value = val;
    }
    void display() 
    {
        cout << "Rupee: " << value << endl;
    }
    operator Dollar(); // Rupee to Dollar conversion
};

class Dollar 
{
private:
    double value;
public:
    Dollar(double val) 
    {
        value = val;
    }
    double getValue() 
    {
        return value;
    }
    void setValue(double val) 
    {
        value = val;
    }
    void display() 
    {
        cout << "Dollar: " << value << endl;
    }
    operator Rupee(); // Dollar to Rupee conversion
};

Rupee::operator Dollar() 
{
    return Dollar(value / 82);
}

Dollar::operator Rupee() 
{
    return Rupee(value * 82);
}

int main() 
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
