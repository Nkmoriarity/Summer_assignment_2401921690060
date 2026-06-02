class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long csum = 0;

        for (int i = 0; i < k; i++) {
            csum += nums[i];
        }

        long long msum = csum;

        for (int i = k; i < nums.size(); i++) {
            csum += nums[i] - nums[i - k];
            msum = max(msum, csum);
        }

        return (double)msum / k;
    }
};
