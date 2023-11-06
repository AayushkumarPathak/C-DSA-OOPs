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
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}
Node* deleteBst(Node* root,int val){
    if(root == NULL){
        return root;
    }
    if(root->data == val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child
        //left
        if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right
        if(root->left==NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        // if()
    }
    else if(root->data>val){
        root->left = deleteBst(root->left,val);
        return root;
    }
    else{
        root->right = deleteBst(root->right,val);
        return root;
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
    cout<<"Your BST in Level Order: "<<endl;
    levelOrderTreverse(root);
    // 10 8 21 7 27 5 4 3 -1 
    // 8 3 1 6 4 7 10 14 13
    cout<<endl<<"\n";
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;
    
    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    
    cout<<"Postorder: ";
    postorder(root);
    cout<<"\n\n";
    cout<<"min value :"<<minVal(root)->data;
    cout<<endl;
    cout<<"max value: "<<maxVal(root)->data;
//100 50 25 70 60 110 120 115
 
    return 0;

}