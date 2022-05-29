#include<iostream>
using namespace std;

struct node
    {
        int data;
        node* next;
        node* prev;

        node(int val)
        {
            next = NULL;
            prev = NULL;
            data = val;
        }
    };

void print(node* &head){
    node* temp;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

void add(node*head,int val)
{
    node* temp =head;

    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = new node(val);
}

int main()
{
    node* head=new node(1);
    int n;
    // cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++){
    int x;cin>>x;
    add(head,x); 
    }
    print(head);
    return 0;
}