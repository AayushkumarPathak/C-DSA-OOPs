#include<iostream>
using namespace std;

class Stack{
    private:
    int top;
    int *arr;
    int size;

    public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"Stack Overflow";
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }

    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};

int main(){
    Stack st(5);

    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);

    cout<<st.peek()<<endl;

    cout<<"Stack:";
    while(!st.isEmpty()){
        cout<<st.peek()<<"<-";
        st.pop();
    }
    cout<<endl;

    return 0;
}