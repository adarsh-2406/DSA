class Solution {
public:
    int possible(vector<int>&nums , int x){
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            result += ( nums[i] + x - 1 ) / x;
        }
        return result;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin() , nums.end());
        int ans = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            int result = possible(nums, mid);
            if(result <= threshold){
                ans = min(ans,mid);
                high = mid - 1;
            }
            else low = mid + 1;

        }
        return ans;
    }
};