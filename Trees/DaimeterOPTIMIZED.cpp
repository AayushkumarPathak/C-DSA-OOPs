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

Node* buildTree(Node* root){
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter to insert at left of ("<<data<<") :";
    root->left = buildTree(root->left);
    cout<<"Enter to insert at right of ("<<data<<") :";
    root->right = buildTree( root->right);

    return root;
}

pair<int,int> daimeterFast(Node* root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = daimeterFast(root->left);
    pair<int,int> right = daimeterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int,int> ans ;
    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second)+1;

    return ans;

}

int daimeter(Node* root){
    return daimeterFast(root).first;
}

int main(){
    Node* root = NULL;
    root = buildTree(root);
    int ans = daimeter(root);
    cout<<"Daimeter: "<<ans;

    return 0;

}