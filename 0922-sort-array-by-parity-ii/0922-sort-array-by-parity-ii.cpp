class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int j=1;
        while(i < nums.size() && j < nums.size()){
            if(nums[i] % 2 == 0){
                i+= 2;
                continue;
            }
            if(nums[j] % 2 !=0) {
                j+=2;
                continue;
            }
                swap(nums[i],nums[j]);
                
        }
        return nums;
    }
};