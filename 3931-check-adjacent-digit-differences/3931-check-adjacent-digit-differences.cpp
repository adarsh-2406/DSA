class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.size();
        int i = 0;
        int j = 1;
        while(j<n){
            if(abs(s[i] - s[j]) > 2) return false;
            i++;
            j++;
        }
        return true;
    }
};