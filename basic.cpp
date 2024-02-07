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

int main(){
    node n1(1); //created a node with parameter , 
    node n2(2);

    n1.next = &n2; //addressing the secound node

cout<<n1.data <<" "<<n2.data <<endl;


return 0;
}