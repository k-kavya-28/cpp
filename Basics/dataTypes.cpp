#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    bool d;
    double e;
    //type modifiers-signed,unsigned,long,short 
    //float-7 decimal places, double-15 decimal places
    a=1;
    b=2.77888;
    c='s';
    d=0;
    e=1.23456786727;
    cout<<"Size of "<<a<<" is : "<<sizeof(a)<<endl;
    cout<<"Size of "<<b<<" is : "<<sizeof(b)<<endl;
    cout<<"Size of "<<c<<" is : "<<sizeof(c)<<endl;
    cout<<"Size of "<<d<<" is : "<<sizeof(d)<<endl;
    cout<<"Size of "<<e<<" is : "<<sizeof(e)<<endl;

    return 0;
}