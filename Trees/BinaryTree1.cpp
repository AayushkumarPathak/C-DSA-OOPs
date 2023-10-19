#include<iostream>
#include<queue>
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
    //LNR
    void inOrder(Node* root){
        if(root == NULL){
            return;
        }
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
    //NLR
    void preOrder(Node* root){
        if(root == NULL){
            return;
        }
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }

    //LRN
    void postOrder(Node* root){
        if(root == NULL){
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }

int main(){
    Node* root = NULL;

    root = buildtree(root);

    cout<<"Tree structure"<<endl;
    levelOrderTreverse(root);

    cout<<"In-Order Traversal: ";
    inOrder(root);

    cout<<endl;

    cout<<"Pre-Order Traversal: ";
    preOrder(root);

    cout<<endl;

    cout<<"Post-Order Traversal: ";
    postOrder(root);
}
