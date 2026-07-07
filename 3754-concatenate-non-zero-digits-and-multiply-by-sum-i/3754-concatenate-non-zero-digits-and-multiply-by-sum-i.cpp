class Solution {
public:
    long long sumAndMultiply(int n) {
        long long digit = 0 ;
        int sum = 0;
        long long place = 1;
        while( n>0 ){
            int rem = n%10;
            if(rem != 0){
            digit += place * rem;
            place *= 10;
            sum += rem;
            }
            n /= 10;
        }
        return digit*sum;
    }
};