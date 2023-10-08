#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        this->head = NULL;
    }

    // Add an element to the end of the linked list
    void addLast(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *currNode = head;
        while (currNode->next != NULL)
        {
            currNode = currNode->next;
        }
        currNode->next = newNode;
    }

    // Print the linked list
    void printLL()
    {
        Node *currNode = head;
        if (head == NULL)
        {
            cout << "LL Empty";
            return;
        }
        while (currNode != NULL)
        {
            cout << currNode->data << " ";
            currNode = currNode->next;
        }
        cout << endl;
    }

    // Sort the linked list in ascending order
    void sortLL()
    {
        Node *prev = head;
        Node *curr = NULL;
        int temp;
        if (head == NULL)
        {
            return;
        }
        else
        {
            while (prev != NULL)
            {
                curr = prev->next;
                while (curr != NULL)
                {
                    if (prev->data > curr->data)
                    {
                        temp = prev->data;
                        prev->data = curr->data;
                        curr->data = temp;
                    }
                    curr = curr->next;
                }
                prev = prev->next;
            }
        }
    }

    // Union of two linked lists
    // Union of two linked lists
    // Union of two linked lists
    void unionLL(Node *head1, Node *head2)
    {
        Node *h1 = head1;
        Node *h2 = head2;

        // Copy elements from the first list to the union list
        while (h1 != NULL)
        {
            if (!ispresent(head, h1->data)) // Check if it's not already in the union list
            {
                addLast(h1->data);
            }
            h1 = h1->next;
        }

        // Copy elements from the second list to the union list
        while (h2 != NULL)
        {
            if (!ispresent(head, h2->data)) // Check if it's not already in the union list
            {
                addLast(h2->data);
            }
            h2 = h2->next;
        }
    }

    // Check if an element is present in the linked list
    bool ispresent(Node *head, int data)
    {
        Node *curr = head;
        while (curr != NULL)
        {
            if (curr->data == data)
            {
                return true;
            }
            curr = curr->next;
        }
        return false;
    }
};

int main()
{
    LinkedList l1;
    LinkedList l2;
    LinkedList l3;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele1;
        cin >> ele1;
        l1.addLast(ele1);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int ele2;
        cin >> ele2;
        l2.addLast(ele2);
    }
    l1.sortLL();
    cout << "First Linked List:";
    l1.printLL();

    l2.sortLL();
    cout << "Second Linked List:";
    l2.printLL();

    l3.unionLL(l1.head, l2.head);
    l3.sortLL();
    cout << "Union Linked List:";
    l3.printLL();

    return 0;
}
