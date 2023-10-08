#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        this->head = NULL;
    }

    void addLast(int data) {
        Node* newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* currNode = head;
        while (currNode->next != NULL) {
            currNode = currNode->next;
        }
        currNode->next = newNode;
    }

    void printLL() {
        Node* curr = head;

        while (curr != NULL) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void deleteNode(int val) {
        

        

        Node* temp = head;
        int pos = 1;
        int count = 1;
        while(temp->data == val || count<pos-1 ){
            temp = temp->next;
            pos++;
            count++;
        }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
};

int main() {
    LinkedList ll;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        ll.addLast(ele);
    }
    int val;
    cin >> val;
    cout << "Linked List before deletion: ";
    ll.printLL();

    ll.deleteNode(val);
    cout << "Linked List after deletion: ";
    ll.printLL();
    return 0;
}
