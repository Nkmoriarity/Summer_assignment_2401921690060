class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    long long int MS= INT32_MIN;
    long long int CS=0;
    for(int st=0;st<nums.size();st++)
    {
            CS+=nums[st];
            MS=max(CS,MS);
           if(CS<0)
            {
               CS=0;
            }
    }
    return MS;       
    }
};
