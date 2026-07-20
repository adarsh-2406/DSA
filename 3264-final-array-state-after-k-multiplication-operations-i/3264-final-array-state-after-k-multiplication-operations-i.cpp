class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k > 0){
        int min = INT_MAX;
        int min_index = -1;
            for(int i = 0 ; i < nums.size(); i++){
                if(nums[i] < min) {
                    min = nums[i];
                    min_index = i;
                }
            }
            nums[min_index] *= multiplier;
            k--; 
        }
        return nums;
    }
};