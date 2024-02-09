#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        next =NULL;
    }
};

node* takeInput(){
    int data;
    cin>>data;

    node* head =NULL;
    node* tail =NULL;

    while(data!=-1){
        node* n = new node(data);

        if(head==NULL){
            head=n;
            tail=n;
        }else{
            tail->next=n;
            tail=n;
        }
        cin>>data;

    }
    return head;
}

int length(node* head){
    int count;
    while(head!=NULL){
        count++;
        head->next = head;
    }
    return count;
}

void print(node* head){
    while(head!= NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

node* deleat_ITH(node* head,int i){
    if(i<0){
        return head;
    }
    if(i==0 && head){
        return head->next;
    }
    int count =1;
    node* curr = head;
    while(count<=i-1 && curr!=NULL){
        curr=curr->next;
        count++;
    }

    if(curr && curr->next){
        curr->next = curr->next->next;
        return head;
    }
    return head;
}

int main(){
    node* head = takeInput();
    // cout<<length(head)<<endl;
    deleat_ITH(head,1);
    print(head);

}