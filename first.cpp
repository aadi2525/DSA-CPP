#include<bits/stdc++.h>
using namespace std;
 
 //created a node 
class node {
    public:  //very important to mention this
    int data; 
    node *next;   //given space for storng the address of next node

    node(int data){     //condtructor i automatically calls itself(mention if parameer is ther)
        this->data=data;
        next=NULL;
    }
};

void print (node *head){
    node *temp = head;    //createe a temp variable
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
};

//connecting five node


int main(){
    node n1(1); //created a node with parameter , 
    node *head = &n1;
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next = &n2; //addressing the secound node
    n2.next = &n3; //addressing the secound node
    n3.next = &n4; //addressing the secound node
    n4.next = &n5; //addressing the secound node

print(head);
print(head);


return 0;
}