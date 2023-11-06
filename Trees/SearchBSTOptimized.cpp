// in this code i have optimized the space complexity by using iterative way.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertIntoBst(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data > root->data)
    {
        root->right = insertIntoBst(root->right, data);
    }
    else
    {
        root->left = insertIntoBst(root->left, data);
    }
    return root;
}

void getData(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // lnr
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node *root, int x){
    Node *curr = root;
    while (curr != NULL){
        if (curr->data == x)
        {
            return true;
        }
        if (curr->data > x)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }

    return false;
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data: ";
    getData(root);
    inorder(root);
    cout << "Enter the data to find";
    int x;
    cin >> x;
    cout << search(root, x);
    return 0;
}