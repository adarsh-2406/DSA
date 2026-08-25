class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n = skill.size();
        int i = 0;
        int j = n-1;
        int sum = skill[0] + skill[n-1];
        long long ans=0;
        while(i<j){
            if(skill[i] + skill[j] == sum){
                ans += skill[i]*skill[j];
            }
            else return -1;
            i++;
            j--;
        }
        return ans;
    }
};