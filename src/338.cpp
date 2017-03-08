class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v(num + 1);
        v[0] = 0;
        int t = 0;
        for (int i = 1; i <= num; i++) {
            if ((i & (i - 1)) == 0) {
                t = 0;
            }
            v[i] = v[t] + 1;
            t++;
        }
        return v;
    }
};
