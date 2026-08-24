class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i = 0 ; i < k ; i++){
            sum += nums[i];
        }
        int l = 0;
        int r = k - 1;
        double avg = INT_MIN;
        while(r<nums.size()-1){
            avg = max(avg,sum/k);
            sum -= nums[l];
            l++;
            r++;
            sum += nums[r];

        }
        avg = max(sum/k,avg);
        return avg;
    }
};