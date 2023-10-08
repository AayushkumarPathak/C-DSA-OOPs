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

class LinkedList{
    private:
    Node* head;
    
    public:
    LinkedList(){
        this->head = NULL;
    }
    
    void addFirst(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
        
    }
    
    void printLL(){
        Node* curr = head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    int n;
    cin>>n;
    while(n>0){
        ll.addFirst(n);
        cin>>n;
    }
    ll.printLL();
    return 0;
}