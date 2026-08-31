class Solution {
public:
    int totalOnes(vector<int>&nums){
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == 0) high = mid-1;
            else low = mid +1;
        }
        return low;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>ans;
        for(int i = 0; i < mat.size(); i++){
            ans.push_back({totalOnes(mat[i]),i});
        }
        sort(ans.begin(),ans.end());
        vector<int> result;
        for(int i =0; i<k ;i++){
            result.push_back(ans[i].second);
        }
        return result;
    }
};