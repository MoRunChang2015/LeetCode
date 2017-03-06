class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int ans = 0;
        if (A.size() < 3)
            return ans;
        for (int i = 0; i <= A.size() - 3; i++) {
            if (A[i + 1] * 2  == A[i] + A[i + 2]) {
                ans++;
                int d = A[i + 1] - A[i];
                int j = i + 3;
                while (A[j] - A[j - 1] == d && j < A.size()) {
                    ans++;
                    j++;
                }
            }
        }
        return ans;
    }
};
