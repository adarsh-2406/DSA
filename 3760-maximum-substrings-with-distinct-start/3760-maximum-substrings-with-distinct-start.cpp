class Solution {
public:
    int maxDistinct(string s) {
        set<char>set;
        for(int i = 0 ; i < s.size(); i++){
            set.insert(s[i]);
        }
        return set.size();

    }
};