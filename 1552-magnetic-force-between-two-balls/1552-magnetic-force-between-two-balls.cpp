class Solution {
public:
    bool isPossible(vector<int>& position , int mid, int m){
        int last = position[0];
        int balls = 1;
        for(int i = 1 ; i< position.size(); i++){
            if(position[i] - last >= mid){
                balls++;
                last = position[i];
            }
        }
        return balls>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int low = 0;
        int high = position[n-1] - position[0];
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(isPossible(position,mid,m)){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};