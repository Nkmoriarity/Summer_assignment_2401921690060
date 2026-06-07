//                       move zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        int right=left+1;
        while(left<nums.size()&&right<nums.size()){
            if(nums[left]!=0){
                left++;
                right++;
            }
            else if(nums[left]==nums[right]){
                right++;
            }
            else{
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
        }
    }
};
