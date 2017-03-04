class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> ans;
        stack<int> s;
        map<int, int> m;
        for (auto& num : nums) {
            while (s.size() != 0 && s.top() < num) {
                m[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        for (auto& i : findNums)
            ans.push_back(m.find(i) != m.end() ? m[i] : -1);
        return ans;
    }
};
