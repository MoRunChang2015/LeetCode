class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag = true;
        for (int i = digits.size() - 1; i >= 0 && flag; --i) {
            digits[i] += 1;
            flag = digits[i] / 10 != 0;
            digits[i] %= 10;
        }
        if (flag)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
