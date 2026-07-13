class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i = 0; i< nums.size();i++){
            if(nums[i] == 0) nums[i] =-1;
        }
        unordered_map<int , int> mp;
        int sum = 0;
        int max_len = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            sum+=nums[i];
            if(sum == 0){
                max_len = i+1;
            }
            else if(mp.find(sum) != mp.end()){
                max_len = max(max_len , i - mp[sum]);
            }
            else {
                mp[sum] = i;
            }
        }
        return max_len;
    }
};