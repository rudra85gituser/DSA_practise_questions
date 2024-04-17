#include<iostream>
using namespace std ;

class node{
    public:
    int data;
    node * next;
    node * prev;

    node(int d){
        this->prev=NULL;
        this->data=d;
        this->next=NULL;
    }
};

class linkedlist{
    public:
    node * head;
    linkedlist(){
        head=NULL;
    }

    void insertathead(int d){
        node * newnode = new node(d);
        if(!head){
            head=newnode;
        }
        else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        }
        

    }

    void insertatend(int d){
        node * newnode = new node (d);
        if(!head){
            head=newnode;
        }
        else{
            node * temp = head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;

        }
    }

    void insertatanyposition(int position,int d){
        node * newnode = new node(d);
        if(!head){
            head=newnode;
        }
        else if (position == 1){
            insertathead(d);
            return;
        }
        
       else{
        node * temp = head;
        int count=1;
        while(count<=position-1 && temp->next){
            temp=temp->next;
            count++;

        }

        newnode -> next = temp ->next;
         if (temp->next) {
                temp->next->prev = newnode;
            }
        newnode->prev=temp;
        temp->next=newnode;
       }
    }

  /*   void deleleathead(){
        if(!head){
            cout<<"nothing to delete"<<endl;
            return;
        }
        else{
            node * temp = head;
            head=temp->next;
            delete temp;
        }
    } */

    void deleteatend(){
        if(!head){
            cout<<"nothing to delete"<<endl;
        }
        else if(!head->next){
            delete head;
            head = NULL;
        }
        else{
            node * temp = head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->prev->next=temp->next;
            delete temp;
        }
    }

    void print(){
        node * temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }


    
};

int main(){
    linkedlist list;
    int d;
    int position;
    while(true){
        cout<<"enter the number - ";
        cin>>d;
        
        if(d==-1){
            break;
        }
        /* cout<<"enter the position - ";
        cin>>position; */
        list.insertathead(d);
        
        cout<<endl;
    }
list.print();
    cout<<"now we are start deleting the element"<<endl;
    int del;
    while(true){
      cout<<"enter the element to delete (-1 to stop)";
      cin>>del;
      if(del==-1){
        break;
      }
      list.deleteatend();
      list.print();
    }
    
    
}