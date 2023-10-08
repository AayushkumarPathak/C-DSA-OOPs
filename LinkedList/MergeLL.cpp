#include<iostream>
using namespace std;
/*
input 1:
5
1 2 3 4 5
4
11 12 13 14
output 1:
1->2->3->4->5->11->12->13->14->NULL
*/
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class List{
    public:
    Node* head;

    
    List(){
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
            cout<<"EMpty";
            return;
        }

        while(curr!=NULL){
            cout<<curr->data<<" -> ";
            curr = curr->next;
        }
        cout<<"NULL"<<endl;
    }

    // void merge(Node* &head1,Node* &head2){
    //     if(head1==NULL){
    //         head1 = head2;
    //         head2 = NULL;
    //         return;
    //     }
    //     Node* curr = head1;
    //     while(curr!=NULL){
    //         curr = curr->next;
    //     }
    //     curr->next = head2;
    //     head2 = NULL;
    // }

    void merge(Node* &head1, Node* &head2) {
    if (head1 == NULL) {
        head1 = head2;
        head2 = NULL;
        return;
    }

    Node* mergedHead = NULL; // Initialize the merged list head

    // Determine the initial merged head
    if (head1->data <= head2->data) {
        mergedHead = head1;
        head1 = head1->next;
    } else {
        mergedHead = head2;
        head2 = head2->next;
    }

    Node* curr = mergedHead; // Current pointer for building the merged list

    while (head1 != NULL && head2 != NULL) {
        if (head1->data <= head2->data) {
            curr->next = head1;
            head1 = head1->next;
        } else {
            curr->next = head2;
            head2 = head2->next;
        }
        curr = curr->next;
    }

    // Append the remaining elements of the non-empty list to the merged list
    if (head1 != NULL) {
        curr->next = head1;
    } else {
        curr->next = head2;
    }

    // Update the head of the first list to the merged list
    head1 = mergedHead;
}

};

int main(){
    List l1,l2,l3;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        l1.addLast(ele);
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        l2.addLast(val);
    }
    l1.printLL();
    l2.printLL();

    l1.merge(l1.head,l2.head);
    l1.printLL();
    return 0;
}