class Solution {
public:
    int findMin(vector<int>&nums , int start){
        int mini = INT_MAX;
        for(int i = start ; i < nums.size(); i++){
            mini = min(mini,nums[i]);
        }
        return mini;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            maxi = max(maxi,nums[i]);
            if(maxi - findMin(nums,i) <= k) return i;
        }
        return -1;
    }
};