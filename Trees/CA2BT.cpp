#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }

};
Node* buildTree(Node* root){
    int data;
    cout<<"Enter Data: ";
    cin>>data;

    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data at left of "<<data<<" :";
    root->left = buildTree(root->left);

    cout<<"Enter the data at right of "<<data<<" :";
    root->right = buildTree(root->right);

    return root;
}

//preorder NLR , Post order LRN , inorder LNR

void preorder(Node* root){
    if( root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}



int main(){
    Node* root = NULL;
    root = buildTree(root);


    cout<<"In-Order Traversal: ";
    inorder(root);

    cout<<endl;

    cout<<"Pre-Order Traversal: ";
    preorder(root);

    cout<<endl;

    cout<<"Post-Order Traversal: ";
    postorder(root);
    return 0;
}