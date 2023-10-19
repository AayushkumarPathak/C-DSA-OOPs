#include<iostream>
#include<queue>
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

Node* insertIntoBst(Node* root,int data){
    //base case
    if(root==NULL){
        root = new Node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertIntoBst(root->right,data);
    }
    else{
        root->left = insertIntoBst(root->left,data);
    }
    return root;


}

void getData(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBst(root,data);
        cin>>data;
    }
}

void inorder(Node* root){
    //lnr
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    //nlr
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    //lrn
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}


int main(){
    Node* root = NULL;
    cout<<"Enter Data to Build BST: ";
    getData(root);
    // cout<<"Your BST in Level Order: "<<endl;
    // levelOrderTreverse(root);
    // 10 8 21 7 27 5 4 3 -1 
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;
    
    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    
    cout<<"Postorder: ";
    postorder(root);
    return 0;

}