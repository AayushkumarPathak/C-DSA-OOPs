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

void addLast(int data)
{
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* currNode = head;
    while(currNode->next!=nullptr){
        currNode = currNode->next;

    }
    currNode->next = newNode;
}

void printLL(){
    Node* currNode = head;
    if(head == nullptr){
        cout<<"Linked list is empty."<<endl;
    }
    if(head!=nullptr){
        while(currNode!=nullptr){
            cout<<currNode->data<<" -> ";
            currNode = currNode->next;
        }
        cout<<"NULL";
    }
    
}

int main(){
    int n;
    cout<<"Enter the number of elements to add: ";
    cin>>n;
    head = nullptr;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter element: ";
        cin>>ele;

        addLast(ele);
    }
    cout<<"Congratulations Your Linked List is "<<endl;
    printLL();
}