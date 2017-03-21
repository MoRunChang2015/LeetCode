class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() < nums2.size())
            return intersect(nums2, nums1);
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> ans;
        int i = 0;
        for (int j = 0; j < nums2.size(); ++j) {
            while (i < nums1.size() && nums1[i] < nums2[j])
                ++i;
            if (i == nums1.size())
                break;
            if (nums1[i] == nums2[j]) {
                ans.push_back(nums2[j]);
                ++i;
            }
        }
        return ans;
    }
};
