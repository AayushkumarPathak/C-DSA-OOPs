#include <iostream>
using namespace std;

struct Node {
    int roll_number;
    Node* prev;
    Node* next;
};

class StudentManagementSystem {
private:
    Node* head;
    Node* tail;

public:
    StudentManagementSystem() {
        head = nullptr;
        tail = nullptr;
    }

    void insertStudent(int roll_number) {
        Node* new_node = new Node;
        new_node->roll_number = roll_number;
        new_node->prev = nullptr;
        new_node->next = nullptr;

        if (head == nullptr) {
            head = new_node;
            tail = new_node;
        } else if (roll_number < head->roll_number) {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        } else if (roll_number > tail->roll_number) {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        } else {
            Node* current = head;
            while (current->roll_number < roll_number) {
                current = current->next;
            }
            new_node->prev = current->prev;
            new_node->next = current;
            current->prev->next = new_node;
            current->prev = new_node;
        }
    }

    void displayStudents() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->roll_number << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    // cout << "Enter the number of student records: ";
    cin >> n;

    StudentManagementSystem sms;
    // cout << "Enter the roll numbers of the students:" << endl;
    for (int i = 0; i < n; i++) {
        int roll_number;
        cin >> roll_number;
        sms.insertStudent(roll_number);
    }
    int val;
    cin>>val;
    sms.insertStudent(val);

    cout << "Created Doubly Linked List:" << endl;
    sms.displayStudents();

    return 0;
}
