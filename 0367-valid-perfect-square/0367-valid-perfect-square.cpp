class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = num;
        while(low<=high){
            int mid = low + ( high - low )/2;
            long int product =(long)mid * mid;
            if(product == num) return true;
            else if ( product> num) high = mid-1;
            else low = mid + 1;
        }
        return false;
    }
};