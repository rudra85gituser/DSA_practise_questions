#include<iostream>
using namespace std; 

class node{
     public:
     int data;
     node *next;

     node(int d){
        this->data=d;
        this->next=NULL;
     }
};

void insertnode(node *&tail,int element ,int d){
 
 // empty list 
 if(tail==NULL){
    node * newnode=new node(d);
    tail=newnode;
    newnode->next=newnode;
 }
 else{
    // if there is one node 

    node * curr = tail;

    while(curr->data != element){
        curr = curr->next;
    }

    node*  temp = new node(d);
    temp->next=curr->next;
    curr->next=temp;
 }
      
}

void print(node *tail){
    node*temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);

    cout<<endl;

}

int main (){
   /* node *node1 = new node(10); */
   node *tail=NULL;

   insertnode(tail,5,8);
   insertnode(tail,8,5);
   print(tail);

}