class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ans = 0;
        int row = 0;
        for(int i =0; i < mat.size(); i++){
            int c = 0;
            for(int j = 0; j< mat[i].size(); j++){
                if(mat[i][j] == 1) c++;
            }
            if(c > ans){
                row = i;
                ans = c;
            }
        }
        return {row,ans};
    }
};