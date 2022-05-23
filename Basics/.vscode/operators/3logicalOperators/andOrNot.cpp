//andOrNot is used to connect multiple conditions and Not is used to reverse a logical value
// we can use endl only with cout
//Q. WAP to output whether a number is divisible by both 2 and 3 or divisible by only one of them
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    if(n%2==0 && n%3==0)
    {
        cout<<"div by both 2 and 3"<<endl;
    }
    else if(n%2==2)
    {
        cout<<"div by 2 only"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"div by 3 only"<<endl;
    }
    else
    {
        cout<<"div by none";
    }
    return 0;
}