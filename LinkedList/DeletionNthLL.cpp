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
private:
    Node *head;

public:
    LinkedList()
    {
        this->head = NULL;
    }
    void addLast(int data)
    {
        Node *newNode = new Node(data);
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
        while (curr != NULL)
        {
            cout <<"|"<<curr->data<<"|"<<" --> ";
            curr = curr->next;
        }
        cout << endl;
    }
    void deleteNth(int n)
    {
        if (head == NULL){
            
            return;
        }

        if (n == 1){
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        int cnt = 1;
        Node *curr = head;
        Node *prev = NULL;

        while (cnt < n && curr != NULL){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr == NULL){

            return;
        }

        prev->next = curr->next;
        delete curr;
    }
};

int main(){
    LinkedList ll;
    int size;
    cin>>size;

    if(size == 0){
        cout<<"List is empty."<<endl;
    }
    
    else{
        for(int i=0;i<size;i++){
            int ele;
            cin>>ele;
            ll.addLast(ele);

        }
        int n;
        cin>>n;
        if(n>size){
            cout<<"contents of the CLL:"<<endl;

            ll.printLL();
            cout<<"Invalid position."<<endl;
        }
        else{
            cout<<"Content of the CLL"<<endl;
            ll.printLL();

            ll.deleteNth(n);
            cout<<"After deleting at position "<<n<<":"<<endl;
            cout<<"contents of the CLL:"<<endl;
            ll.printLL();
        }
    }

    

    return 0;

}