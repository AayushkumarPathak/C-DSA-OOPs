#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void addFirst(Node *&head, int data){
    Node *newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void addLast(Node* &head,int data){
    Node *newNode = new Node(data);
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

void printLL(Node* &head){
    Node *currNode = head;
    while (currNode != NULL){
        cout << currNode->data << "->";
        currNode = currNode->next;
    }
    cout <<"NULL";

    
}

int main(){

    Node *LL = new Node(10);
    Node *head = LL;
    // addFirst(head,12);
    addLast(head,11);  
    addLast(head,12);  
    printLL(head); 
    return 0;
}
