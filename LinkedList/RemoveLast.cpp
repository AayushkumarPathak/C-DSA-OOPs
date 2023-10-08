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
    int size;
    public:
    LinkedList(){
        this->head = NULL;
        this->size = 0;
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
        size++;
    }
    int getsize(){
        return size;
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
    ll.printLL();
    cout<<"Size of Linked List:"<<ll.getsize()<<endl;
    
    return 0;
}