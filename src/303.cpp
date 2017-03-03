class NumArray {
public:
    NumArray(vector<int> nums) {
        int sum = 0;
        nums_pre.push_back(0);
        for (auto& x:nums) {
            sum += x;
            nums_pre.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        return nums_pre[j + 1] - nums_pre[i];
    }
    
private:
    vector<int> nums_pre;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
