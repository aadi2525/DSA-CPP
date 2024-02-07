#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        next=NULL;
    }
};

node* takeinput(){
    int data;
    cin>>data;

node *head = NULL;
node *tail = NULL;


    while(data!=-1){
        node*  n =new node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }else{
            tail->next = n;
            tail=n;
        }
        cin>>data;

    }
    return head;
} 



// int length(node* tail){
//     int count=0;
//     while(tail!=NULL){
//         count++;
//         tail=tail->next;
//     }return count;
// }

node* insert(node* head,int i,int data){
if(i<0){
    return head;
}
if(i==0){
    node *n = new node(data);
    n->next=head;
    head = n;
    return head;
}
int count =1;
while(count<=i-1 && head!=NULL){
     head=head->next;
    count++;
}
if(head){
    node* n = new node(data);
    n->next = head->next;
    head->next=n;
    return head;
}
    return head;
}

void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head = head -> next;
    }
    cout<<"null";
}

int main(){
    // int i ,data;
    node* head = takeinput();
  head =   insert(head,1,200);
    cout<<endl;
    print(head);

    return 0;

}