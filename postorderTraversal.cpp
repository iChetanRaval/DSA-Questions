// Problem statement
// You have been given a Binary Tree of 'n' nodes, where the nodes have integer values. Your task is to return its postorder traversal.
// Sample Input 1:
// 1 2 3 4 -1 -1 5 6 7 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// 6 7 4 2 5 3 1

// -------------------------------------------Code-------------------------------------------

void postorderTraversalCal(TreeNode *node,vector<int> &result){
    if(node == NULL){
        return;
    }
    postorderTraversalCal(node->left,result);
    postorderTraversalCal(node->right,result);
    result.push_back(node->data);
}

vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>result;
    postorderTraversalCal(root,result);
    return result;
}
