#include<iostream>
using namespace std;

//using LinkedList

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    private:
    Node* head;

    public:
    Stack(){
        this->head = NULL;

    }
    bool isEmpty(){
        return head == NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(isEmpty()){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    int pop(){
        if(isEmpty()){
            return -1;
        }
        int top = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return top;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"Popped val "<<s.pop()<<endl;
    cout<<"Popped val "<<s.pop()<<endl;
    cout<<"Popped val "<<s.pop()<<endl;
    
    while(!s.isEmpty()){
        cout<<s.pop();
    }
    return 0;
}