class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count = 0;
        long long sum = 0;
        mp[0] = 1; //isse sum - k check nhi krna pdega;
        for(int i = 0 ; i < nums.size(); i++){
            sum += nums[i];
            // if(sum == k){    agr sum == k hoga toh mtlb ab remaning 0 chaiye
            //     count++;
            // }
            count += mp[sum-k]; // sum == k hone pe mp[0] hoga jo 1 dedega count me;
            mp[sum]++;
        }
        return count;
    }
};