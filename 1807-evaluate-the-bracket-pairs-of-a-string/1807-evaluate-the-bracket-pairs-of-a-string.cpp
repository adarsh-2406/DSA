class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(int i=0; i<knowledge.size(); i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        string ans = "";
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i] != '(' && s[i] != ')'){
                ans += s[i];
            }
            else if(s[i] == '('){
                i++;
                while(i < s.size() && s[i] != ')'){
                    temp += s[i];
                    i++;
                }
            if(mp.find(temp) != mp.end()){
                ans += mp[temp];
            }
            else ans += "?";
            }
            temp = "";
        }
        return ans;
    }
};