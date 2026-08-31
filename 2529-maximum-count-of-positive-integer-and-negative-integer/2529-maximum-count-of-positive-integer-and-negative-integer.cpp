class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid] >= 0){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        if(low != n && nums[low] == 0 ){
            int i =0;
            for(i = low ; i< n ;i++){
                if(nums[i] != 0) break; 
            }
            return max(low,n-i);
        } 
        return max(low,n-low);
    }
};