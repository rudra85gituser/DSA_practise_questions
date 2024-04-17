#include<iostream>
using namespace std;

// use to create node
class node{
    public:
    int data;
    node * next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

// use to create linkedlist

class linkedlist{
    public:
    node * head;
    linkedlist(){
        head=NULL;
    }

    void insertnodefromback(int d){
        node * newnode = new node(d);
        if(!head){
            head=newnode;
        }
        else{
            node * temp = head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=newnode;
        }

    }

    void insertfrombeginning(int d){
        node * newnode = new node(d);
        if(!head){
            head=newnode;
        }
        else{
            node * temp = newnode;
           temp->next=head;
           head=newnode;
        }

    }

    void insertatanyposition(int d){
      int position;
      cout<<"enter the position where you want to enter"<<d<<endl;
      cin>>position;
      node * newnode =new node(d);
node * temp=head;
      if(!head){
            head=newnode;
        }
        else{
            
            int count=0;
            while(count<position-1){
                temp=temp->next;
            }
           newnode->next=temp->next;
           temp->next=newnode;
            
        }

      if(position==1){
        insertfrombeginning(d);
      }

      if(temp->next=NULL){
         insertnodefromback( d);
      }


    }

    void display (){
        node * temp = head;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }

};

int main(){

    linkedlist list;
    int d;
    cout<<"enter the values of linked list and enter -1 to end"<<endl;
    while(true){
        cin>>d;
        if(d==-1){
            break;
        }
        list.insertfrombeginning(d);
    }
    cout<<"your entered list is "<<endl;
    list.display();


}