#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void addFirst(int data){
         Node* newNode = new Node(data);
         size++;
         if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        
    }

    

    

    void printLL(){
        Node* curr = head;
        while(curr!=NULL){
            cout<<curr->data<<" <-> ";
            curr = curr->next;
        }
        cout<<"NULL"<<endl;
    }
    void reverse(){
        Node* curr = head;
        Node* prev = NULL;
        Node* nxt;
        while(curr!=NULL){
            nxt = curr->next;
            curr->next = prev;
            curr->prev = nxt;
            prev = curr;
            curr = nxt;
        }
    }

    int getSize(){
        return size;
    }

};

int main(){
    LinkedList dll;

    dll.addFirst(3);
    dll.addFirst(2);
    dll.addFirst(1);
    dll.printLL();
    cout<<"Size: "<<dll.getSize()<<endl;

    dll.reverse();
    dll.printLL();
    


    return 0;
}