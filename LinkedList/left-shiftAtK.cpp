#include <iostream>
using namespace std;

class Node {
public:
    int shift;
    Node* next;

    Node(int shift) {
        this->shift = shift;
        this->next = nullptr;
    }
};

class ShiftSchedule {
private:
    Node* head;

public:
    ShiftSchedule() {
        head = nullptr;
    }

    void insert(int shift) {
        Node* newNode = new Node(shift);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->shift << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void leftShift(int k) {
        if (k == 0)
            return;

        Node* current = head;
        int count = 1;
        while (count < k && current != nullptr) {
            current = current->next;
            count++;
        }
        if (current == nullptr)
            return;

        Node* kthNode = current;

        while (current->next != nullptr)
            current = current->next;

        current->next = head;
        head = kthNode->next;
        kthNode->next = nullptr;
    }
};

int main() {
    int N;
    cin >> N;

    ShiftSchedule schedule;
    for (int i = 0; i < N; i++) {
        int shift;
        cin >> shift;
        schedule.insert(shift);
    }

    int k;
    cin >> k;

    cout << "original Linked List: ";
    schedule.display();

    schedule.leftShift(k);

    cout << "modified Linked List after left shift: ";
    schedule.display();

    return 0;
}
