class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); ++i) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        vector<string> ans(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            if (i == nums.size() - 1) {
                ans[v[i].second] = "Gold Medal";
            } else if (i == nums.size() - 2) {
                ans[v[i].second] = "Silver Medal";
            } else if (i == nums.size() - 3) {
                ans[v[i].second] = "Bronze Medal";
            } else {
                ans[v[i].second] = to_string(nums.size() - i);
            }
        }
        return ans;
    }
};
