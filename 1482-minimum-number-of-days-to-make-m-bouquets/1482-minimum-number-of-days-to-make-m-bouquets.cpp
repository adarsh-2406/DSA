class Solution {
public:
    int check(vector<int>& bloomDay, int bloom,int m, int k){
        int count = 0;
        int ans= 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= bloom){
                count++;
            }
            else {
                ans += count / k;
                count = 0;
            }
        }
        ans += count/k;
        if(ans >= m) return 1;
        return 0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()) return -1;
        int ans = -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low<=high){
            int mid = low + (high-low)/2;
            if(check(bloomDay,mid,m,k)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid +1;
        }
        return ans;
    }
};