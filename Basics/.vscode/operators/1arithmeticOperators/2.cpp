#include<iostream>
using namespace std;
int main()
{
    int i=1;
      //1   //3  //output will be 4
    i=i++ + ++i;
    cout<<i<<endl;
    return 0;
}