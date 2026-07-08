class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int max = INT_MIN;
        int min = INT_MAX;
        vector<int>ans;
        for(int i = 0 ; i<nums.size() ; i++){
            int digit = nums[i];
            max = INT_MIN;
            min = INT_MAX;
            if(nums[i] == 0) {
                max = 0;
                min = 0;
            }
            while(digit > 0){
                int rem = digit%10;
                digit /= 10;
                if(rem > max) max = rem;
                if(rem < min) min = rem;
            }
            ans.push_back(max - min);


        }
        int range = *max_element(ans.begin() , ans.end());
        int result = 0;
        for(int i = 0; i< ans.size();i++ ){
            if(ans[i]==range) result+=nums[i];
        }
        return result;

    }
};