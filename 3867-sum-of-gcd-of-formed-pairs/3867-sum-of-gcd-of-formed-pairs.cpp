class Solution {
public:
    int gcd(int a , int b){
        while(b!= 0 ){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int mx = INT_MIN;
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > mx) mx = nums[i];
            ans.push_back(gcd(mx , nums[i]));
        }
        sort(ans.begin() , ans.end());
        int i = 0;
        int j = ans.size() - 1;
        long long sum = 0;
        while(i < j){
            sum += gcd(ans[i] , ans[j]);
            i++;
            j--;
        }
        return sum;
    }
};