class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       int n = s.size();
       vector<string>ans(n);

        for(int i=0; i<n; i++){
            ans[indices[i]] = s[i]; 
        }
        string result = "";
        for(int i = 0; i < n; i++){
            result += ans[i];
        }
        return result;
    }
};