//do while loop will run once without the condition being checked
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:"; 
    cin>>n;
    do
    {
      cout<<"Enter n:"; 
      cin>>n; 
      cout<<n<<endl;
    } while (n>0);
    return 0;
}