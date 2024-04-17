#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;
   
   node(int d){
    this -> data =d;
    this-> prev =NULL;
    this-> next =NULL;
   }
};

// inserting at front
void insertatfront(node * &head,int d){
    node * temp = new node(d);
    head->prev=temp;
    temp->next=head;
    head=temp;

}

//inserting at tail 
void insertattail(node * &tail ,int d){
    node * temp =new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}

//inserting at random 

void insertatposition(node* tail, node * head,int position,int d){
   node *temp=head;
   int count=1;
   while(count<position-1){
    temp=temp->next;
    count++;
   }

   node* nodetoinsert =new node (d);
   nodetoinsert->next=temp->next;
   temp->next->prev=nodetoinsert;
   temp->next=nodetoinsert;
   nodetoinsert->prev=temp;

   if(position==1){
    insertatfront(head,d);
    return;
   }

   if(temp->next==NULL){
    insertattail(tail,d);
    return;
   }
}



// to print linked list

void print(node* head){
    node* temp= head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

// to get length

int getlength(node* head){
    int len=0;
     node* temp= head;
    while(temp != NULL){
       len++;
        temp=temp->next;
    }

    return len;
}


int main(){

    node* node1 =new node(10);
    node* head=node1;
    node* tail=node1;
    print(head);

   // inserting at front

    insertatfront(head,15);
    insertatfront(head,20);
    insertatfront(head,92);
    print(head);

    // inserting at tail 

    insertattail(tail,42);
    insertattail(tail,48);
    insertattail(tail,49);
    print(head);

    //inserting at random place 

    insertatposition(tail,head,5,78);
    insertatposition(tail,head,4,65);
    insertatposition(tail,head,2,28);
    print(head);





    cout<<getlength(head)<<endl;

}