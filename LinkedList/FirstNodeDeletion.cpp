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
    //destructor
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(){
        this->head = NULL;
    }

    void insertFront(int data){
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void display(){
        Node* currNode = head;
        if(head==nullptr){
            cout<<"LinkedList is empty!";
        }
        while(currNode!=nullptr){
            cout<<currNode->data<<" -> ";
            currNode = currNode->next;
        }
        cout<<"NULL"<<endl;

    }
    void deleteFirst(){
        Node* currNode = head;
        if(head == NULL){
            return;
        }
        head = currNode->next;

        
    }
};

int main(){
    LinkedList list;
    list.insertFront(1);
    list.insertFront(2);
    list.insertFront(3);
    list.insertFront(4);
    cout<<"Before deletion:";
    list.display();

    list.deleteFirst();
    cout<<"After deletion:";
    list.display();

}

