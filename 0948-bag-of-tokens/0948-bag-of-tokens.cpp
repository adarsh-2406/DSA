class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i = 0;
        int j = tokens.size() - 1;
        int score = 0;
        int ans = 0;
        sort(tokens.begin() , tokens.end());
        while(i<=j){
            if(tokens[i] <= power ){
                power -= tokens[i];
                score++;
                ans = max(ans , score);
                i++;
            }
            else if(tokens[j] > power && score >0){
                score--;
                power += tokens[j];
                j--;
            }
            else break;
        }
        return ans;
    }
};