class Solution {
public:
    int findComplement(int num) {
        int ans = 0, temp = 1;
        if (num == 0)
            return 1;
        while (num) {
            if ((num & 1) == 0)
                ans |= temp;
            temp <<= 1;
            num >>= 1;
        }
        return ans;
    }
};
