class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        int temp = 1;
        for (int i = 0; i <= 30; i++) {
            if (((x ^ y) & temp) != 0)
                ++ans;
            temp <<=1;
            if (temp > x && temp > y)
                break;
        }
        return ans;
    }
};
