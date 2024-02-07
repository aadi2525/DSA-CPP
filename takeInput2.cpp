#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};

void print(node *head){
    while(head!= NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}

node* takeInput(){
    int data;
    cin>>data;

    node* head = NULL;
    node* tail = NULL;


    while(data!=-1){
    node *n = new node (data);
        if(head == 0){
            head = n;
            tail = n;
        }else{
            n->next = head;
            head=n;
        }
        cin>>data;

    }
    return head;
}


int length(node *head){
    int count =0;

    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

int main(){

    node* tail = takeInput();
    print(tail);
    cout<<endl;
    cout<<length(tail);

    return 0;
}