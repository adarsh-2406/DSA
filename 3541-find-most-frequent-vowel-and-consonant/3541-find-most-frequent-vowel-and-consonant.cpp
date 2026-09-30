class Solution {
public:
    int maxFreqSum(string s) {
        int a = 0 , e = 0 , i = 0 , o = 0, u = 0;
        vector<int>freq(26,0);
        for(int j = 0; j<s.size(); j++){
            if(s[j] == 'a') a++;
            else if(s[j] == 'e') e++;
            else if(s[j] == 'i') i++;
            else if(s[j] == 'o') o++;
            else if(s[j] == 'u') u++;
            else freq[s[j] - 'a']++;
        }
        int x = max({a,e,i,o,u});
        int y = *max_element(freq.begin() , freq.end());
        return x+y;
    }
};