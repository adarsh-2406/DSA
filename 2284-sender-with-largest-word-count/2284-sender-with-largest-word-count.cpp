class Solution {
public:
    int countWords(string s){
        int count = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ') count++;
        }
        return count;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string , int> mp;
        for(int i = 0; i < messages.size(); i++){
            mp[senders[i]] += countWords(messages[i]);
        }
        int maxi = -1;
        string ans = "";
        for(auto m : mp){
            if(m.second > maxi){
            ans = m.first;
            maxi = m.second;
        }
        // GPT se dekha ye case , to solve if there is more than 1 max;
        else if ( m.second == maxi && m.first > ans){ 
            ans = m.first;
        }
    }
    return ans;
    }
};