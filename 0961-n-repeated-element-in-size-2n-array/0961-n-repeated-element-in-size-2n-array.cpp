class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> st;
        for(int num : nums){
            if(st.count(num) != 0) return num;
            st.insert(num);
        }
        return 0;
    }
};