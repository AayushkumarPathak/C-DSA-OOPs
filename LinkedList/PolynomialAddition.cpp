#include<iostream>
using namespace std;

class Node{
    int coff;
    int exp;
    Node* next;
    
    public:
    Node(int coff,int exp){
        this->coff = coff;
        this->exp = exp;
        this->next = NULL;
    }
};

class LinkedList{
    Node* head;

    LinkedList(){
        this->head = NULL;
    }

    void addLast(int coff,int exp){
        Node* newNode = new Node(coff,exp);
        if(head == NULL){
            head = newNode;
            return;
        }
    }
};