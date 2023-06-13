//Define a class Area and define instance member functions to find the 
//area of the different shapes like square, rectangle , circle etc.


#include<iostream>
using namespace std;

 class Area
 {
    int r,l,b,h;
    int Square;
    int Rectangle;
    float Circle;

    public:
        Area()
        {

        }

        void Area_Square(int l)
        {
            Square = l * l;
        }

        void Area_Rectangle(int b,int h)
        {
            Rectangle = b * h;
        }

        void Area_Circle(int r)
        {
            Circle = 3.14 * r * r;
        }

        void Print()
        {
             cout<<"Area of the square = "<<Square<<endl;
              cout<<"Area of the rectangle = "<<Rectangle<<endl;
               cout<<"Area of the circle = "<<Circle<<endl;
        }
 };

 int main()
 {
    Area obj;
    
    obj.Area_Square(5);
    obj.Area_Rectangle(5,7);
    obj.Area_Circle(8);
    obj.Print();


    return 0;
 }