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
    void left(TreeNode* root,int& sum)
    {
        if(root->left && !root->left->left && !root->left->right)
        {
            sum+=root->left->val;
        }
        if(root->left) left(root->left,sum);
        if(root->right) left(root->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return 0;
        int sum=0;
        left(root,sum);
        return sum;
    }
};