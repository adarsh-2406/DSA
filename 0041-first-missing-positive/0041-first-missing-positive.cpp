class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size() ;
            int i = 0;
            while(i<size){
            if(nums[i] != i+1 && nums[i] > 0 &&  nums[i] <= size &&nums[i] != nums[nums[i] - 1]){
                swap(nums[i] , nums[nums[i] - 1]);
            }
            else i++;
        }
        for(int i = 0 ; i<size ; i++){
            if(nums[i] != i+1) return i+1;
        }
        return i+1;
    }
};