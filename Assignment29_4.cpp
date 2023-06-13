// Create Product class and convert Product type to Item type using casting operator
// int main()
// {
//      Item i1;
//      Product p1;
//      p1.setData(3,4);
//      i1=p1;
// r    return 0;
// }

#include<iostream>
using namespace std;

class Item
{
    int i;

    public:
        void Display()
        {
            cout<<"i = "<<i<<endl;
        }
        Item()
        {
            cout<<"DC called item"<<endl;
        }  
        Item(int x)
        {
            cout<<"PC called item"<<endl;
            i = x;
        }
};
class Product
{
    int x;
    int y;

    public:
        Product(int a,int b)
        {
            cout<<"PC called product"<<endl;
            x = a;
            y = b;
        }

        void Display()
        {
            cout<<"x = "<<x<<" y = "<<y<<endl;
        }

        int getx()
        {
            return x;
        }

        int gety()
        {
            return y;
        }

        operator Item()
        {
            cout<<"operator Iteam called"<<endl;
            Item i(x+y);
            return i;
        }
};

int main()
{
    Product p1(3,4);
    Item i1;
    i1=p1;
    p1.Display();
    i1.Display();
    return 0;
}