#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList{
    public:
    Node* head;

   
    LinkedList(){
        this->head = nullptr;
    }
    void addLast(int data){
        Node* newNode = new Node(data);
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

    void printLL(){
        Node* currNode = head;
        if(head == nullptr){
            cout<<"LinkedList is empty!";
            return;
        }
        while(currNode!=nullptr){
            cout<<currNode->data<<" -> ";
            currNode = currNode->next;
        }
        cout<<"NULL"<<endl;
    }

    void sorting(){
        Node* curr = head;
        Node* idx = NULL;
        int temp;
        if(head == NULL){
            return;
        }
        else{
            while(curr!=NULL){
                idx = curr->next;

                while(idx!=NULL){
                    if(curr->data>idx->data){
                        temp = curr->data;
                        curr->data = idx->data;
                        idx->data = temp;
                    }
                    idx = idx->next;
                }
                curr = curr->next;
            }
        }
    }

    void unionLL(Node* head1 ,Node* head2){
        Node* t1 = head1;
        Node* t2 = head2;

        while(t1!=NULL){
            addLast(t1->data);
            t1 = t1->next;
        }
        while(t2!=NULL){
            if(!isPresent(head,t2->data)){
                addLast(t2->data);
               
            }
            t2 = t2->next;
        }

    }

    bool isPresent(Node* head,int data){
        Node* t = head;
        while(t!=NULL){
            if(t->data ==  data){
                return true;

            }
            t = t->next;
        }
        return false;
    }
};

int main(){
    LinkedList list1;
    LinkedList list2;
    LinkedList UnList;

    list1.addLast(20);
    list1.addLast(4);
    list1.addLast(15);
    list1.addLast(10);

    list2.addLast(15);
    list2.addLast(4);
    list2.addLast(20);
    list2.addLast(5);

    list1.sorting();
    cout<<"List1 sorted:";
    list1.printLL();

    list2.sorting();
    cout<<"List2 sorted:";
    list2.printLL();
    UnList.unionLL(list1.head,list2.head);
    UnList.sorting();
    cout<<"Union List:";
    UnList.printLL();
    return 0;
}

