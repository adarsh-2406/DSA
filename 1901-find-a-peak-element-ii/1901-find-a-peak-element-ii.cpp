class Solution {
public:
    int maxindex(vector<vector<int>>&mat , int mid){
        int maxi = -1;
        int index = -1;
        for(int i =0; i<mat.size(); i++){
            if(mat[i][mid] > maxi){
                maxi = mat[i][mid];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int high = mat[0].size();
        while(low<=high){
            int mid = low + (high-low)/2;
            int max_index = maxindex(mat,mid);
            int left = mid - 1 >= 0 ? mat[max_index][mid-1] : -1;
            int right = mid + 1 < mat[0].size() ? mat[max_index][mid+1] : -1;
            if(mat[max_index][mid] > left && mat[max_index][mid] > right) return {max_index,mid};
            else if (mat[max_index][mid] < left) high = mid -1;
            else if (mat[max_index][mid] < right) low = mid +1;

        }
        return {-1,-1};

    }
};