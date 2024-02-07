#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        next = NULL;
    }
};

void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head = head -> next;
    }
    cout<<"null";
}

 node* takeInput(){
    int data;
    cin>>data;

    node *head = NULL;
    node *tail = NULL;

    while(data!=-1){
        node *n = new node(data);

        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail -> next = n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}


void length(node *tail){
    int count=0;
    while(tail!=NULL){
        count++;
        tail=tail->next;
    }
    cout<<count;
}

int main(){
    node* head = takeInput();
    print(head);
    cout<<endl;
    length(head);

}