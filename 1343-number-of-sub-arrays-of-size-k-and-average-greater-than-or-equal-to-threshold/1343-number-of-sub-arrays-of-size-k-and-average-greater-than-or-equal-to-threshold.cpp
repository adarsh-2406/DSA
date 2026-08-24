class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum =0;
        for(int i = 0; i<k; i++){
            sum+=arr[i];
        }
        int count = 0;
        if(sum/k >= threshold) count++;
        int i = 0;
        for(int j = k; j<arr.size(); j++,i++){
            sum += arr[j] - arr[i];
            if(sum/k >= threshold) count++;
        }
        return count;
    }
};