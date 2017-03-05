class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int temp = 0;
        for (auto& n : nums) {
            if (n == 0) {
                temp = 0;
            } else if (n == 1) {
                temp++;
                if (temp > ans)
                    ans = temp;
            }
        }
        return ans;
    }
};
