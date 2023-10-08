#include<iostream>
using namespace std;

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

    void push(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void pop(){
        // Node* currNode = head;

        if(head == NULL){
            cout<<"Stack underflow."<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;

    }

    void display(){
        Node* currNode = head;
        if(head == NULL){
            cout<<"Stack undeflow."<<endl;
            return;
        }
        while(currNode!=NULL){
            cout<<currNode->data<<" ";
            currNode = currNode->next;
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s.push(val);
    }
    s.pop();
    s.display();
    return 0;
}