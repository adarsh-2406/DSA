class Solution {
public:
    int maxVowels(string s, int k) {
        int vowel = 0;
        for(int i = 0; i < k;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]=='u'){
                vowel++;
            }
        }
        int i = 0;
        int ans = vowel;
        for(int j = k; j<s.size(); j++){

            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j]=='u'){
                vowel++;
            }
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]=='u'){
                vowel--;
            }
            i++;
            ans = max(ans,vowel);
        }
        return ans;
    }
};