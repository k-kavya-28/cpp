// relation between two operands
//returns a boolean value-T/F
//Q. Input a number and tell whether it is equal to, greater than or less than 10.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    if(n>10)
    {
        cout<<"greater than 10"<<endl;
    }
    else if(n<10)
    {
        cout<<"less than 10"<<endl;
    }
    else
    {
        cout<<"equal to 10"<<endl;
    }
    return 0;
}