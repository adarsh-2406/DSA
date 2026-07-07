class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        // vector<int>ans(2,0); vector lene ki jrut nhi , ek hi answer hai
        while(i<j){
            
            if( numbers[i] + numbers[j] == target ){
                return {i+1 , j+1 };
                // ans[0] = i+1;
                // ans[1] = j+1;
               
            }
            else if( numbers[i] + numbers[j] > target){
                j--;
            }
            else i++;
        }
        return {-1,-1};
    }
};