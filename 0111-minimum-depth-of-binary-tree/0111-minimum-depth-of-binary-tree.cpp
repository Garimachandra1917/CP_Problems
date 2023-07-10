/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
       //if tree is empty
        if(root == NULL)
        {
            return 0;
        }
        //if tree has only one node(root)
        if(root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        //if tree is right leaning tree
        if(root->left == NULL && root->right != NULL)
        {
            return (minDepth(root->right)+1);
        }        
        //if tree is left leaning tree
        if(root->right == NULL && root->left != NULL)
        {
            return (minDepth(root->left)+1);
        }
        //if tree has both left and right children
        return(min(minDepth(root->left), minDepth(root->right))+1);
    }
        
    
};