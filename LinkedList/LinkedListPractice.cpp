#include<iostream>
using namespace std;


class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int data){
        this->data = data;
        this->next = nullptr;
    }
};
ListNode* head = nullptr;

void addLast(int data){

    ListNode* newNode = new ListNode(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    ListNode* currNode = head;
    while(currNode->next!=nullptr){
        currNode = currNode->next;
    }
    currNode->next = newNode;

}

void printLL(){
    ListNode* currNode = head;
    if(head == nullptr){
        cout<<"LinkedList is Empty!";
        return;
    }
    while(currNode!=nullptr){
        cout<<currNode->data<<" -> ";
        currNode = currNode->next;
    }
    cout<<"null";

}

int main(){
    head = new ListNode(10);
    int n;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter the element: ";
        cin>>ele;
        addLast(ele);
    }
    printLL();

    return 0;
}