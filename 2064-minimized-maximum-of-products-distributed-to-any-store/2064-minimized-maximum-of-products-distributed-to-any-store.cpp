class Solution {
public:
    bool isPossible(vector<int>& quantities,int mid, int n){
        int ciel = 0;
        for(int nums : quantities){
            ciel += (nums + mid - 1)/mid;
            if(ciel>n) return false;
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1;
        int high = *max_element(quantities.begin() , quantities.end());
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(isPossible(quantities,mid,n)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};