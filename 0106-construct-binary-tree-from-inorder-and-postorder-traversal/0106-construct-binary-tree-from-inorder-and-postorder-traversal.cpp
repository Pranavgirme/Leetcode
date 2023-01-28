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
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,int& curr,int start,int end)
    {
        if(start>end) return NULL;
        int i=start;
        while(postorder[curr]!=inorder[i])
        {
            i++;
        }
        curr--;
        TreeNode* root=new TreeNode(inorder[i]);
        root->right=build(inorder,postorder,curr,i+1,end);
        root->left=build(inorder,postorder,curr,start,i-1);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int curr=postorder.size()-1;
        return build(inorder,postorder,curr,0,postorder.size()-1);
    }
};