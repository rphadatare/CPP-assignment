// Create a Product class and convert Product type to Item type using constructor
// int main()
// {
// Item i1;
// Product p1;
// p1.setData(3,4);
// i1=p1;
// return 0;
// }

#include<iostream>
using namespace std;

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
};

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
        Item(Product p)
        {
            cout<<"Item(Product) called"<<endl;
            i = p.getx() + p.gety();
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