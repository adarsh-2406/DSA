class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>left(n);
        int maxi = -1;
        for(int i = 0 ; i < n ; i++){
            maxi = max(maxi,height[i]);
            left[i] = maxi;
        }
        vector<int>right(n);
        maxi = -1;
        for(int i = n-1; i>=0 ;i--){
            maxi = max(maxi,height[i]);
            right[i] = maxi;
        }
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += min(left[i],right[i]) - height[i];
        }
        return sum;
    }
};