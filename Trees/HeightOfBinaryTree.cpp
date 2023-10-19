#include<iostream>
using namespace std;
/*
    2
      \
       3
       /
       4

*/
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

int height(Node* node){
    if(node == NULL){
        return 0;
    }
    int left = height(node->left);
    int right = height(node->right);

    int ans = max(left,right)+1;

    return ans;
}

int main(){
    Node* root = buildTree();
    cout<<"Height of tree is: "<<height(root);
    return 0;
}