// Given the root of a complete binary tree, return the number of the nodes in the tree.
// According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.
// Design an algorithm that runs in less than O(n) time complexity.

// Input: root = [1,2,3,4,5,6]
// Output: 6

// -----------------------------------------Code----------------------------------------------------

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;

        int lh = findHeightLeft(root);
        int rh = findHeightRight(root);

        if(lh == rh) return (1<<lh)-1; // 2^lh -1
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    int findHeightLeft(TreeNode* node){
        int high = 0;
        while(node){
            high++;
            node = node->left;
        }
        return high;
    }
    int findHeightRight(TreeNode* node){
        int hght = 0;
        while(node){
            hght++;
            node = node->right;
        }
        return hght;
    }
};
