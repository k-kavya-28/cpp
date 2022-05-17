#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    cout<<"Enter N:";
    cin>>N;
    cout<<"The prime numbers till " <<N<<" are:";
    for(i=2;i<=N;i++)
    {
        int temp =0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                temp=1;
            }
        }
        if(temp!=1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}