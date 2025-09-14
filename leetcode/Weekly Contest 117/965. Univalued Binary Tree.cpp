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
private:
    void dfs(TreeNode* root, vector<int> &vals){
        if(root){
            vals.push_back(root->val);
            dfs(root->left, vals);
            dfs(root->right, vals);
        }
    }
public:
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL)
            return true;
        vector<int> vals;
        dfs(root, vals);
        int startingVal = vals[0];
        for(auto i : vals)
            if(i != startingVal)
                return false;
        
        return true;
    }
};
