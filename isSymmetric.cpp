// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
// Input: root = [1,2,2,3,4,4,3]
// Output: true

// --------------------------------------------Code-----------------------------------------
  
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return isSymmetricHelp(root->left,root->right);
    }
    bool isSymmetricHelp(TreeNode* left,TreeNode* right){
        if(left==NULL || right==NULL){
            return left==right;
        }
        if(left->val != right->val) return false;
        return isSymmetricHelp(left->left,right->right) && isSymmetricHelp(left->right,right->left);
    }
};
