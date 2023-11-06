#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node*right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* insertBST(Node* root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertBST(root->right,data);
    }
    else{
        root->left = insertBST(root->left,data);
    }
    return root;
}
void getData(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertBST(root,data);
        cin>>data;
    }
}

bool search(Node* root,int x){
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data > x){
        return search(root->left,x);
    }
    else{
        return search(root->right,x);
    }
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = NULL;
    cout<<"Enter Data to Build BST: ";
    getData(root);
    cout<<"Enter data to find: ";
    int x;
    cin>>x;

    cout<<search(root,x);
    return 0;
}