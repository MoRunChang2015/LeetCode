class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0, end_time_of_poisoning = 0;
        for (int i = 0; i < timeSeries.size(); i++) {
            if (end_time_of_poisoning <= timeSeries[i]) {
                ans += duration;
            } else {
                ans += duration - (end_time_of_poisoning - timeSeries[i]);
            }
            end_time_of_poisoning = timeSeries[i] + duration;
        }
        return ans;
    }
};
