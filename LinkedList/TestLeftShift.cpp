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

class Shift{
    private:
    Node* head;
    
    public:
    Shift(){
        this->head = NULL;
    }
    
    void addLast(int data){
        Node* newNode = new Node(data);
        if(head ==  NULL){
            head = newNode;
            return;
        }
        Node* curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = newNode;
    }
    void display(){
        Node* curr = head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
    
   void leftShift(int k) {
        if (k == 0)
            return;

        Node* current = head;
        int count = 1;
        while (count < k && current != NULL) {
            current = current->next;
            count++;
        }
        if (current == NULL)
            return;

        Node* kthNode = current;

        while (current->next != NULL)
            current = current->next;

        current->next = head;
        head = kthNode->next;
        kthNode->next = NULL;
    }
};

int main(){
    Shift LL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        LL.addLast(ele);
    }
    
   int k;
    cin >> k;

    cout << "original Linked List: ";
    LL.display();

    LL.leftShift(k);

    cout << "modified Linked List after left shift: ";
    LL.display();
    
    return 0;
}


















