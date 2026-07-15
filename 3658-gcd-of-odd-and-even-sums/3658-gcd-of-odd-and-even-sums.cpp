
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int osum = n*n;
        int esum = n*(n+1);
        while(esum != 0){
            int rem = osum % esum;
            osum = esum; 
            esum = rem;
            
        }
        return osum;
    }
};