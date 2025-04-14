// Problem statement
// You have been given a Binary Tree of 'n' nodes, where the nodes have integer values. Your task is to return the In-Order traversal of the given binary tree.
// Sample Input 1 :
// 1 2 3 -1 -1 -1  6 -1 -1
// Sample Output 1 :
// 2 1 3 6

// ------------------------------Code-------------------------------------

void inorderTraversal(TreeNode *node, vector<int> &result){
    if(node == NULL){
        return;
    }
    inorderTraversal(node->left,result);
    result.push_back(node->data);
    inorderTraversal(node->right,result);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> result;
    inorderTraversal(root,result);
    return result;
}
