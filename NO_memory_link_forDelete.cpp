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

node* takeINput(){
    int data;
    cin>>data;

    node* head = NULL;
    node* tail = NULL;
    while(data!=-1){
        node *n = new node(data);

        if(head==NULL){
            head = n;
            tail = n;
        }else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}

void printall(node* head){
    while(head!=0){
        cout<<head->data<<" ";
       head= head->next;
    }
}

//recursive length fuction
int length(node* head){
    if(head == NULL) return 0;

    return 1 + length(head->next);
}



node* deleteIth(node* head,int i){
    if(i<0){
        return head;
    }
    if(i==0 && head){
        node* temp = head->next;
        delete head;
        return temp;

    }
    int count =1;
    node* curr = head;
    while(count<=i-1 && curr!=NULL){
        curr->next = curr;
        count++;
    }
    if(curr && curr->next){
        node* temp = curr->next;
        curr->next = temp->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
    return head;
}



int main(){

    node* head = takeINput();
    // deleteIth(head,1);
    // printall(head);

cout<<length(head);

    return 0;
}