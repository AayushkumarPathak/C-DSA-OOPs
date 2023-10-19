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
        this->left = this->right = NULL;
    }
};

Node *buildTree(Node* root)
{
    cout << "Enter data: ";
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter to insert at left of " << data << " :";
    root->left = buildTree(root->left);
    cout << "Enter to insert at right of " << data << " :";
    root->right = buildTree(root->right);

    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int height(Node* root){
    if(root == NULL){
        return 0;

    }
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right);

    return ans;
}

int daimeter(Node* root){
    if(root == NULL){
        return 0;
    }
    int op1 = daimeter(root->left);
    int op2 = daimeter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1,max(op2,op3))+1;


    return ans;
} // This program is not optimize solution bcz it has Time Complexity O(n^2);

int main(){
    Node* root = NULL;
    root =  buildTree(root);
    cout<<"Tree:";
    inorder(root);
    
    return 0;
}
