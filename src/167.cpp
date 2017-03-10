class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>::iterator it = numbers.begin();
        while (it != numbers.end()) {
            auto f = lower_bound(it + 1, numbers.end(), target - *it);
            if (f != numbers.end() && *f + *it == target)
                return {it - numbers.begin() + 1, f - numbers.begin() + 1};
            else
                ++it;
        }
        return {};
    }
};
