class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int x = 1;
        vector<string>ans;
        for(int i=0; i<target.size(); i++){
            ans.push_back("Push");
            if(x != target[i]) {
                ans.push_back("Pop");
                i--;
            }
            x++;
        }
        return ans;
    }
};