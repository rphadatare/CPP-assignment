//Write a C++ program to accept an email address and throw an 
//exception if it does not contain @ symbol.

#include<iostream>
using namespace std;


bool CheckEmail(char* mail)
{
    for(int i = 0 ; mail[i] != '\0' ; i++)
    {
        if(mail[i] == '@')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    char mail[50];
    bool Ret = 1;

    cout<<"Enter email id \n";
    gets(mail);

    try
    {
        if(CheckEmail(mail))
        {
            cout<<"Email-Id is valid "<<endl;
        }
        else
        {
           throw 'e';
        }
    }
    catch(const char e)
    {
        cout<<"\n Exception catch \n Invalid Email-Id"<<endl;
    }
    
    return 0;
}