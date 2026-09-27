class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
            if(st.top() == '*'){
                st.pop();
                st.pop();
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};