class Solution {
public:
    int smallestNumber(int n, int t) {
        while ( true ) {
            int digit = n;
            int prod = 1;
            while(digit != 0){
                prod *= digit%10;
                digit = digit /10;
            }
            if(prod % t == 0) return n;
            else n++;
        }
    }
};