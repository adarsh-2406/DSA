class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>freq(26,0);
        for(char ch : s){
            freq[ch - 'a']++;
        }
        int check = freq[s[0] - 'a'];
        for(char ch: s){
            if(freq[ch - 'a'] != check) return false;
        }
        return true;
    }
};