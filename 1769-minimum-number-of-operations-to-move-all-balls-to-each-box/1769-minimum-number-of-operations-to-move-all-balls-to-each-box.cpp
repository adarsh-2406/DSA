class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        for(int i = 0 ; i<boxes.size();i++){
            int move = 0;
            for(int j=0;j<boxes.size(); j++){
                if(boxes[j] == '0' || j==i) continue;
                move += abs(j-i);
            }
            ans.push_back(move);
              
        }
        return ans;

    }
};