class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0;
        int left = 0;
        int right = n - 1;
        int down = n -1;
        int count = 1;
        
        vector<vector<int>> ans(n,vector<int>(n));
        while(top <= down && left<=right){

            for(int i = left ; i <= right; i++){
                ans[top][i]= count++;
            }
            for(int i = top + 1;  i<= down; i++){
                ans[i][right] = count++;
            }

            for(int i = right - 1; i>= left; i--){
                ans[down][i] = count++;
            }

            for(int i = down - 1; i > top ; i--){
                ans[i][left]= count++;
            }
            top++;
            left++;
            right--;
            down--;
        }
        return ans;
    }
};