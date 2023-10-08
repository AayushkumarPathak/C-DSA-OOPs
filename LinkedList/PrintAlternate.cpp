#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* header;
public:
    CircularLinkedList() {
        header = nullptr;
    }

    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (!header) {
            header = newNode;
            header->next = header;  // Point back to itself for circularity
        } else {
            Node* temp = header;
            while (temp->next != header) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = header;
        }
    }

    void printAlternateNodes() {
        if (!header) {
            cout << "Linked List is empty." << endl;
            return;
        }

        Node* current = header;
        bool alternate = true;
        cout << "Alternate Nodes: ";
        do {
            if (alternate) {
                cout << current->data << " ";
            }
            alternate = !alternate;
            current = current->next;
        } while (current != header);
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    CircularLinkedList list;

    if (n == 0) {
        cout << "Linked List is empty." << endl;
    } else {
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            list.insertEnd(val);
        }
        list.printAlternateNodes();
    }

    return 0;
}
