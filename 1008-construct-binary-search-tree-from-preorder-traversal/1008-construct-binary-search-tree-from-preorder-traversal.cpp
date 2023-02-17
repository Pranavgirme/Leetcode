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
    TreeNode* build(vector<int>& preorder, int& i,int min,int max,int n)
    {
        if(i==n || preorder[i]<min ||preorder[i]>max)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[i++]);
        root->left=build(preorder,i,min,root->val,n);
        root->right=build(preorder,i,root->val,max,n);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        int n=preorder.size();
        return build(preorder,i,INT_MIN,INT_MAX,n);
    }
};