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
private:
    vector<string> ans;
    
    void dfs(TreeNode* root, string path) {
        path = path + to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(path);
            return;
        }
        if (root -> left != nullptr)
            dfs(root->left, path + "->");
        if (root -> right != nullptr)
            dfs(root->right, path + "->");
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr)
            return ans;
        dfs(root, "");
        return ans;
    }
};
