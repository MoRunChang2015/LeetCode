class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first > b.first)
                return true;
            else if (a.first < b.first)
                return false;
            else if (a.first == b.first)
                return a.second < b.second;
        };
        sort(people.begin(), people.end(), cmp);
        vector<pair<int, int>> v;
        for (auto& p : people) {
            v.insert(v.begin() + p.second, p);
        }
        return v;
    }
};
