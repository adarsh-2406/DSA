class Solution {
public:
    // int partion(vector<int>&nums, int low, int high){
    //     int pivot = nums[high];
    //     int j = low - 1;
    //     for(int i = low ; i < high; i++){
    //         if(nums[i] <= pivot){
    //             j++;
    //             swap(nums[i],nums[j]);
    //         }
    //     }
    //     j++;
    //     swap(nums[j],nums[high]);
    //     return j;
    // }
    // int quickSelect(vector<int>&nums, int low, int high,int target){
    //     if(low<=high){
    //         int pivot = partion(nums,low,high);
    //         if(pivot == target){
    //             return nums[pivot];
    //         }
    //         else if(pivot < target){
    //             return quickSelect(nums,pivot+1,high,target);
    //         }
    //         else return quickSelect(nums,low,pivot-1,target);
    //     }
    //     return -1;

    // }
    int findKthLargest(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     int ans = quickSelect(nums,0,n-1,n-k);
    //     return ans;
    sort(nums.begin(),nums.end());
    return nums[nums.size() - k];
    }
};