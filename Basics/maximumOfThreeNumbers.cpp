//maximum of three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter three numbers to find maximum:"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"\nThe greatest number is:"<<a;
        }
        else
        {
           cout<<"\nThe greatest number is:"<<c;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"\nThe greatest number is:"<<b;
        }
        else
        {
           cout<<"\nThe greatest number is:"<<c;
        }
    }
    return 0;
}
