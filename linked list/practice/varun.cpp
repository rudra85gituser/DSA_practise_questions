#include<iostream>
using namespace std;
 
 class node {
    public: 
        int data;
        node *next;
 };

 class queue{
    public:
            int front,rear,capacity;
            int *array=nullptr;

    queue(int size){
            front=rear=-1;
            array=new int [size];
    }

    void enqueue(int num){
        if(rear=capacity-1){
            cout<<"queue is full";
        }
        else{
            if(front==-1){
                front=0;
            }array[++rear]=num;
        }
    }
 };

