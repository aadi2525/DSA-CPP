#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        next=NULL;
    }
};

node* takeinput(){ 
      int data;
    cin>>data;

node* head = NULL;
node* tail = NULL;

while(data!=-1){
 node *n = new node(data);

if(head==NULL){
    head=n;
    tail = n;
}else{
tail->next =n;
tail=n;
}
cin>>data;
}
return head;
}



int length(node *tail){
    int count=0;
    while(tail!=NULL){
        count++;
        tail=tail->next;
    }
   return count;
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"*=*";
}

void ith(node* head,int i){
    // int n = length(head);
                                          //it gives more time complexity due to length fuction
    // if(i<0 || i>n-1){       
    //     cout<<"-1"<<endl;
    //     return;
    // }
    if(i<0){
        cout<<"-1"<<endl;
      return;
    }
    int count =1;
    while(count<=i && head!= NULL){      //head should exit or remove head condition and use abpve code
        head=head->next;
        count++;
    }if(head){
    cout<<head->data;
}else{
    cout<<"-1"<<endl;
      
}

}

int main(){
    node* head =takeinput();
    // length(head);
    cout<<endl;
    int i;
    cin>>i;
    print(head);
    cout<<endl;
    ith(head,i);
}
