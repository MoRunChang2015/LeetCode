class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0)
                nums[index] = -nums[index];
            else
                v.push_back(index + 1);
        }
        return v;
    }
};
