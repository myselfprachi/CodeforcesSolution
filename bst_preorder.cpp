#include <iostream>
using namespace std;

// Define the structure for a binary search tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value){ data=value, left= right=NULL;}
};

// Function to perform a pre-order traversal
void preOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    // Visit the current node
    cout << root->data << " ";

    // Traverse the left subtree
    preOrderTraversal(root->left);

    // Traverse the right subtree
    preOrderTraversal(root->right);
}

int main() {
    // Create a sample binary search tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    // Perform pre-order traversal
    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout <<endl;


    return 0;
}
