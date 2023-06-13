// Consider the following class mystring 
// Class mystring 
// { 
//    char str [100]; 
//    Public: // methods 
// };
// Overload operator “!” to reverse the case of each alphabet in the string 
// (Uppercase to Lowercase and vice versa).

#include<iostream>
using namespace std;

class Mystring
{
    char str[100];

    public:
        void Accept()
        {
            cout<<"Enter string"<<endl;
            cin>>str;
            cout<<endl<<endl;
        }

        void Display()
        {
            cout<<"String is :"<<endl;
            cout<<str;
            cout<<endl<<endl;   
        }

        void operator!()
        {
            int i;
            for(i = 0; str[i] != '\0' ; i++)
            {
                if(str[i]>=65 && str[i]<=90)
                {
                    str[i] = str[i]+32;
                }
                else if(str[i]>=97 && str[i]<=122)
                {
                    str[i] = str[i]-32;
                }
            }
            cout<<"Reverse string is :"<<endl;
            cout<<str;
        }
};

int main()
{
    Mystring s;
    s.Accept();
    s.Display();
    !s;

    return 0;
}

