class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int gap = -1;
        int max_gap = 0;
        for(int i = 1 ; i<nums.size(); i++){
            gap = nums[i] - nums[i-1];
            max_gap = max(max_gap , gap);
        }
        return max_gap;
    }
};