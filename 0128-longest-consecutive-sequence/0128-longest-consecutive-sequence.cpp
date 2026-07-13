class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        if(nums.empty()) return 0;
        int longest = 1;
        // saara set me daal diya 
        // fir set me check kro ki usse pehle ka toh nhi hai , agr 101 hai toh check kro 100 toh nhi , agr nhi toh
        for(int i = 0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int count = 1;
                while(st.find(it+1) != st.end()){
                    count++;
                    it = it+1;
                }
                longest = max(count,longest);
            }
        }
        return longest;
    }
};