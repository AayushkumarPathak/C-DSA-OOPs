#include<iostream>
using namespace std;
#include<queue>

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

class BinaryTree{
    public:
    Node* root;

    BinaryTree(){
        this->root = NULL;
    }

    Node* buildTree(){
        cout<<"Enter the data: ";
        int data;
        cin>>data;
        if(data == -1){
            return NULL;
        }

        root = new Node(data);

        cout<<"Enter to insert at left of: ("<<data<<") :";
        root->left = buildTree();

        cout<<"Enter to insert at right of: ( "<<data<<") :";
        root->right = buildTree();

        return root;
    }
    void levelOrderTreverse(Node* root){
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node* temp = q.front();
            q.pop();

            if(temp == NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }

            }
            else{
                cout<<temp->data<<" ";
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }


    }
    //      1 3 7 -1 -1 11 -1 -1 15 17 -1 -1 -1
};

int main(){
    BinaryTree bt;
    Node* r = NULL;
    bt.buildTree();
    bt.levelOrderTreverse(r);
}