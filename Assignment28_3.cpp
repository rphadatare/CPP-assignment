//Overload subscript operator [] that will be useful when we want to check for an index out of bound.


#include<iostream>
using namespace std;

class Array
{
    int Arr[10];
    const int Size = 10;
    public:
        Array()
        {
            
        }
        void Set_Array(int n,int index)
        {
            if(index >= Size)
            {
                cout<<"Array index out of bound exception"<<endl;
                exit(0);
            }
            Arr[index] = n;
        }

        void Display(int index)
        {
            cout<<Arr[index]<<endl;
        }

        int operator[](int index)
        {
            if(index >= Size)
            {
                cout<<"Array index out of bound exception"<<endl;
                exit(0);
            }
            return Arr[index];
        }
};

int main()
{
    Array a;
    a.Set_Array(70,3);
    a.Display(3);
    cout<<a[3];

    return 0;
}