class Solution {
public:
    long long findhours(vector<int>& piles, int avg){
        long long total_hours=0;
        for(int i = 0; i < piles.size();i++){
            total_hours += ((long long)piles[i] + avg -1)/avg; // to find ceil;
        }
        return total_hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            long long total_hours = findhours(piles,mid);
            if(total_hours <= h){
                ans = mid;
                high = mid-1;
            }
            else low = mid +1;
        }
        return ans;
    }
};