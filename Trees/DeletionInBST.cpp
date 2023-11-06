#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = this->right = NULL;
    }
};

Node* buildBst(Node *root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(root->data > data){
        root->right = buildBst(root->right,data);
    }
    else{
        root->left = buildBst(root->left,data);
    }

    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void getNodes(Node* &root){
    int data;
    cin>>data;
    root = buildBst(root,data);
}

void deleteNode(Node* root, int key){
    
}

int main(){
    Node* root = NULL;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        getNodes(root);
    }

    inorder(root);

    return 0;
}