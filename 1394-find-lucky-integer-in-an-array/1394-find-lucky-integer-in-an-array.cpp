class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int ,int >mpp;
        for(auto x : arr){
            mpp[x]++;
        }
        int lucky = -1;
        for(auto x : mpp){
            if(x.first == x.second) lucky = max(lucky , x.first);
        }
        return lucky;
    }
};