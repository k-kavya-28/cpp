#include<iostream>
using namespace std;
int main()
{
    int budget;
    cout<<"Enter budget:";
    cin>>budget;
    if(budget>2000 && budget<=5000)
    {
        cout<<"Rahul";
    }
    else if(budget>5000)
    {
        cout<<"Shubham";
    }
    else
    {
        cout<<"friends";
    }
    return 0;
}