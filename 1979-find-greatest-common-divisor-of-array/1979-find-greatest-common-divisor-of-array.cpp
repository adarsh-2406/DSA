class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        int ans;
        for(int i = 1; i<nums.size();i++){
            if(nums[i]>max) max=nums[i];
            if(nums[i]<min) min=nums[i];
          }
          while(min!=0){
            ans = max%min;
            max=min;
            min=ans;
          }
          return max;
    }

};