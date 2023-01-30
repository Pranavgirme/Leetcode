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
    int pathsum(TreeNode* root,int& ans)
    {
        if(root==NULL) return 0;
        int left=pathsum(root->left,ans);
        int right=pathsum(root->right,ans);
        
        int straightsum=max(root->val,max(left+root->val,right+root->val));
        int curvedsum=left+right+root->val;
        
        ans=max(ans,max(straightsum,curvedsum));
        
        return straightsum;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        pathsum(root,ans);
        return ans;
    }
};