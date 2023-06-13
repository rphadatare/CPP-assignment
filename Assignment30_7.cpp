//Write a C++ program to accept a username 
//if the username has less than 6 characters or does contain any digit or special symbol.

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    int i=0,count=0;

    cout<<"Enter username "<<endl;
    cin>>s;
    
    for(i = 0; s[i] != '\0' ;i++)
    {
        count++;
    }

    try
    {
        
        if(count <= 6)
        {
            throw 1;
        }
    }

    catch(int c)
    {
        if(c == 1)
        {
            cout<<"Username has less than 6 characters"<<endl;
        }
    }

    return 0;
}