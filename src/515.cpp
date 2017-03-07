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
    vector<int> ans;
    vector<int> largestValues(TreeNode* root) {
        dfs(root, 1);
        return ans;
    }
    void dfs(TreeNode* root, int high) {
        if (root == NULL)
            return;
        if (high > ans.size())
            ans.push_back(root -> val);
        else if (ans[high - 1] < root -> val)
            ans[high - 1] = root -> val;
        dfs(root -> left, high + 1);
        dfs(root -> right, high + 1);
    }
};
