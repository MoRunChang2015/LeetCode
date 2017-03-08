/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans;
    int maxDepth(TreeNode* root) {
        ans = 0;
        dfs(root, 1);
        return ans;
    }
    
    void dfs(TreeNode* root, int high) {
        if (root == nullptr)
            return;
        if (high > ans)
            ans = high;
        dfs(root -> left, high + 1);
        dfs(root -> right, high + 1);
    }
};
