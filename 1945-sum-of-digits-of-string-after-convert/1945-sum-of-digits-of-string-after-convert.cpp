class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(int i = 0; i<s.size(); i++){
            int num = s[i] - 'a' + 1;
            while(num>0){
                sum += num%10;
                num /= 10;
            }
        }
        k--;
        int ans = 0;
        while(k--){
            int n = sum;
            sum = 0;
            while(n>0){
                sum += n%10;
                n /= 10;
            }
           
        }
        return sum;
    }
};