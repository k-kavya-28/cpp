// continue is used to skip to the next iteration
//inside the loop if continue is encountered,no statement is executed after that 
#include<iostream>
using namespace std;
int main()
{
    int pocketmoney = 3000;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        if(pocketmoney==0)
        {
            break;
        }
        cout<<"YAYY ! YOU CAN GO OUT TODAY."<<endl;
        pocketmoney-=300;
    }
    return 0;
}