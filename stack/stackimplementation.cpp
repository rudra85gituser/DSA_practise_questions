#include<iostream>
using namespace std;

class stack{
    public:
    int * arr;
    int top;
    int size;

    stack (int size){
        // use to initialize each thing in stack 
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;

        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack empty"<<endl;
        }
    }

    bool isempty(){
        if(top>=0){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    stack st(5);
    st.push(55);
    st.push(52);
    st.push(95);
    st.push(25);

    st.pop();
    cout<<"your stack is :"<<st.peek()<<endl;


}