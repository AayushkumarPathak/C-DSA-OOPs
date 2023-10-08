#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    string data;
    Node* next;
    
    Node(string data){
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
    void addLast(string data){
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
            cout<<"List is empty"<<endl;
            return;
        }
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
    void deleteAlter(){
        Node* curr = head;
        while(curr!=NULL && curr->next !=NULL){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
            curr = curr->next;
        }
    }
};

int main(){
    LinkedList ll;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string ele;
        cin>>ele;
        ll.addLast(ele);
    }
    if(n == 0){
        cout<<"List is empty"<<endl;
    }else{
        cout<<"Linked list data: ";
        ll.printLL();
        
        ll.deleteAlter();
        cout<<"After deleting alternate node:";
        ll.printLL();
    }
    return 0;
}
















