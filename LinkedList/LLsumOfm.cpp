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
    int sumOfm(int m){
      
        Node* curr = head;
        int sum = 0;
        int count = 0;
        while(curr!=NULL){
            count++;
            curr = curr->next;
        }
        curr = head;
        
        for(int i=0;i<count-m;i++){
            curr = curr->next;
        }
        while(curr!=NULL){
            sum +=curr->data;
            curr = curr->next;
        }
        return sum;
        
    }
    
    
};

int main(){
    LinkedList list;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        list.addLast(ele);
    }
    
    int m;
    cin>>m;
    
    cout<<list.sumOfm(m)<<endl;
    return 0;
}

