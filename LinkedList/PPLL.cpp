#include<iostream>
using namespace std;

class Node{
    public:
    string name;
    Node* next;

    Node(string name){
        this->name = name;
        this->next = nullptr;
    }
};

Node* head = nullptr;

void addLast(string name){
    Node* newNode = new Node(name);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* currNode = head;
    while(currNode->next!=nullptr){
        currNode = currNode->next;
    }
    currNode->next = newNode;

}

void displayNames(){
    Node* currNode = head;
    if(head == nullptr){
        cout<<"LinkedList is empty!"<<endl;
    }
    if(head!=nullptr){
        while(currNode!=nullptr){
            cout<<currNode->name<<" -> ";
            currNode = currNode->next;
        }
        cout<<"NULL";
    }

}
int main(){
    int ch;
    cout<<"Enter size:";
    cin>>ch;
    int i = 0;
    while(i<ch){
        string ele;
        cout<<"Enter element:";
        cin>>ele;
        addLast(ele);
        i++;
    }
    displayNames();
}