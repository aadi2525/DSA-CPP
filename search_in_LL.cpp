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

bool ispresent(node* head,int data){
    node* curr = head;
while(curr!=NULL){
    if(curr->data == data){
        return true;
    }else{
       curr= curr->next;
    }
}
return false;
}

//recursive search
bool recursive_search(node* head,int data){
    if(head==NULL) return false;
    if(head->data== data) return true;

    return recursive_search(head->next,data);
}



int main(){
    node* head = takeINput();
    printall(head);
 if( recursive_search(head,100)){
    cout<<" found " << endl;
 }else{
    cout<<"not found" <<endl;
 }
 return 0;
}