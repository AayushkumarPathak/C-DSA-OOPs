#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    string str;
    Node* next;
    
    Node(string str){
        this->str = str;
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
    void addLast(string str){
        Node* newNode = new Node(str);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* currNode = head;
        while(currNode->next!=NULL){
            currNode = currNode->next;
        }
        currNode->next = newNode;
        
    }
    void insAtpos(int pos,string str){
        if(pos<=0){
            return;
        }
        if(pos == 1){
            Node* newNode = new Node(str);
            newNode->next = head;
            head = newNode;
            return;
        }
        int count = 1;
        Node* currNode = head;
        while(count<pos-1 && currNode != NULL){
            currNode = currNode->next;
            count++;
        }
        if(currNode == NULL){
            cout<<"Invalid";
            return;
        }
        Node* valNode = new Node(str);
        valNode->next = currNode->next;
        currNode->next = valNode;
    }
    void display(){
        Node* currNode = head;
        if(head == NULL){
            cout<<" "<<endl;
            return;
        }
            
        
        while(currNode!=NULL){
            cout<<currNode->str<<" ";
            currNode = currNode->next;
        }
        cout<<endl;
    }
    
};

int main(){
    LinkedList list;
    int n;
    cin>>n;
    // if(n == 0){
    //     string s;
    //     cin>>s;
    //     list.addLast(s);
    // }
    for(int i=0;i<n;i++){
        string ele;
        cin>>ele;
        list.addLast(ele);
    }
    cout<<"Current Linked List:"<<endl;
    list.display();
    
    string val;
    cin>>val;
    int pos;
    cin>>pos;
    list.insAtpos(pos,val);
    
    cout<<"Updated Linked List:"<<endl;
    list.display();
    
    
    return 0;
}