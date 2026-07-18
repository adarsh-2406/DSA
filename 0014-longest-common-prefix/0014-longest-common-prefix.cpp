class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans;
        int size = strs.size();
        int i = 0 ;
        int j = 0;
        while(i < strs[0].size() && j < strs[size-1].size()){
            if(strs[0][i] == strs[size-1][j]){
                ans += strs[0][i];
            }
            else break;
            i++;
            j++;
        }
        return ans;
    }
};