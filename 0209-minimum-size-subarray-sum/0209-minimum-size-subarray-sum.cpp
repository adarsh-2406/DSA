class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = -1;
        int j = 0;
        int sum = 0;
        int length = INT_MAX;
        for(j = 0 ; j < nums.size(); j++){
            sum += nums[j];
            while(sum >= target){
                length = min(length,j-i);
                i++;
                sum -= nums[i];
            }
        }
        if(length == INT_MAX) return 0;
        return length;
    }
};