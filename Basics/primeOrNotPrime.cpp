//Given number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int N,div,temp;
    cout<<"Enter a number to check whether its prime or not:";
    cin>>N;
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
        {
            temp=1;
        }
        
    }
    if(temp==1)
    {
        cout<<"NOT PRIME";
    }
    else
    {
        cout<<"PRIME";
    }
    return 0;
}

