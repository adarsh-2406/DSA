class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0 ;
        int right =0;
        int l = INT_MIN;
        int count =0;
        while(right<nums.size()){
            if(nums[right] == 0) count++;
            right++;
            while(count>k){
                if(nums[left] == 0){
                    count--;
                }
                left++;
            }
            l = max(l,right-left);
        }
        return l;
    }
};