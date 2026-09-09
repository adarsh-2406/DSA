class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>freq(123,0);
        for(int i=0 ; i<word.size(); i++){
            freq[word[i]]++;
        }
        int count=0;
        for(int i = 65 ; i <= 90; i++){
            if(freq[i] != 0 && freq[i+32] != 0) count++;
        }
        return count;
    }
};