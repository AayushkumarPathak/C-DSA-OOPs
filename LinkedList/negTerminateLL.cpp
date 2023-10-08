#include <iostream>
#include <limits>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        if (!head) {
            cout << "Linked List is empty." << endl;
        } else {
            cout << "Linked List:";
            Node* current = head;
            while (current) {
                cout << " " << current->data;
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main() {
    LinkedList linkedList;
    int value;

    while (true) {
        if (!(cin >> value)) {
            // Input is not an integer, clear the input stream and ignore the input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            string input;
            getline(cin, input);  // Consume the whole line
            continue;
        }
        if (value < 0) {
            break;
        }
        linkedList.insert(value);
    }

    linkedList.display();

    return 0;
}
