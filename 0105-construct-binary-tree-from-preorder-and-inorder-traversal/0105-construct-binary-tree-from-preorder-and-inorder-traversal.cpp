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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int& curr,int start,int end)
    {
        if(start>end) return NULL;
        int i=start;
        while(preorder[curr]!=inorder[i])
        {
            i++;
        }
        curr++;
        TreeNode* root=new TreeNode(inorder[i]);
        root->left=build(preorder,inorder,curr,start,i-1);
        root->right=build(preorder,inorder,curr,i+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int curr=0;
        return build(preorder,inorder,curr,0,preorder.size()-1);
    }
};