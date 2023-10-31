#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* searchBST(TreeNode* root, int val) {
    if (root == nullptr || root->val == val) {
        return root;
    }
    
    if (val < root->val) {
        return searchBST(root->left, val);
    }
    
    return searchBST(root->right, val);
}

// Function to print the tree rooted at a given node using an in-order traversal
void preorder(TreeNode* root) {
    if (root != nullptr) {
        std::cout << root->val << " ";
        preorder(root->left);

        preorder(root->right);
    }
}

int main() {
    // Create the example tree: [4,2,7,1,3]
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    int val = 2;
    TreeNode* result = searchBST(root, val);

    std::cout << "Subtree rooted at node with value " << val << ": ";
    if (result != nullptr) {
        preorder(result);
    } else {
        std::cout << "Node not found";
    }
    
    return 0;
}
