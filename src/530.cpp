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
    int ans = -1;
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        return ans;
    }
    
    pair<int, int> dfs(TreeNode* root) {
        int min = root->val;
        int max = root->val;
        if (root->left != nullptr) {
            auto p = dfs(root -> left);
            min = p.first;
            if (ans == -1 || ans > root->val - p.second) {
                ans = root->val - p.second;
            }
        }
        if (root->right != nullptr) {
            auto p = dfs(root -> right);
            max = p.second;
            if (ans == -1 || ans > p.first - root->val) {
                ans = p.first - root->val;
            }
        }
        return make_pair(min, max);
    }
};
