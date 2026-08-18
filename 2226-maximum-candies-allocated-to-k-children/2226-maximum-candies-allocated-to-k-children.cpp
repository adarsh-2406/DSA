class Solution {
public:
    long long isPossible(vector<int>& candies,int mid){
        long long count = 0;
        for(int nums : candies){
            count += nums/mid;
        }
        return count;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long low = 1;
        long long high = *max_element(candies.begin() , candies.end());
        int ans = 0;
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(isPossible(candies,mid) >= k){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};