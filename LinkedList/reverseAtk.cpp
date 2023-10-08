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

class LL{
    public:
    Node* head;
    
    LL(){
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
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
    
    Node* reverseLL(Node* head, int k){
        Node* curr = head;
        Node* next = NULL;
        Node* prev = NULL;
        
        int count = 0;
        while(count<k && curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next!=NULL){
            head->next = reverseLL(next, k);
        }
        return prev;
    }
};

int main(){
    LL l1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        l1.addLast(ele);
    }
    int k;
    cin>>k;
    
    cout<<"Original Linked List: ";
    l1.printLL();
    l1.head = l1.reverseLL(l1.head, k);
    cout<<"Modified Linked List: ";
    l1.printLL();
    return 0;
}
