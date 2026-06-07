//                           Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size() - 1;
        int maxW = 0;
        while (lp < rp) {
            int width = rp-lp;
            int ht=min(height[lp],height[rp]);
            int area = width*ht;
            maxW =max(maxW,area);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxW;
    }
};
