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
        if(budget>10000)
        {
            cout<<"Roadtrip with Shubham";
        }
        else
        {
            cout<<"Shopping with Shubham";
        }
    }
    else
    {
        cout<<"friends";
    }
    return 0;
}