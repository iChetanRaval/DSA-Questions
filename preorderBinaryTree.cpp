Problem statement
You are given a ‘Binary Tree’.
Return the preorder traversal of the Binary Tree.
Sample Input 1:
1 2 3 5 4 6 7 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 1:
1 2 5 4 3 6 7

-------------------------------------Code------------------------------------

#include <vector>
using namespace std;

void preorderTraversal(TreeNode<int> *node, vector<int> &result) {
    if (node == NULL) {
        return; // Base case: if the node is null, return
    }
    result.push_back(node->data); // Visit the current node
    preorderTraversal(node->left, result);  // Traverse the left subtree
    preorderTraversal(node->right, result); // Traverse the right subtree
}

vector<int> preOrder(TreeNode<int> *root) {
    vector<int> result;
    preorderTraversal(root, result); // Start the traversal from the root node
    return result; // Return the result vector containing preorder traversal
}
