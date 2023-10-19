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

Node* buildTree(){
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    Node* root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter to insert at left of ("<<data<<") :";
    root->left = buildTree();
    cout<<"Enter to insert at right of ("<<data<<") :";
    root->right = buildTree();

    return root;
}

void inOrder(Node* root,int &count){
    if(root == NULL){
        return;
    }
    inOrder(root->left,count);
    
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    inOrder(root->right,count);
}

int noOfLeaf(Node* root){
    int count = 0;
    inOrder(root,count);
    return count;
}

int main(){
    Node* root = buildTree();
    int count = 0;


    cout<<"No of leaf in Binary Tree are: "<<noOfLeaf(root);



    return 0;
}