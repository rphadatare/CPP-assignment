//Write functions using function overloading to add two numbers having different data types.

#include<iostream>
using namespace std;


int Addition(int iNo1,int iNo2)
{
    int Sum;
    Sum = iNo1 + iNo2;
    return Sum;
}

float Addition(float iNo1,float iNo2)
{
    float Sum;
    Sum = iNo1 + iNo2;
    return Sum;
}

float Addition(int iNo1,float iNo2)
{
    float Sum;
    Sum = iNo1 + iNo2;
    return Sum;
}


int main()
{
    int a,b,c;
    float x,y,z;
    float l;

    cout << "Enter two integers\n";
    cin >> a >> b;

    c = Addition(a, b);

    cout << "Sum of integers " << c << endl;

    cout << "Enter two float numbers\n";
    cin >> x >> y;

    z = Addition(x, y);

    cout << "Sum of floats " << z << endl;

    cout << "Sum of int and floats: " <<endl;
    l = c + z;

    cout << l ;

    return 0;
}