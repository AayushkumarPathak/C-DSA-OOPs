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

};

int main(){
    LinkedList list;

    int n;
    cout<<"Enter size:";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter element: ";
        cin>>ele;
        list.insertFront(ele);
    }
    cout<<"Created Linkedlist: ";
    list.display();

    int val;
    cout<<"Enter the Value:";
    cin>>val;
    list.insertFront(val);
    cout<<"Final linked list: ";
    list.display();
    return 0;

}