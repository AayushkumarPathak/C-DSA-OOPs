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

Node* buildtree(Node* root){
    cout<<"Enter the data:";
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data to insert at left of ( "<<data<<" ) : ";
    root->left = buildtree(root->left);
    cout<<"Enter the data to insert at right of ( "<<data<<" ) : ";
    root->right = buildtree(root->right);

    return root;

}

//L N R
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}


int main(){
    Node* root = NULL;
    root = buildtree(root);

    inOrder(root);
}