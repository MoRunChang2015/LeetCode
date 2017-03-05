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
    int ans = 0;
    int level = -1;
    int findBottomLeftValue(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
    
    void dfs(TreeNode* root, int level_t) {
        if (level_t > level) {
            ans = root -> val;
            level = level_t;
        }
        if (root -> left != NULL)
            dfs(root -> left, level_t + 1);
        if (root -> right != NULL)
            dfs(root -> right, level_t + 1);
    }
};
