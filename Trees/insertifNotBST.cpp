// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         this->left = this->right = NULL;
//     }
// };

// Node* build(Node* root,int data){
//     if(root == NULL){
//         root = new Node(data);
//         return root;
//     }
//     if(root->data>data){
//         root->right = build(root->right,data);
//     }
//     else{
//         root->left = build(root->left,data);
//     }
//     return root;

// }
// void getData(Node* root){
//     int data;
//     cin>>data;
//     while(data!=-1){
//         build(root,data);
//         cin>>data;
//     }
// }

// bool search(Node* root,int x){
//     Node* temp = root;
//     while(temp!=NULL){
//         if(temp->data == x){
//             return true;
//         }
//         if(temp->data>x){
//             temp = temp->left;
//         }
//         else{
//             temp = temp->right;
//         }
//     }
//     return false;
// }
// void inorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// Node* insertif(Node* root,int x){
//     bool ans = search(root,x);
//     if(ans){
//         root = build(root,x);
//     }
//     else{
//         inorder(root);
//     }
//     inorder(root);

//     return root;
// }

// int main(){
//     Node* root = NULL;
//     cout<<"Enter the data: ";
//     getData(root);
//     inorder(root);
//     cout<<"Enter data to find: ";
//     int x;
//     cin>>x;
//     cout<<insertif(root,x);
//     return 0;
// }

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = this->right = NULL;
    }
};

Node* build(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }
    if (root->data > data) {
        root->left = build(root->left, data);
    }
    else {
        root->right = build(root->right, data);
    }
    return root;
}

void getData(Node* &root) {
    int data;
    cin >> data;
    while (data != -1) {
        root = build(root, data);
        cin >> data;
    }
}

bool search(Node* root, int x) {
    Node* temp = root;
    while (temp != NULL) {
        if (temp->data == x) {
            return true;
        }
        if (temp->data > x) {
            temp = temp->left;
        }
        else {
            temp = temp->right;
        }
    }
    return false;
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* insertIfNotPresent(Node* root, int x) {
    if (!search(root, x)) {
        root = build(root, x);
    }
    return root;
}

int main() {
    Node* root = NULL;
    cout << "Enter the data: ";
    getData(root);
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << "\nEnter data to find and insert if not present: ";
    int x;
    cin >> x;
    root = insertIfNotPresent(root, x);
    cout << "Inorder Traversal after insertion (if not present): ";
    inorder(root);
    return 0;
}
