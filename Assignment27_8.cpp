// Consider a class Matrix
// Class Matrix 
// { 
//     int a[3][3]; 
//     Public: //methods; 
// };
// Overload the - (Unary) should negate the numbers stored in the object.


#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3];

    public:
        void Accept()
        {
            int i = 0,j = 0;
            cout<<"Enter values in matrix ";
            cout<<endl;

            for(i = 0; i<3; i++)
            {
                for(j = 0; j<3; j++)
                {
                    cin>>a[i][j];
                }
            }
        }

        void Display()
        {
            int i = 0,j = 0;
            cout<<"Matrix is :";
            cout<<endl<<endl;

            for(i = 0; i<3; i++)
            {
                for(j = 0; j<3; j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }
        }

        void operator-()
        {
            int i = 0,j = 0;
        
            for(i = 0; i<3; i++)
            {
                for(j = 0; j<3; j++)
                {
                    a[i][j] = -a[i][j];
                }
                cout<<endl;
            }
        }
};

int main()
{
    Matrix m;
    m.Accept();
    m.Display();
    -m;
    m.Display();

    return 0;
}