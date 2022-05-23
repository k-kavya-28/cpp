#include<iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout<<"enter operator:";
    cin>>op;
    cout<<"enter a and b:";
    cin>>a>>b;
    switch (op)
    {
        //fall through effect
        case '+':cout<<"sum is:"<<a+b<<endl;break;
        case '-':cout<<"diff is:"<<a-b<<endl;break;
        case '*':cout<<"prod is:"<<a*b<<endl;break;
        case '/':cout<<"div is:"<<a/b<<endl;break;
        default:break;
    }
    return 0;
}