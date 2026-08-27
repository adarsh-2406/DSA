class Solution {
public:
    // int binarySearch(vector<int>&nums,int target){
    //     int low =0;
    //     int high = nums.size() -1;
    //     while(low<=high){
    //         int mid = low + (high-low)/2;
    //         if(nums[mid] == target) return 1;
    //         else if (nums[mid] < target) low = mid+1;
    //         else high = mid - 1;
    //     }
    //     return 0;
    // }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low =0;
        int high = n*m-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int row = mid / m;
            int col = mid % m;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col] < target) low = mid +1;
            else high = mid -1;
        }
        return false;
    }
};