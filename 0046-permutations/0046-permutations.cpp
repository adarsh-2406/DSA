void permutations(vector<int>&nums , vector<vector<int>>&ans, int index){
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int j = index ; j<nums.size(); j++){
        swap(nums[j],nums[index]);
        permutations(nums,ans,index+1);
        swap(nums[j],nums[index]);
    }
}
class Solution {

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        permutations(nums,ans,index);
        return ans;
    }
};