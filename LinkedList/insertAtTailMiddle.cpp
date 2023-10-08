#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

ListNode *head;

void insertAtTail(int data)
{
    ListNode *newNode = new ListNode(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    ListNode *currNode = head;
    while (currNode->next != NULL)
    {
        currNode = currNode->next;
    }
    currNode->next = newNode;
}
void insertAtPos(int pos, int data)
{
    if(pos == 1){
        
    }
    int count = 1;
    ListNode *currNode = head;
    while (count < pos - 1)
    {
        currNode = currNode->next;
        count++;
    }
    ListNode *toInsert = new ListNode(data);
    toInsert->next = currNode->next;
    currNode->next = toInsert;
}

void printLL()
{
    if (head == NULL)
    {
        cout << "LinkedList is Empty!";
        return;
    }
    ListNode *currNode = head;
    while (currNode != NULL)
    {
        cout << currNode->data << " -> ";
        currNode = currNode->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    insertAtTail(10);
    insertAtTail(11);
    insertAtTail(12);
    insertAtTail(13);

    printLL();
    insertAtPos(3, 22);

    printLL();
    return 0;
}