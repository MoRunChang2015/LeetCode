class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = nums[0];
        for (int i = 1; i < nums.size(); ++i)
            if (nums[i] < min)
                min = nums[i];
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i)
            ans += nums[i] - min;
        return ans;
    }
};
