class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max_subarray = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            if(sum > max_subarray) max_subarray = sum;

            if(sum<0) sum = 0;
        }
        return max_subarray;
    }
};