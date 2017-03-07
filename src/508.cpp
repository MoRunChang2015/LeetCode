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
    unordered_map<int, int> m;
    int cnt;
    vector<int> findFrequentTreeSum(TreeNode* root) {
        cnt = 0;
        dfs_subsum(root);
        vector<int> v;
        for (auto it = m.begin(); it != m.end(); it++)
            if (it -> second == cnt)
                v.push_back(it -> first);
        return v;
    }
    
    int dfs_subsum(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int sum = dfs_subsum(root -> left) + dfs_subsum(root -> right) + root -> val;
        m[sum]++;
        cnt = max(cnt, m[sum]);
        return sum;
    }
};
