#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node * next;
    node * prev;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

class linkedlist {
    node * head ;
    public:
    
    linkedlist(){
        head=NULL;
    }

    void insertfrombeginning(int data){

        node * newnode = new node(data);
        if(!head){
            head=newnode;
        }
        else {
            
            head->prev=newnode;
            newnode->next=head;
            head=newnode;

        }

    }

    void insertfromtail(int data){
         node * newnode = new node(data);
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

    void insertatanyposition(int position,int data){
        node * newnode = new node(data);

        if(!head){
            head= newnode;
        }
        else if (position == 1) {
            return insertfrombeginning(data);  
        }
        else {
            node * temp = head;
            int count=0;
            while(count<position-1 && temp->next!=NULL ){
                temp=temp->next;
                count++;
            }

            newnode->next=temp->next;
            if(temp->next!=NULL){
                temp->next->prev=newnode;
            }
            temp->next=newnode;
            newnode->prev=temp;

            
        }

    
    }


    

    void display(){
        node * temp= head;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }

    


};

int main(){

    linkedlist list;
    
    int d;
    int position;
    cout<<"enter the values of linked list and enter -1 to end"<<endl;
    while(true){
        cin>>d;
        cout<<"enter the position"<<endl;
        cin>>position;
        if(d==-1){
            break;
        }
        list.insertatanyposition(position,d);
    }
    cout<<"your entered list is "<<endl;
    list.display();


}
