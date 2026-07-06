class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count = 0;
        int i = 0;
        int j = nums.size() -1;
        while(i<j){
            while(nums[i] !=0 && i<j){
                i++;
            }
            while(nums[j] == 0 && i<j) {
                j--;
            }
            if(i<j){
            swap(nums[i],nums[j]);
            count++;
            }
        }
        return count;
    }
};