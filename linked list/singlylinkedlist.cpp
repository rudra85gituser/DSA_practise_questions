#include<iostream>
using namespace std;

class node {
    public:

    int data;
    node*next;

    node(int data){
        this -> data=data;
        this -> next = NULL;
    }

    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }

        cout<<"memory deleted is free"<<value<<endl;
    }


};



//insert at head 



void insertathead(node * &head , int d){

    node * temp=new node(d);
    temp->next=head;
    head=temp;

}



//insert at tail 



void insertattail(node * &tail ,int d){
    node * temp=new node(d);
    tail->next=temp;
    tail = tail->next;
}



  //insertion at random place 



void atrandom(int position ,node * &head, int d){
    node *temp=head;
    int count=1;
   while(count<position-1){
    temp=temp->next;
    count++;
   }
//creating new node for inserting 
    node * nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

    if(position==1){
        insertathead(head,d);
        return;
    }

    if(temp->next==NULL){
insertattail( head ,d);
return;
    }

}

//deletion in linked list 

void deletion(int position,node * &head){
    

    if(position ==1){
        node * temp = head;
        head=head->next;

        // memory free start node
        temp->next =NULL;
        delete temp;

      
    }
    
    else{
    node * curr =head;
    node * prev =NULL;
    int count = 1;

    while(count< position){
      prev = curr;
      curr = curr->next;
      count++; 
    }

    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
}


// printing linked list 


void print(node * &head){
    node * temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node * node1 = new node(10);
   /*  cout<< node1 -> data << endl;
    cout<< node1  -> next <<endl; */

    node*head =node1;
    node*tail=node1;

    print(head);
    print(head);

    insertathead(head,15);
    print(head);

    insertattail(tail,22);
    insertattail(tail,28);
    print(head);

    atrandom(0,head,88);
  
    print(head);

    deletion(3,head);
    deletion(5,head);
    deletion(6,head);
    
    print(head);
    print(head);


    
}