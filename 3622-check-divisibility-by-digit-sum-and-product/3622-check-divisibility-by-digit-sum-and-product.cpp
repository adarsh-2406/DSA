class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int m = n;
        long long product = 1;
        while(n != 0){
            int rem = n%10;
            sum += rem;
            product *= rem;
            n /= 10;
        }
        if(m % (sum+product)==0) return true;
        return false;
    }
};