class Solution {
public:
    int maxDistinct(string s) {
        set<char>set;
        for(int i = 0 ; i < s.size(); i++){
            set.insert(s[i]);
        }
        return set.size();

        // method 2 : do it with frequency , check you have seen that element before or not;

    }
};