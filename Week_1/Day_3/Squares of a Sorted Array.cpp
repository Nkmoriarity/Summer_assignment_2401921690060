//                          Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(i==j){
                nums[i]=nums[i]*nums[j]; 
            }
            else{
                nums[i]=nums[i]*nums[i];
                nums[j]=nums[j]*nums[j];   
            }
            i++;
            j--;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
