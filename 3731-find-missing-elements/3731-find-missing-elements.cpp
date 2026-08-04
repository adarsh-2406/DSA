class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // do it with checking method , and mark true ;
       vector<int> ans;
        sort(nums.begin(), nums.end());
        int check = nums[0];
        for(int i = 0; i< nums.size();i++){
            if(nums[i] != check) {
                ans.push_back(check);
                i--;
            }
            check++;
        }
        return ans;
    }
};