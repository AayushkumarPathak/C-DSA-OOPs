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
class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        this->head = nullptr;
    }
    void addFirst(int data){
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
        if(head == nullptr){
            cout<<"LinkedList is empty!";
            return;
        }
        while(currNode!=nullptr){
            cout<<currNode->data<<" -> ";
            currNode = currNode->next;
        }
        cout<<"NULL"<<endl;
    }

    void insertAtPos(int pos,int data){
        if(pos == 1){
            addFirst(data);
            return;
        }
        int count = 1;
        Node* curNode = head;
        while(count<pos){
            curNode = curNode->next;
            count++;
        }
        Node* valNode = new Node(data);
        valNode->next = curNode->next;
        curNode->next = valNode;
    }
};

int main(){
    LinkedList list1;

    list1.addFirst(1);
    list1.addFirst(2);
    list1.addFirst(3);

    list1.printLL();

    list1.insertAtPos(1,21);
    list1.printLL();

}