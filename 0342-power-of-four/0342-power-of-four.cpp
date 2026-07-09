class Solution {
public:
    bool isPowerOfFour(int n) {
        int setbit = 0;
        int m = n;
        while(n>0){
            if(n&1) setbit++;
            n = n>>1;
        }
        
        if(setbit == 1 && m%3 == 1) return true;
       
        return false;
    }
};