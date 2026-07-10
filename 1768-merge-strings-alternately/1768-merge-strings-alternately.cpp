class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string str;
        while(i < word1.size() && j < word2.size()){
            str.push_back(word1[i++]);
            str.push_back(word2[j++]);
        }
        while( i < word1.size()){
            str.push_back(word1[i++]);
        }
        while( j < word2.size()){
            str.push_back(word2[j++]);
        }
        return str;
    }
};