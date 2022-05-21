//switch is substitute for long if else statements
//in switch we use a variable which is matched with different cases 
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a char:";
    cin>>ch;
    // if(ch=='a')
    // {
    //     cout<<"hello"<<endl<<endl;
    // }
    // else if(ch=='b')
    // {
    //     cout<<"namaste"<<endl;
    // }
    // else if(ch=='c')
    // {
    //     cout<<"salut"<<endl;
    // }
    // else if(ch=='d')
    // {
    //     cout<<"hola"<<endl;
    // }
    // else if(ch=='e')
    // {
    //     cout<<"ciao";
    // }
    // else
    // {
    //     cout<<"i am still learning more";
    // }
    switch(ch)
    {
        case 'a':cout<<"hello"<<endl;
        break;
        //if we don't use break then all the statements will get executed from the matched case
        case 'b':cout<<"namaste"<<endl;
        break;
        case 'c':cout<<"salut"<<endl;
        break;
        case 'd':cout<<"hola"<<endl;
        break;
        case 'e':cout<<"ciao"<<endl;
        break;
        default:cout<<"i am still learning more"<<endl;
    }
    return 0;
}