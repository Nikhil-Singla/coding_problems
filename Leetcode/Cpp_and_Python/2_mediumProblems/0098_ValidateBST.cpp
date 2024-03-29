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

    TreeNode *prev = nullptr;

    bool isValidBST(TreeNode* root) 
    {
        return helper(root);    
    }

    bool helper(TreeNode* root)
    {
        if(root->left)
        {
            if(!helper(root->left))
            {
                return false;
            }
        }
        if(prev && root->val <= prev->val)
        {
            return false;
        }
        prev = root;
        if(root->right)
        {
            
            if(!helper(root->right))
            {
                return false;
            }
        }
        return true;
    }
};


//INCORRECT SOLUTION: CODE ONLY WORKS FOR VALIDITY UPTO 1 LEVEL DEEP PER NODE.
class Solution {
public:
    bool isValidBST(TreeNode* root) 
    {
        return helper(root);    
    }

    bool helper(TreeNode* root)
    {
        bool left = true, right = true;
        if(root->left)
        {
            if(!(root->left->val < root->val))
            {
                left = false;
            }
            left = left && helper(root->left);
        }
        if(root->right)
        {
            if(!(root->right->val > root->val))
            {
                right = false;
            }
            right = right && helper(root->right);
        }
        return (left && right);
    }
};