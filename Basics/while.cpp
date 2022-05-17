//difference btw for and while is that in case of for loop we have definite no of cases 
//whereas in while the loop continues till the condition is true
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    while(n>0)
    {
        cout<<n<<endl;
        cout<<"Enter n:";
    }
    return 0;
}