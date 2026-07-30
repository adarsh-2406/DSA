class Solution {
public:
    bool checkGoodInteger(int n) {
        long int digitSum = 0;
        long int squareSum = 0;
        while(n > 0){
            int digit = n%10;
            digitSum += digit;
            squareSum += digit*digit;
            n /= 10;
        }
        return squareSum - digitSum >= 50;
    }
};