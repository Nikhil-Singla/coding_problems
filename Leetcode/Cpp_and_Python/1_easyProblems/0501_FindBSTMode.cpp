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

    unordered_map <int,int> map;

    vector<int> findMode(TreeNode* root) 
    {
        helper(root);
        int high = 0;
        vector<int> ans;
        for(auto x : map)
        {
            high = max(high, x.second);
        }
        for(auto x : map)
        {
            if(x.second == high)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }

    void helper(TreeNode* root)
    {
        if(!root) {return;}
        map[root->val]++;
        if(root->left) {helper(root->left);}
        if(root->right) {helper(root->right);}
    }
};