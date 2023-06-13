// Class Matrix 
// { int a[3][3]; 
// Public: //methods; 
// };
// Let m1 and m2 are two matrices. 
// Find out m3=m1+m2 (use operator overloading).

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

        Matrix operator+(Matrix m)
        {
            int tm[3][3];
            int i = 0,j = 0;
            
            for(i = 0; i<3; i++)
            {
                for(j = 0; j<3; j++)
                {
                    tm[i][j] = a[i][j] + m.a[i][j];
                }
                cout<<endl;
            }
            cout<<"Addition of two matrix :"<<endl;
            cout<<endl;
            for(i = 0; i<3; i++)
            {
                for(j = 0; j<3; j++)
                {
                    cout<<tm[i][j]<<"\t";
                }
                cout<<endl;
            }
            

        }
};

int main()
{
    Matrix m1,m2,m3;

    m1.Accept();
    m2.Accept();

    cout<<"First Matrix is :";
    m1.Display();

    cout<<"Second Matrix is :";
    m2.Display();

    m3 = m1 + m2;
    
    return 0;
}