class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = floor(sqrt(area));
        while (area % w != 0) {
            --w;
        }
        return {area / w, w};
    }
};
