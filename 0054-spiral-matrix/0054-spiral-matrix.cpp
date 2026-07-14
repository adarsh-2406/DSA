class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int left = 0 , right = matrix[0].size() - 1;
        int top = 0 , bottom = matrix.size() - 1;
        while(left <= right && top <= bottom){
        for(int i = left ; i <= right ; i++){
            ans.push_back(matrix[top][i]);
        }
        for(int i = top + 1; i<= bottom ; i++){
            ans.push_back(matrix[i][right]);
        }
        for(int i = right - 1; i>=left; i--){
            if(top == bottom) break;
            ans.push_back(matrix[bottom][i]);
        }
        for(int i = bottom-1 ; i>top ; i--){
            if(left == right) break;
            ans.push_back(matrix[i][left]);
        }
        left++;
        right--;
        top++;
        bottom--;
        }
        return ans;

    }
};