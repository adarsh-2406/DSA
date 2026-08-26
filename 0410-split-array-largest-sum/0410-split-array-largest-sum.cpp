class Solution {
public:
    int isValid(vector<int>&nums, int mid){
        int sum = 0 ;
        int x=1;
        for(int i = 0; i < nums.size(); i++){
            if(sum + nums[i] <= mid){
                sum += nums[i];
            }
            else {
                sum = 0;
                sum += nums[i];
                x++;
            }
        }
        return x;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = 0;
        for(int num : nums){
            high += num;
        }
        int ans = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(isValid(nums,mid) <= k){
                ans = mid;
                high = mid-1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};