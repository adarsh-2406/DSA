class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char , char> mp;
        char ch = 'a';
        for(int i =0; i <key.size(); i++){
            if(key[i] == ' ' || mp.find(key[i]) != mp.end()) continue;
            mp[key[i]] = ch;
            ch++; 
        }
        string ans = "";
        for(int i =0; i < message.size(); i++){
            if(message[i] == ' '){
                ans += ' ';
                continue;
            }
            ans += mp[message[i]];
                
        }
        return ans;
    }
};