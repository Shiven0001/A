#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Marks:";
    cin>>n;
    if (n>=81 and n<=100)
    {
        cout<<"Very Goood";
    }
    else if (n>=61)
    {   
    cout<<"Good";     
    }
    else if (n>=41)
    {   
    cout<<"Average";     
    }
    else 
    {   
    cout<<"Fail";     
    }
}