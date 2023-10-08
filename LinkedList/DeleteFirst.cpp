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
    void addLast(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = newNode;
    }
    void printLL(){
        Node* curr = head;
        if(head == NULL){
            return;
        }
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
    
    void removeFirst(){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
};

int main(){
    LinkedList ll;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        ll.addLast(ele);
    }
    ll.removeFirst();
    ll.printLL();
    
    return 0;
}