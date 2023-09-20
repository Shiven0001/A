#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a No.";
    cin>>n;
    for(int i=4;i<=4*n+1;i+=3)
    {
        cout<<i<<" ";
    }
}