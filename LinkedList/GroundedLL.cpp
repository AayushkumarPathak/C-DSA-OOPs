#include <iostream>
using namespace std;

class Node
{
public:
    float data;
    Node *next;

    Node(float val) : data(val), next(nullptr) {}
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    void insert(float val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *curr = head;

        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    void printLL()
    {
        Node *curr = head;
        if (head == nullptr)
        {
            cout << "Empty" << endl;
            return;
        }
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    int n;
    cin >> n;
    if(n==0){
        cout<<"Linked List is empty."<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        float ele;
        cin >> ele;
        list.insert(ele);
    }
    list.printLL();

    return 0;
}
