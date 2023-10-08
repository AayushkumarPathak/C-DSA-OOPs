#include <iostream>
#include <unordered_set>

using namespace std;

// Define a node structure for the circular linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Function to insert a node at the end of the circular linked list
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head; // Make it circular
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head; // Make it circular
        }
    }

    // Function to print the circular linked list
    void printList() {
        if (!head) {
            cout << "Empty list" << endl;
            return;
        }

        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }

    // Function to perform the intersection operation with another circular linked list
    CircularLinkedList intersection(CircularLinkedList& otherList) {
        CircularLinkedList result;
        if (!head || !otherList.head) {
            return result; // No intersection if either list is empty
        }

        unordered_set<int> seen;

        Node* current1 = head;
        do {
            seen.insert(current1->data);
            current1 = current1->next;
        } while (current1 != head);

        Node* current2 = otherList.head;
        do {
            if (seen.find(current2->data) != seen.end()) {
                result.insert(current2->data);
                seen.erase(current2->data); // Remove the element from the set to handle duplicates
            }
            current2 = current2->next;
        } while (current2 != otherList.head);

        return result;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n;

        CircularLinkedList list1;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            list1.insert(val);
        }

        cin >> m;

        CircularLinkedList list2;
        for (int i = 0; i < m; i++) {
            int val;
            cin >> val;
            list2.insert(val);
        }

        cout << "List1: ";
        list1.printList();
        cout << "List2: ";
        list2.printList();

        CircularLinkedList intersectionList = list1.intersection(list2);
        cout << "Intersection: ";
        intersectionList.printList();
    }

    return 0;
}
