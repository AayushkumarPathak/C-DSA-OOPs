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
    public:
    Node* head;
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
    
    void deleteSame(LinkedList& list2) {
        if (!head || !list2.head) {
            return;
            
        }
        Node* current1 = head;
        Node* prev1 = nullptr;
        while (current1) {
            bool found = false;
            Node* current2 = list2.head;
            while (current2) {
                if (current1->data == current2->data) {
                    found = true;
                    break;
                    
                }
                current2 = current2->next;
                
            }
            if (found) {
                if (prev1) {
                    prev1->next = current1->next;
                    delete current1;
                    current1 = prev1->next;
                    
                } else {
                    head = current1->next;
                    delete current1;
                    current1 = head;
                    
                }
                
            } else {
                prev1 = current1;
                current1 = current1->next;
                
            }
            
        }
    }

    
};
int main(){
    LinkedList list1,list2;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        list1.addLast(ele);
    }
    cin>>m;
    
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        list2.addLast(val);
    }
    cout<<"First Linked List before deletion: ";
    list1.printLL();
    
    list1.deleteSame(list2);
    cout<<"First Linked List after deletion: ";
    list1.printLL();
    
    Node* current = list1.head;
    bool allsame = true;
    
    if(!current){
        cout<<"\nAll elements in the first linked list are the same."<<endl;
    }
    else{
        int firstVal = current->data;
        while(current){
            if(current->data!=firstVal){
                allsame = false;
                break;
            }
            current = current->next;
        }
        if(allsame){
            cout<<"All elements in the first linked list are the same."<<endl;
        }
    }
    return 0;
}















