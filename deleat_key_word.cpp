#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        next = NULL;
    }
};

node* takeIN(){
    int data;
    cin>>data;

    node* head = NULL;
    node* tail = NULL;
while(data!=-1){
    node *n = new node(data);
if(head==NULL){
    head=NULL;
    tail=NULL;
}else{
    tail->next=n;
    tail=n;
}

}

}