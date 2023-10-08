#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
Node* head = nullptr;


void insertAtHead(int data){
    Node* newNode = new Node(data);

    if(head == nullptr){
        head = newNode;
        return;
    }
    
    newNode->next = head;
    head = newNode;

    
}
void printLL(){
    Node* currNode = head;
    while(currNode!=nullptr){
        cout<<currNode->data<<" -> ";
        currNode = currNode->next;
    }
    cout<<"NULL";
}
int main(){
    
    insertAtHead(10);
    insertAtHead(11);
    printLL();
    return 0;
}