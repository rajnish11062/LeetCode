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
    void LeftSum(TreeNode *root, int &sum,int directiom)
    {
        
        if(!root)
            return;
        LeftSum(root->left, sum,0);
        if(!root->left && !root->right)
        {
            if(!directiom)
            {
                sum += root->val;
            }
        }
        LeftSum(root->right, sum,1);    
    }
    
    int sumOfLeftLeaves(TreeNode* root) {   
        if(!root || !root->left && !root->right)
             return 0;
        int sum=0;
        LeftSum(root,sum,-1);
        return sum;
    }
};
