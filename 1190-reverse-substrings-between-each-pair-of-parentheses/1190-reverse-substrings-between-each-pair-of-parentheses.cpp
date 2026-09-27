class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        string ans ="";
        string temp = "";
        for(int i=0; i<s.size(); i++){
            st.push(s[i]);
            if(st.top() == ')'){
                st.pop();
                while(st.top() != '('){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                int i = 0;
                while( i < temp.size()){
                    st.push(temp[i]);
                    i++;
                }
                temp = "";
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};