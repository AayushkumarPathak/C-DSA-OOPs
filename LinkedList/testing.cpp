#include <iostream>
using namespace std;

class Node {
public:
    char data;
    Node* next;

    Node(char data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    void insertAt(int index, char data) {
        if (index < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* newNode = new Node(data);
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            int currentIndex = 0;
            while (current != nullptr && currentIndex < index - 1) {
                current = current->next;
                currentIndex++;
            }

            if (current == nullptr) {
                cout << "Invalid position" << endl;
                delete newNode;
                return;
            }

            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    LinkedList list;

    for (int i = 0; i < n; i++) {
        char data;
        cin >> data;
        list.insertAt(i, data);
    }

    int index;
    cin >> index;
    char character;
    cin >> character;

    list.insertAt(index, character);
    cout << "Updated list: ";
    list.display();

    return 0;
}
